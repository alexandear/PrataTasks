#include "classic2.h"

Classic::Classic() : Cd() {
    primaryWork = new char[1];
    primaryWork[0] = '\0';
}

Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x)
    : Cd(s1, s2, n, x) {
    primaryWork = new char[40];
    std::strcpy(primaryWork, s3);
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Primary work: " << primaryWork << std::endl;
}

Classic & Classic::operator =(const Classic & cl) {
    if (this != &cl) {
        Cd::operator =(cl);
        delete [] primaryWork;
        primaryWork = new char[40];
        std::strcpy(primaryWork, cl.primaryWork);
    }
    return *this;
}

Classic::~Classic() {
    delete [] primaryWork;
}
