#include <iostream>
#include <string>
#include <cstring>

const int VowelSize = 5;
const char VowelArray[VowelSize] = {'a', 'e', 'i', 'o', 'u'};

int main() {

    using namespace std;

    cout << "Enter words (q to quit):\n";

    size_t vowels {};
    size_t consonants {};
    size_t others {};
    string word {};

    while(cin >> word) {
        if (isalpha(word[0])) {
            if (word.size() == 1 && word[0] == 'q') {
                break;
            }

            char ch = tolower(word[0]);
            size_t i {};
            for (i = 0; i < VowelSize; ++i) {
                if (ch == VowelArray[i]) {
                    ++vowels;
                    break;
                }
            }
            if (i == VowelSize) {
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
