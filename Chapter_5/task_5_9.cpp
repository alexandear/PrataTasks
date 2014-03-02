#include <iostream>
#include <string>

int main() {

    using namespace std;

    cout << "Enter words (to stop, type the word done):" << endl;
    string word {};

    cin >> word;
    int i {};
    while(word != "done") {
        cin >> word;
        i++;
    }
    cout << "You entered a total of " << i << " words" << endl;

    return 0;
}
