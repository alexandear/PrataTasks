#include <algorithm>
#include <cctype>
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
    string tmpStr;
    for_each(str.begin(), str.end(), [&](char ch){
        if (isalpha(ch)) {
            tmpStr.push_back(tolower(ch));
        };
    });
    return tmpStr == string(tmpStr.rbegin(), tmpStr.rend());
}
