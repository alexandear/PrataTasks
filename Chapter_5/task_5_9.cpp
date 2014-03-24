#include <iostream>
#include <string>

int main() {

    using namespace std;

    cout << "Enter words (to stop, type the word done):\n";
    string word {};

    cin >> word;
    size_t i {};
    while(word != "done") {
        cin >> word;
        i++;
    }
    cout << "You entered a total of " << i << " words\n";

    return 0;
}
