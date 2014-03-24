#include <cstring>
#include <iostream>
using namespace std;

const size_t StrSize {30};
struct student {
    char fullname[StrSize];
    char hobby[StrSize];
    int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
size_t getinfo(student pa[], size_t n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student * ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], size_t n);

int main() {

    cout << "Enter class size: ";
    int class_size {};
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    size_t entered = getinfo(ptr_stu, class_size);

    for (size_t i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";

    return 0;
}

size_t getinfo(student pa[], size_t n) {
    size_t i {};
    for (; i < n; i++) {
        cout << "Enter info about " << (i + 1) << " student:\n";
        cout << "Full name: ";
        cin.getline(pa[i].fullname, StrSize);
        if (!strcmp(pa[i].fullname, "")) {
            break;
        }
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, StrSize);
        cout << "OOP level: ";
        while (!(cin >> pa[i].ooplevel)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input. Retry input of OOP level: ";
        }
        cin.get();
    }
    return i;
}


void display1(student st) {
    cout << "\nFull name: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "OOP level: " << st.ooplevel << endl;
}


void display2(const student * ps) {
    display1(*ps);
}


void display3(const student pa[], size_t n) {
    for (size_t i = 0; i < n; ++i) {
        display1(pa[i]);
    }
}
