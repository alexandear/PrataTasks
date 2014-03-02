#ifndef DMA_H_
#define DMA_H_

#include <iostream>

class abstractDMA {
    char * label;
    int rating;
public:
    abstractDMA(const char * l = "null", int r = 0);
    abstractDMA(const abstractDMA & rs);
    virtual ~abstractDMA();
    abstractDMA & operator=(const abstractDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const abstractDMA & rs);
    virtual void View(std::ostream & os) const = 0;
};


//  Base Class Using DMA
class baseDMA : public abstractDMA {
public:
    baseDMA(const char * l = "null", int r = 0);
    void View(std::ostream & os) const;
};


// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public abstractDMA {
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const abstractDMA & rs);
    void View(std::ostream & os) const;
};


// derived class with DMA
class hasDMA : public abstractDMA {
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const abstractDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    void View(std::ostream & os) const;
};

#endif // DMA_H_
