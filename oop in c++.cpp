#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee: AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
    void introdue(){
        cout<< "Name - " << Name << endl;
        cout<< "Company - " << Company << endl;
        cout<< "Age - " << Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if(Age>30)
            cout<< Name << " got promotion" << endl;
        else
            cout<< Name << " Sorry, No Promotion for you" << endl;
    }
    virtual void Work()
    {
        cout<< Name << " is checking mails, backlogs etc." << endl;
    }
};

class Developer: public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void Fixbug()
    {
        cout<< getName() << " fixed bug using " <<  FavProgrammingLanguage << endl;
    }
    void Work()
    {
        cout<< Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};

class Teacher: public Employee{
public:
    string Subject;
    void PrepareLesson()
    {
        cout<< Name << " is preparing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        cout<< Name << " is teaching " << Subject << endl;
    }
};

int main()
{
 //   Employee em1 = Employee("Pritam", "Bekar", 24);
 //   Employee em2 = Employee("Amirul", "Editor", 32);

    Developer d = Developer("Pritam", "Fresher", 24, "C++");
    Teacher t = Teacher("Khairul", "old school", 32, "Hisory");

    Employee* e1 =&d;
    Employee* e2 =&t;
    e1->Work();
    e2->Work();
    return 0;
}
