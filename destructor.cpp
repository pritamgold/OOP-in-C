#include<bits/stdc++.h>
using namespace std;

class base{
public:
    virtual ~base(){
        cout<< "base destructor" << endl;
    }
    virtual void name(){
        cout<< "Pritam Golder base" << endl;
    }
};

class derived: public base{
public:
    ~derived(){
        cout<< "derived destructor" << endl;
    }
    void name(){
        cout<< "Pritam Golder" << endl;
    }
};

int main()
{
    base *ptr;
    ptr = new derived;
    ptr->~base();
    ptr->name();
    return 0;
}
