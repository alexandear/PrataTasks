/*  Answers for questions:

    1. Assignment operator is unnecessary since the default will do the job of assigning static
       class data members to each other. Explicit assignment and copy constructors are needed
       when there are dynamically allocated data members in the class. In case of exercise 5, there
       are only static data members of the class - strings and int.

    2. ShowAll() and SetAll() are virtual because for almost every derived class they display or
       ask for different information. Thus, if we use base class pointer to reference a derived
       class, we can use polymorphic features, such as displaying derived classes' own ShowAll()
       and SetAll() methods while using a collection of base class pointers.

    3. virtual ~abstr_emp() = 0; it provides the basic common data members and methods, and has
       IS-A convenient relationship with its derived classes.

    4. highfink inherited all data members from previous derived classes such as manager and fink

    5. Since only the information from base class needs to be displayed by using operator <<()
       and friend function, any derived class is automatically downcasted to base class to be used
       as parameter for << friend function to display base class information, such as first & last
       names.

    6. Since abstr_emp is not a pointer, it is no longer can find customized version of ShowAll()
       based on pointed-to type, therefore, it will only use ShowAll() based on variable type, such
       as abstr_emp, thus it will only display First & Last & Job (base class) information for all
       derived class pointers and variables.
*/

#include <iostream>
#include "emp.h"

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew"); // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:\n";
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();

    return 0;
}
