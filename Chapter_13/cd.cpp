#include "cd.h"

Cd::Cd(const char * s1, const char * s2, int n, double x) {
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() { }

void Cd::Report() const { // reports all CD data
    using std::cout;
    using std::endl;
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    if (this != &d) {
        std::strcpy(performers, d.performers);
        std::strcpy(label, d.label);
        selections = d.selections;
        playtime = d.playtime;
    }
    return *this;
}
