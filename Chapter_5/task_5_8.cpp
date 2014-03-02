#include <cstring>
#include <iostream>

int main() {

    using namespace std;

    cout << "Enter words (to stop, type the word done):" << endl;
    char word[20] {};

    cin >> word;
    int i {};
    while(strcmp(word, "done")) {
        cin >> word;
        i++;
    }
    cout << "You entered a total of " << i << " words" << endl;

    return 0;
}
