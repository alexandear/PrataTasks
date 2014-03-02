#include "move.h"

int main() {

    Move move1(5, 6);
    Move move2(10, 11);
    Move move3 = move1.add(move2);
    move3.showmove();
    move3.reset();
    move3.showmove();

    return 0;
}
