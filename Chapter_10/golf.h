#ifndef GOLF_H_
#define GOLF_H_

class golf {
    const static int StrSize {40};
    char fullname_[StrSize];
    int handicap_;
public:
    golf(const char * name, int hc);

    int setgolf();
    void handicap(int hc);
    void showgolf();

};

#endif // GOLF_H_
