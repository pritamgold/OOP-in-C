#include<bits/stdc++.h>
using namespace std;

class base{
public:
    base(){
        cout<< "base class default constructor" << endl;
    }
    void msg(){
        cout<< "base class messege" << endl;
    }
};

class derived: public base{
public:
    void msg(){
        cout<< "derived class messege" << endl;
        base::msg();
    }
};
int main()
{
    derived c;
    c.msg();

    return 0;
}
