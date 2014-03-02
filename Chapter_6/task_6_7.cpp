#include <iostream>
#include <string>
#include <cstring>

const int vowelSize = 5;
const char vowelArray[vowelSize] = {'a', 'e', 'i', 'o', 'u'};

int main() {

    using namespace std;

    cout << "Enter words (q to quit):\n";

    int vowels {};
    int consonants {};
    int others {};
    string word {};
    while(cin >> word) {
        if (isalpha(word[0])) {
            if (word.size() == 1 && word[0] == 'q') {
                break;
            }

            char ch = tolower(word[0]);
            int i {};
            for (i = 0; i < vowelSize; ++i) {
                if (ch == vowelArray[i]) {
                    ++vowels;
                    break;
                }
            }
            if (i == vowelSize) {
                ++consonants;
          }
        } else {
            ++others;
        }
    }

    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";

    return 0;
}
