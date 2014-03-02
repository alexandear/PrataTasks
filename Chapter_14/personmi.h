#ifndef PERSONMI_H_
#define PERSONMI_H_

#include <string>
using std::string;

class Person {
    string firstName;
    string lastName;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Person() : firstName("no first name"), lastName("no last name") {
    }
    Person(const string & f, const string & l)
        : firstName(f), lastName(l) { }
    virtual ~Person() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};


class Gunslinger : virtual public Person {
    double drawTime;
    int notches;
protected:
    void Data() const;
    void Get();
public:
    Gunslinger() : Person(), drawTime(0.0), notches(0) { }
    Gunslinger(const string & f, const string & l, double d = 0.0, int n = 0)
        : Person(f, l), drawTime(d), notches(n) { }
    Gunslinger(const Person & p, double d, int n = 0)
        : Person(p), drawTime(d), notches(n) { }
    double Draw() const { return drawTime; }
    void Set();
    void Show() const;
};


class PokerPlayer : virtual public Person {
protected:
    void Data() const;
    void Get() { }
public:
    PokerPlayer();
    PokerPlayer(const string & f, const string & l);
    PokerPlayer(const Person & p) : Person(p) { }
    int Draw() const;
    void Set();
    void Show() const;
};


class BadDude : virtual public PokerPlayer, virtual public Gunslinger {
protected:
    void Data() const;
    void Get();
public:
    BadDude() { }
    BadDude(const string & f, const string & l, double d, int n)
        : Person(f, l), Gunslinger(f, l, d, n), PokerPlayer(f, l) { }
    BadDude(const Person & p, double d = 0.0, int n = 0)
        : Person(p), Gunslinger(p, d), PokerPlayer(p) { }
    double Gdraw() const { return Gunslinger::Draw(); }
    int Cdraw() const { return PokerPlayer::Draw(); }
    void Set();
    void Show() const;
};


#endif // PERSONMI_H_
