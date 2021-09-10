#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int length, bredth;

    void area(){
        cout<< "Area of rectangle is: " << length * bredth << endl;
    }
};

class Cuboid : public Rectangle{
public:
    int height;
    void volume(){
        cout<< "Volume of cuboid is: " << length*bredth*height << endl;
    }
};

int main(){
    Cuboid obj1;
    obj1.length = 5;
    obj1.bredth = 7;
    obj1.height = 3;

    obj1.area();
    obj1.volume();
    return 0;
}
