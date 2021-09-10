#include<bits/stdc++.h>
using namespace std;

class Mobile{
private:
    string name;
    int RAM;
    string processor;
    int battery;
public:
    Mobile(string name = "Null", int RAM = 0, string processor = "Null", int battery = 0){
        this->name = name;
        this->RAM = RAM;
        this->processor = processor;
        this->battery = battery;
    }
    Mobile(Mobile &obj){
        name = obj.name;
        RAM = obj.RAM;
        processor = obj.processor;
        battery = obj.battery;
    }
    void getData(){
        cout<< "Name: " << name << endl;
        cout<< "RAM: " << RAM << endl;
        cout<< "Processor: " << processor << endl;
        cout<< "Battery: " << battery << endl;
    }
};

int main()
{
    Mobile pritam("Mi", 4, "snapdragon", 5000);
    pritam.getData();

    return 0;
}
