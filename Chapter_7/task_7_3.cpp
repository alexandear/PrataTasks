#include <iostream>

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(Box box);
void setVolume(Box *box);

int main() {

    using namespace std;

    Box b1 = {"Box1", 5.5, 1.2, 6.7, 2.5};
    display(b1);
    setVolume(&b1);
    display(b1);

    return 0;
}

void display(Box box) {
    std::cout << box.maker << std::endl;
    std::cout << box.height << std::endl;
    std::cout << box.width << std::endl;
    std::cout << box.length << std::endl;
    std::cout << box.volume << std::endl;
}

void setVolume(Box *box) {
    box->volume = box->height * box->width * box->length;
}
