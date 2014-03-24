#include <iostream>

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(Box box);
void setVolume(Box * box);

int main() {

    Box b1 = {"Box1", 5.5, 1.2, 6.7, 2.5};
    display(b1);
    setVolume(&b1);
    display(b1);

    return 0;
}

void display(Box box) {
    using std::cout;
    using std::endl;
    cout << box.maker << endl;
    cout << box.height << endl;
    cout << box.width << endl;
    cout << box.length << endl;
    cout << box.volume << endl;
}

void setVolume(Box * box) {
    box->volume = box->height * box->width * box->length;
}
