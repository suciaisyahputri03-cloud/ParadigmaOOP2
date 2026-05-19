#include <iostream>
using namespace std;

class baseClass final {
public:
    virtual void perkenalan(){
        cout << "hello saya fungction dari base calss";
    }
};

class baseClass1 {
public:
    virtual void perkenalan(){
        cout << "Hello saya fungction dari base Class";
    }
};

class derivedClass : public baseClass1{
public:
    void perkenalan(){
        cout << "Hello saya fungction dari derived Class";
    }
};
int main(){
    derivedClass a;
    a.perkenalan();

    return 0;
}