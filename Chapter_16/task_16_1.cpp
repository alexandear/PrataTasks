#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string & str);

int main() {

    string str {};
    cout << "Enter a string:\n";
    getline(cin, str);
    cout << boolalpha << "Palindrome: " << isPalindrome(str) << endl;

    return 0;
}

bool isPalindrome(const string & str) {
    return str == string(str.rbegin(), str.rend());
}
