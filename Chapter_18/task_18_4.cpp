#include <algorithm>
#include <iostream>
#include <list>

int main() {

    using std::list;
    using std::cout;
    using std::endl;

    list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    cout << "Original lists:\n";
    auto out = [](int n) {std::cout << n << " ";};
    for_each(yadayada.begin(), yadayada.end(), out);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), out);
    cout << endl;
    yadayada.remove_if([](const int & v) { return v > 100;});
    etcetera.remove_if([](const int & v) { return v > 200;});
    cout <<"Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), out);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), out);
    cout << endl;

    return 0;
}
