#include<bits/stdc++.h>
using namespace std;

class Man{
private:
    int weight;
public:
    Man(int w=0){
        weight = w;
    }
    Man operator + (Man &obj){
        Man temp;
        temp.weight = weight + obj.weight;
        return temp;
    }
    void getData(){
        cout<< "Weight: " << weight << endl;
    }
};

int main()
{
    Man n1(65);
    Man n2(57);
    Man total;
    total = n1+n2;
    total.getData();
    return 0;
}
