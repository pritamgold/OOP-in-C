#include<bits/stdc++.h>
using namespace std;

class person{
public:
    virtual void give() = 0;
};

class boy: public person{
public:
    void give(){
        cout<< "give boy" << endl;
    }
};

class girl: public person{
public:
    void give(){
        cout<< "give girl" << endl;
    }
};

int main()
{
    person *per1;

    per1= new() boy;
    per1->give();
    per1=new() girl;
    per1->give();

    return 0;
}
