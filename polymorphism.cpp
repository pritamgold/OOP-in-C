#include<bits/stdc++.h>
using namespace std;

class base{
public:
    virtual void show(){
        cout<< "Base class show" << endl;
    }
};

class derived1: public base{
public:
    virtual void show(){
        cout<< "derived1 class show" << endl;
    }
};

class derived2: public base{
public:
    void show(){
        cout<< "derived2 class show" << endl;
    }
};

int main()
{
    base *ptr;
    ptr = new derived1();
    ptr->show();
    ptr = new derived2();
    ptr->show();

    return 0;
}
