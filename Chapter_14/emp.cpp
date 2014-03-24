#include "emp.h"
using std::cout;
using std::cin;
using std::endl;

// abstr_emp methods
abstr_emp::abstr_emp() : fname("no first name"), lname("no last name"), job("no job") { }

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j)
    : fname(fn), lname(ln), job(j) { }

abstr_emp::~abstr_emp() { }

void abstr_emp::ShowAll() const {
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll() {
    cout << "Enter first name: ";
    std::getline(cin, fname);
    cout << "Enter last name: ";
    std::getline(cin, lname);
    cout << "Enter job: ";
    std::getline(cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e) {
    os << e.fname << " " << e.lname;
    return os;
}

// employee methods
employee::employee() : abstr_emp() { }

employee::employee(const string &fn, const string &ln, const string &j)
    : abstr_emp(fn, ln, j) { }

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {
    abstr_emp::SetAll();
}


// manager methods
manager::manager() : abstr_emp() { }

manager::manager(const string & fn, const string & ln, const string & j, int ico)
    : abstr_emp(fn, ln, j), inchargeof(ico) { }

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico) { }

manager::manager(const manager & m)
    : abstr_emp(m), inchargeof(m.inchargeof) { }

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "Number of abstr_emps managed: " << inchargeof << endl;
}

void manager::SetAll() {
    abstr_emp::SetAll();
    cout << "Enter number of abstr_emps managed: ";
    cin >> inchargeof;
    while (cin.get() != '\n')
        continue;
}


// fink methods
fink::fink() : abstr_emp() { }

fink::fink(const string & fn, const string & ln, const string & j, const string & rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo) { }

fink::fink(const abstr_emp & e, const string & rpo) : abstr_emp(e), reportsto(rpo) { }

fink::fink(const fink & e) : abstr_emp(e), reportsto(e.ReportsTo()) { }

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "Fink reports to: " << reportsto << endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    cout << "Enter to whom fink reports: ";
    std::getline(cin, reportsto);
}


// highfink methods
highfink::highfink() : abstr_emp(), manager(), fink() { }

highfink::highfink(const string & fn, const string & ln, const string & j,
                   const string & rpo, int ico)
    : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) { }

highfink::highfink(const abstr_emp & e, const string & rpo, int ico)
    : abstr_emp(e), manager(e, ico), fink(e, rpo) { }

highfink::highfink(const manager & m, const string & rpo)
    : abstr_emp(m), manager(m), fink(m, rpo) { }

highfink::highfink(const fink & f, int ico)
    : abstr_emp(f), manager(f, ico), fink(f) { }

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h, h.InChargeOf()),
    fink(h, ReportsTo()) { }

void highfink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "Number of abstr_emps managed: " << InChargeOf() << endl;
    cout << "Reports to: " << ReportsTo() << endl;
}

void highfink::SetAll() {
    abstr_emp::SetAll();
    cout << "Enter number of abstr_emps managed: ";
    cin >> InChargeOf();
    while (cin.get() != '\n')
        continue;
    cout << "Enter to whom report: ";
    std::getline(cin, ReportsTo());
}
