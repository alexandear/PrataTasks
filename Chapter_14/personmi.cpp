#include <ctime>
#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "personmi.h"

// Person methods
Person::~Person() { }

void Person::Data() const {
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
}

void Person::Get() {
    getline(cin, firstName);
    getline(cin, lastName);
}


// Gunslinger methods
void Gunslinger::Set() {
    cout << "Enter gunslinger's first and last names: ";
    Person::Get();
    Get();
}

void Gunslinger::Show() const {
    cout << "Category: gunslinger\n";
    Person::Data();
    Data();
}

void Gunslinger::Data() const {
    cout << "Draw time: " << Draw() << endl;
    cout << "Number of notches on a gun: " << notches << endl;
}

void Gunslinger::Get() {
    cout << "Enter draw time: ";
    cin >> drawTime;
    while (cin.get() != '\n')
        continue;
    cout << "Enter number of notches on a gun: ";
    cin >> notches;
    while (cin.get() != '\n')
        continue;
}


// PokerPlayer methods
PokerPlayer::PokerPlayer() : Person() {
    std::srand(std::time(0));
}

PokerPlayer::PokerPlayer(const string & f, const string & l) : Person(f, l) {
    std::srand(std::time(0));
}

void PokerPlayer::Set() {
    cout << "Enter poker player's first and last names: ";
    Person::Get();
    Get();
}

void PokerPlayer::Show() const {
    cout << "Category: poker player\n";
    Person::Data();
    Data();
}

int PokerPlayer::Draw() const {
    return (std::rand() % 52 + 1);
}

void PokerPlayer::Data() const {
    cout << "Number of card: " << Draw() << endl;
}


//BadDude
void BadDude::Data() const {
    cout << "Bad dude's draw time: " << Gdraw() << endl;
    cout << "Number of bad dude's card: " << Cdraw() << endl;
}

void BadDude::Get() {
    Gunslinger::Get();
    PokerPlayer::Get();
}

void BadDude::Set() {
    cout << "Enter bad dude's first and last names: ";
    Person::Get();
    Get();
}

void BadDude::Show() const {
    cout << "Category: bad dude\n";
    Person::Data();
    Data();
}
