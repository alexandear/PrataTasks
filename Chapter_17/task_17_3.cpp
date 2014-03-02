#include <fstream>
#include <iostream>

int main(int argc, char * argv[]) {

    using std::cout;
    using std::endl;
    using std::cin;
    using std::ios_base;

    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " destFileName srcFileName\n";
        exit(EXIT_FAILURE);
    }

    std::ofstream dst;
    dst.open(argv[1], ios_base::out | ios_base::binary);
    if (!dst.is_open()) {
        std::cerr << "Can't open file" << argv[1] << endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream src;
    src.open(argv[2], ios_base::in | ios_base::binary);
    if (!src.is_open()) {
        std::cerr << "Can't open file" << argv[2] << endl;
        exit(EXIT_FAILURE);
    }

    dst << src.rdbuf();

    src.close();
    dst.close();

    return 0;
}
