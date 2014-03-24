#include "classic.h"

Classic::Classic() : Cd() {
    primaryWork[0] = '\0';
}

Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x)
    : Cd(s1, s2, n, x) {
    std::strcpy(primaryWork, s3);
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Primary work: " << primaryWork << std::endl;
}

Classic & Classic::operator =(const Classic & cl) {
    if (this != &cl) {
        Cd::operator =(cl);
        std::strcpy(primaryWork, cl.primaryWork);
    }
    return *this;
}
