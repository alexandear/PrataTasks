#include <iostream>
#include <string>

void strCount(const std::string & str);

int main() {

    using namespace std;

    string input {};
    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "") {
        strCount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";

    return 0;
}

void strCount(const std::string & str) {
    static int total {};
    size_t count {};

    std::cout << "\"" << str <<"\" contains ";
    count = str.size();
    total += count;
    std::cout << count << " characters\n" << total << " characters total\n";
}
