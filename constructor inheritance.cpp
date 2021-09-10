#include<bits/stdc++.h>
using namespace std;

class base{
public:
    int b;
    base(){
        cout<< "Default constructor of base class" << endl;
    }
    base(int x){
        cout<< "Parameterized constructor of base class" << x << endl;
    }
};

class derived: public base{
public:
    derived():base(){
        cout<< "Default construcctor of derived class" << endl;
    }
    derived(int x):base(x){
        cout<< "Parameterized class of derived class: " << x << endl;
    }
};

int main()
{
    derived d1(5);
    return 0;
}
