#include <iostream>
#include "emp.h"

const string file = "../Chapter_17/employees.txt";

int main() {

    using namespace std;

    const int Max = 10;
    abstr_emp *pc[Max];

    int classType {};
    int i {};

    ifstream fin;
    fin.open(file.c_str());
    if (fin.is_open()) {

        cout << "Here are the current contents of the " << file << " file:\n";
        char ch {};
        while((fin >> classType).get(ch)) {
            switch(classType) {
            case Employee:
                pc[i] = new employee;
                break;
            case Manager:
                pc[i] = new manager;
                break;
            case Fink:
                pc[i] = new fink;
                break;
            case Highfink:
                pc[i] = new highfink;
                break;
            }
            pc[i++]->GetAll(fin);
        }

        for (int j = 0; j < i; ++j) {
            pc[j]->ShowAll();
        }

    }
    fin.close();


    if (i < Max) {

        ofstream fout(file, ios_base::out | ios_base::app);
        if (!fout.is_open()) {
            cerr << "Can't open " << file << " file for output:\n";
            exit(EXIT_FAILURE);
        }

        cout << "Enter type of employee to add: ";
        cin >> classType;
        if (!cin) {
            exit(EXIT_FAILURE);
        }
        while(cin.get() != '\n')
            continue;

        switch(classType) {
        case Employee:
            pc[i] = new employee;
            break;
        case Manager:
            pc[i] = new manager;
            break;
        case Fink:
            pc[i] = new fink;
            break;
        case Highfink:
            pc[i] = new highfink;
            break;
        default:
            exit(EXIT_FAILURE);
        }

        pc[i]->SetAll();
        pc[i++]->WriteAll(fout);
        fout.close();

        cout << "\nHere are the current contents of the " << file << " file:\n";
        for (int j = 0; j < i; ++j) {
            pc[j]->ShowAll();
        }

    } else {
        cout << "Cant add more employees\n";
    }

    return 0;
}
