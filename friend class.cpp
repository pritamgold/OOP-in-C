#include<bits/stdc++.h>
using namespace std;

class Alpha{
private:
    int n;
public:
    Alpha(int x=0){
        n=x;
    }
    friend class Beta;
};

class Beta{
private:
    int n2;
public:
    Beta(int arg=0){
        n2=arg;
    }
    int sum(){
        Alpha a(3);
        int sum = a.n + n2;
        return sum;
    }
};

int main()
{
    Beta b(7);
    cout<< "Sum: " << b.sum() << endl;

    return 0;
}
