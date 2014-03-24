#include <iostream>
#include <string>

void convertToUpper(std::string & str);

int main() {

    using namespace std;

    cout << "Enter a string (q to quit): ";
    string str {};
    while (getline(cin, str)) {
        if (str.size() == 1 && str[0] == 'q') {
            break;
        }
        convertToUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }

    return 0;
}

void convertToUpper(std::string & str) {
    for (size_t i = 0; i < str.size(); ++i) {
        str[i] = toupper(str[i]);
    }
}
