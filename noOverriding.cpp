#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "hello saya fungction dari base Class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan1(){
        cout << "hello saya fungction derived Class";
    }
};