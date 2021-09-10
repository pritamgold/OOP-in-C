#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    int weight;
public:
    Person(int weight=0){
        this->weight = weight;
    }
    void operator++(){
        weight++;
    }
    void getData(){
        cout<< "Weight: " << weight << endl;
    }
};

int main()
{
    Person pritam(57);
    ++pritam;
    pritam.getData();

    return 0;
}
