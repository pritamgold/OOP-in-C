#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    int weight;
public:
    Person(int arg=0){
        weight=arg;
    }
    friend bool operator>(Person p1, Person p2);
    friend bool operator<(Person p1, Person p2);
};

    bool operator>(Person p1, Person p2){
        return p1.weight>p2.weight;
    }
    bool operator<(Person p1, Person p2){
        return p1.weight<p2.weight;
    }
int main()
{
    cout<< "Enter the weight of Jon: ";
    int w1; cin>> w1;

    cout<< "Enter the weight of Rick: ";
    int w2; cin>> w2;

    Person Jon(w1);
    Person Rick(w2);

    if(Jon>Rick)
        cout<< "Jon is heavier than Rick" << endl;
    if(Jon<Rick)
        cout<< "Rick is heavier than Jon" << endl;

    return 0;
}
