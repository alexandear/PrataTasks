#include <iostream>
#include "port.h"
#include "vintagePort.h"

int main() {

    using std::cout;
    using std::endl;

    Port port1;
    Port port2("Kings", "Bright", 30);
    Port port3("NewOne", "DarkRed", 15);
    VintagePort vport1("Valley", 10, "Family", 1957);
    Port port4(vport1);

    port2 -= 14;
    port3 += 4;

    Port * ports[5] {&port1, &port2, &port3, &vport1, &port4};

    for (int i = 0; i < 5; ++i) {
        ports[i]->Show();
        cout << endl;
    }

    cout << "Bottles: ";
    for (int i = 0; i < 5; ++i) {
        cout << ports[i]->BottleCount() << " ";
    }
    cout << endl;

    VintagePort vport2("BlueCastle", 20, "NewType", 1920);
    VintagePort vport3;
    vport3 = vport2;
    cout << "\n" << vport3 << endl;

    VintagePort vport4(vport3);
    vport4.Show();


    return 0;
}
