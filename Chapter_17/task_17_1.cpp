#include <iostream>

int main() {

    using std::cout;
    using std::endl;
    using std::cin;

    cout << "Enter characters:\n";
    char ch {};
    size_t ct {};
    while(cin.peek() != '$') {
        cin.get(ch);
        ++ct;
    }
    cin.get(ch);
    cout << "Next character: " << ch << endl;
    cout << "Number of characters: " << ct << endl;

    return 0;
}
