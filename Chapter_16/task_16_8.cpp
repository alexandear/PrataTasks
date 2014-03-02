#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <vector>

int getFriends(std::vector<std::string> & friends);
template <class InputIterator>
void displayFriends(InputIterator first, InputIterator last);

int main() {

    using namespace std;

    vector<string> friendsMat;

    if(getFriends(friendsMat)) {
        cout << "\nMat's friends:\n";
        sort(friendsMat.begin(), friendsMat.end());
        displayFriends(friendsMat.begin(), friendsMat.end());
    }

    cout << endl;
    vector<string> friendsPat;
    if(getFriends(friendsPat)) {
        cout << "\nPat's friends:\n";
        sort(friendsPat.begin(), friendsPat.end());
        displayFriends(friendsPat.begin(), friendsPat.end());
    }

    if (friendsMat.size() > 0 || friendsPat.size() > 0) {
        set<string> friends(friendsMat.begin(), friendsMat.end());
        copy(friendsPat.begin(), friendsPat.end(), inserter(friends, friends.begin()));

        cout << "\nAll friends:\n";
        displayFriends(friends.begin(), friends.end());
    }

    return 0;
}

int getFriends(std::vector<std::string> & friends) {

    std::cout << "Enter friends (empty string to break input):\n";
    std::string name;
    std::getline(std::cin, name);
    while(!name.empty()) {
        friends.push_back(name);
        std::getline(std::cin, name);
    }
    return friends.size();
}

template<class InputIterator>
void displayFriends(InputIterator first, InputIterator last) {
    std::for_each(first, last, [](std::string name){
        std::cout << name << std::endl;
    });
}
