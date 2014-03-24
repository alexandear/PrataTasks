#include <fstream>
#include <iostream>

int main() {

    using namespace std;

    ifstream fin;
    const char filename[30] {"../Chapter_6/task_6_8.cpp"};
    fin.open(filename);
    if (!fin.is_open()) {
        cout << "Could not open the file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    char value {};
    size_t count {};
    while (fin >> value) {
        ++count;
    }

    cout << "Symbols in the file " << filename << ": " << count << endl;

    fin.close();

    return 0;
}
