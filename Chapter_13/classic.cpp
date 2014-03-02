#include "classic.h"

Classic::Classic() : Cd() {
    primaryWork[0] = '\0';
}

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s1, s2, n, x) {
    std::strcpy(primaryWork, s3);
}

void Classic::Report() const {
    Cd::Report();
    std::cout << "Primary work: " << primaryWork << std::endl;
}

Classic & Classic::operator =(const Classic & cl) {
    if (this == &cl) {
        return *this;
    }
    Cd::operator =(cl);
    std::strcpy(primaryWork, cl.primaryWork);
}
