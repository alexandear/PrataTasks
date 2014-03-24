#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void ShowStr(const std::string & str);
void GetStrs(std::ifstream & is, std::vector<std::string> & vistr);

struct Store {
    std::ofstream & os;
    Store(std::ofstream & os) : os(os) { }
    void operator ()(const std::string & str);
};

const std::string fileName = "../Chapter_17/strings.dat";

int main() {

    using namespace std;

    vector<string> vostr {};
    string temp {};

// acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin,temp) && temp[0] != '\0')
    vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

// store in a file
    ofstream fout(fileName.c_str(), ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

// recover file contents
    vector<string> vistr {};
    ifstream fin(fileName.c_str(), ios_base::in | ios_base::binary);
    if (!fin.is_open()) {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void ShowStr(const std::string & str) {
    std::cout << str << std::endl;
}

void Store::operator ()(const std::string & str) {
    size_t len {str.size()};
    os.write((char *)&len, sizeof(size_t)); // store length
    os.write(str.data(), len); // store characters
}

void GetStrs(std::ifstream & is, std::vector<std::string> & vistr) {
    size_t len {};
    char * data {};
    while(is.read((char *) &len, sizeof(size_t)) && len > 0) {
        data = new char[len + 1];
        is.read(data, len);
        if (is)
            vistr.push_back(std::string(data, len));
    }
    delete [] data;
}
