#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    int x;
public:
    Person(int arg=0){
        x=arg;
        Count++;
    }
    static int Count;
};
int Person::Count = 0;

int main()
{
    Person pritam(3);
    Person Atik(4);
    Person Li(6);

    cout<< Person::Count << endl;

    return 0;
}
