#include <fstream>
#include <iostream>

int main(int argc, char * argv[]) {

    using std::cout;
    using std::endl;
    using std::cin;

    if (argc == 1) {
        std::cerr << "Usage: " << argv[0] << " filename\n";
        exit(EXIT_FAILURE);
    }

    std::ofstream fout;
    fout.open(argv[1]);
    if (!fout.is_open()) {
        std::cerr << "Can't open file" << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter characters (end - simulated EOF):\n";
    char ch {};
    while (cin.get(ch))
        fout << ch;

    fout.close();

    return 0;
}
