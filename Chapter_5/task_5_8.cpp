#include <cstring>
#include <iostream>

int main() {

    using namespace std;

    cout << "Enter words (to stop, type the word done):\n";
    char word[20] {};

    cin >> word;
    size_t i {};
    while(strcmp(word, "done")) {
        cin >> word;
        i++;
    }
    cout << "You entered a total of " << i << " words\n";

    return 0;
}
