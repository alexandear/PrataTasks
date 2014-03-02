#include <cctype>
#include <iostream>

int main() {

    using namespace std;

    char ch {}, tmp {};
    ch = cin.get();
    while(ch != '@') {
        if(!isdigit(ch)) {
            tmp = islower(ch) ? toupper(ch) : tolower(ch);
            cout.put(tmp);
        }
        ch = cin.get();
    }

    return 0;
}
