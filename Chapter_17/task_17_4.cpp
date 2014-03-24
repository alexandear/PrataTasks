#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * argv[]) {

    using std::cout;
    using std::endl;
    using std::cin;
    using std::ios_base;

    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " inputFileName1 inputFileName2 outputFileName\n";
        exit(EXIT_FAILURE);
    }

    std::ifstream fin1, fin2;
    fin1.open(argv[1]);
    if (!fin1.is_open()) {
        std::cerr << "Can't open file" << argv[1] << endl;
        exit(EXIT_FAILURE);
    }
    fin2.open(argv[2]);
    if (!fin2.is_open()) {
        std::cerr << "Can't open file" << argv[2] << endl;
        exit(EXIT_FAILURE);
    }

    std::ofstream fout;
    fout.open(argv[3]);
    if (!fout.is_open()) {
        std::cerr << "Can't open file" << argv[3] << endl;
        exit(EXIT_FAILURE);
    }

    std::string tmp1 {}, tmp2 {};
    while (fin1 || fin2) {
        std::getline(fin1, tmp1);
        std::getline(fin2, tmp2);
        if (!tmp1.empty()) {
            fout << tmp1;
        }
        if (!tmp2.empty()) {
            if (!tmp1.empty()) {
                fout << " ";
            }
            fout << tmp2 << endl;
        }

        tmp1.clear();
        tmp2.clear();
    }

    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
