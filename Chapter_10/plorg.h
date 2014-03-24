#ifndef PLORG_H_
#define PLORG_H_

#include <cstring>

class Plorg {
    const static int StrSize = 19;
    char name_[StrSize];
    int ci_;
public:
    Plorg(const char * name = "Plorga", int ci = 50);
    void show() const;
    void setCi(int ci);
};

#endif // PLORG_H_
