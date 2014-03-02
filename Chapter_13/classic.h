#include "cd.h"

class Classic : public Cd {
    char primaryWork[40];
public:
    Classic();
    Classic(char * s1, char * s2, char * s3, int n, double x);
    void Report() const;
    Classic & operator =(const Classic & cl);
};
