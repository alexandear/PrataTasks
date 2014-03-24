#include "cd2.h"

Cd::Cd(const char * s1, const char * s2, int n, double x) {
    performers = new char[50];
    std::strcpy(performers, s1);
    label = new char[20];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    performers = new char[50];
    std::strcpy(performers, d.performers);
    label = new char[20];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
    delete [] performers;
    delete [] label;
}

void Cd::Report() const { // reports all CD data
    using std::cout;
    using std::endl;
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    if (this == &d) {
        delete [] performers;
        delete [] label;
        performers = new char[50];
        std::strcpy(performers, d.performers);
        label = new char[20];
        std::strcpy(label, d.label);
        selections = d.selections;
        playtime = d.playtime;
    }
    return *this;
}
