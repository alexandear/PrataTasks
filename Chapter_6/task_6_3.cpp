#include <iostream>

int main() {

    using namespace std;

    cout << "Please enter one of the following choises:\n";
    cout << "c) carnivore\tp) pianist\nt) tree\t\tg) game\n";

    char ch {};
    do {
        cout << "Please enter a c, p, t, or g: ";
        cin.get(ch).get();
    } while(ch != 'c' && ch != 'p' && ch != 'g');

    switch (ch) {
    case 'c':
        cout << "Carnivore\n";
        break;
    case 'g':
        cout << "Game\n";
        break;
    case 'p':
        cout << "Pianist\n";
        break;
    case 't':
        cout << "Tree\n";
        break;
    }

    return 0;
}
