#include <cstring>
#include "dma.h"

// abstractDMA methods
abstractDMA::abstractDMA(const char * l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

abstractDMA::abstractDMA(const abstractDMA &rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

abstractDMA::~abstractDMA() {
    delete [] label;
}

abstractDMA & abstractDMA::operator=(const abstractDMA & rs) {
    if (this != &rs) {
        delete [] label;
        label = new char[std::strlen(rs.label) + 1];
        std::strcpy(label, rs.label);
        rating = rs.rating;
    }
    return *this;
}

void abstractDMA::View(std::ostream & os) const {
    os << "Label: " << label << std::endl;
    os << "Rating: " << rating << std::endl;
}

std::ostream & operator<<(std::ostream & os, const abstractDMA & rs) {
     rs.View(os);
     return os;
}


// baseDMA methods
baseDMA::baseDMA(const char * l, int r) : abstractDMA(l, r){ }

void baseDMA::View(std::ostream & os) const {
    abstractDMA::View(os);
}


// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : abstractDMA(l, r) {
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const abstractDMA & rs) : abstractDMA(rs) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}


void lacksDMA::View(std::ostream & os) const {
    abstractDMA::View(os);
    os << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : abstractDMA(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const abstractDMA & rs) : abstractDMA(rs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : abstractDMA(hs) {
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs) {
    if (this != &hs) {
        abstractDMA::operator=(hs);  // copy base portion
        delete [] style;         // prepare for new style
        style = new char[std::strlen(hs.style) + 1];
        std::strcpy(style, hs.style);

    }
    return *this;
}
    

void hasDMA::View(std::ostream & os) const {
    abstractDMA::View(os);
    os << "Style: " << style << std::endl;
}
