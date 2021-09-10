#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    string name;
    int age;
    float height;
public:
    Person(string name="Null", int age=0, float height=0.0f){
        this->name = name;
        this->age = age;
        this->height = height;
    }
    Person(Person &obj){
        name = obj.name;
        age = obj.age;
        height = obj.height;
    }
    void getData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "height: " << height << endl;
    }
};

int main()
{
    Person man1, man2("Pritam", 24, 5.6), man3(man2);

    man1.getData();
    man2.getData();
    man3.getData();

    return 0;
}
