#include "dma.h"

const size_t Len {40}; // max length of Label, Rating, Color, and Style strings
const size_t Items {4}; // total of 4 items to be entered

int main() {

    using namespace std;

    char label[Len] {}, color[Len] {}, style[Len] {}, choice {};
    int rating {};

    abstractDMA * pt[Items]; // array of abstract base class pointers

    for (size_t i = 0; i < Items; i++) {
        cout << "\nEnter 1 for create baseDMA object, 2 for lacksDMA "
                "object, 3 for hasDMA object: ";
        while ((cin >> choice).get()
               && (choice != '1' && choice != '2' && choice != '3')) {
            cout << "Enter either 1, 2, or 3. : ";
        }

        cout << "\nItem #" << i + 1 << " Label: ";
        cin.getline(label,Len);
        cout << "Item #" << i + 1 << " Rating: ";
        (cin >> rating).get();

        switch(choice) {
        case '1':
            pt[i] = new baseDMA (label, rating); // baseDMA class
            break;

        case '2':
            cout << "Item #" << i + 1 << " Color: "; // lacksDMA class
            cin.getline(color,Len);
            pt[i] = new lacksDMA(color, label, rating);
            break;

        case '3':
            cout << "Item #" << i + 1 << " Style: "; // hasDMA class
            cin.getline(style,Len);
            pt[i] = new hasDMA(style,label, rating);
            break;
        }

    }

    cout << "\nDisplaying entered items:";
    for (size_t i = 0; i < Items; i++) {
        cout << "\n--------";
        cout << *pt[i];
    }

    for (size_t i = 0; i < Items; i++) {
        delete pt[i];
    }

    return 0;
}
