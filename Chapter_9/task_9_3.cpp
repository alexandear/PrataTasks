#include <cstring>
#include <iostream>
#include <new>

struct chaff {
    char dross[20];
    int slag;
};

int main() {

    using namespace std;

    char buffer1[200];
    chaff * ch1 = new (buffer1) chaff[2];

    strcpy(ch1[0].dross, "Dross 1");
    ch1[0].slag = 4;
    strcpy(ch1[1].dross, "Dross 2");
    ch1[1].slag = 9;

    for (int i = 0; i < 2; ++i) {
        cout << "Dross: " << ch1[i].dross << endl;
        cout << "Slag: " << ch1[i].slag << endl;
    }

    char * buffer2 = new char[200];
    chaff * ch2 = new (buffer2) chaff[2];

    strcpy(ch2[0].dross, "Dross 3");
    ch2[0].slag = 11;
    strcpy(ch2[1].dross, "Dross 4");
    ch2[1].slag = 19;

    for (int i = 0; i < 2; ++i) {
        cout << "Dross: " << ch2[i].dross << endl;
        cout << "Slag: " << ch2[i].slag << endl;
    }

    return 0;
}
