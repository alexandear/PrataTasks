#include <iostream>
#include "plorg.h"

Plorg::Plorg(const char * name, int ci) {
    strcpy(name_, name);
    ci_ = ci;
}

void Plorg::show() const {
    std::cout << "Name: " << name_ << "\nCI: " << ci_ << std::endl;
}

void Plorg::setCi(int ci) {
    ci_ = ci;
}
