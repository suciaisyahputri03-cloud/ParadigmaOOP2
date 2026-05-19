#include <iostream>
using namespace std;

class seseorang {
public:
    //bvirtual void pesan() = 0;
    virtual void pesan(){
        cout <<"pesan dai seseorang"<<endl;
    }
};

class jiko : public seseorang {
public:
    void pesan(){
        cout << "pesan dari joko" << endl;
    }
};

class lia :public seseorang {
public:
    void pesan(){
        cout << "pesan dari lia" << endl;
    }
};