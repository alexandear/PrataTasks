#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cpmv {

public:
    struct Info {
        string qcode;
        string zcode;
    };
private:
    Info * pi;
public:
    Cpmv();
    Cpmv(string q, string z);
    Cpmv(const Cpmv & cp);
    Cpmv(Cpmv && mv);
    ~Cpmv();
    Cpmv & operator=(const Cpmv & cp);
    Cpmv & operator=(Cpmv && mv);
    Cpmv operator+(const Cpmv & obj) const;
    void Display() const;
};

int main() {

    Cpmv one;
    Cpmv two("12342", "53399");
    Cpmv three = two;
    Cpmv four(one + two);
    Cpmv five;
    five = three + four;
    std::vector<Cpmv> v{};
    v.push_back(Cpmv("4321", "3419"));
    cout << "object one: ";
    one.Display();
    cout << "object two: ";
    two.Display();
    cout << "object three: ";
    three.Display();
    cout << "object four: ";
    four.Display();
    cout << "object five: ";
    five.Display();
    cout << "object from vector: ";
    v.back().Display();

    return 0;
}

Cpmv::Cpmv() {
    cout << "default constructor called\n";
    pi = new Info;
    pi->qcode = "";
    pi->zcode = "";
}

Cpmv::Cpmv(string q, string z) {
    cout << "std::string constructor called\n";
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp) {
    cout << "copy constructor called\n";
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv && mv) {
    cout << "move constructor called\n";
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv() {
    cout << "destructor called\n";
    delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp) {
    cout << "assignment operator\n";
    if (this != &cp) {
        delete pi;
        pi = new Info;
        pi->qcode = cp.pi->qcode;
        pi->zcode = cp.pi->zcode;
    }
    return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv) {
    cout << "assignment move operator\n";
    if (this != &mv) {
        delete pi;
        pi = mv.pi;
        mv.pi = nullptr;
    }
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const {
    cout << "entering operator+()\n";
    Cpmv temp = Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
    cout << "leaving operator+()\n";
    return temp;
}

void Cpmv::Display() const {
    cout << "qcode: " << pi->qcode << "; zcode: " << pi->zcode << endl;
}
