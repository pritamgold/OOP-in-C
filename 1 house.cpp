#include<bits/stdc++.h>
using namespace std;

class house {

    int length=0, bredth=0;

public:
    void setData(int x, int y){
        length = x;
        bredth = y;
    }

    int area(){
        return length * bredth;
    }

};

int main()
{
    house gini;
    gini.setData(20, 30);
    cout<< gini.area() << endl;
    return 0;
}
