#include <cstring>
#include <iostream>
#include "cow.h"

Cow::Cow() {
    std::strcpy(name, "default cow");
    hobby = new char[15];
    std::strcpy(hobby, "default hobby");
    weight = 100;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
    std::strcpy(name, nm);
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c) {
    init(c);
}

Cow::~Cow() {
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c) {
    if (this == &c)
        return *this;
    init(c);
    return *this;
}

void Cow::init(const Cow & c) {
    std::strcpy(name, c.name);
    delete [] hobby;
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

void Cow::ShowCow() const {
    std::cout << "Name: " << name << "\nHobby: " << hobby
              << "\nWeight: " << weight << std::endl;
}
