#include "cd.h"

class Classic : public Cd {
    char primaryWork[40];
public:
    Classic();
    Classic(const char * s1, const char * s2, const char * s3, int n, double x);
    void Report() const;
    Classic & operator =(const Classic & cl);
};
