#include <iostream>
using namespace std;

class Student
{
public:
     int id;
     string name;
     
     Student(int id,string name)
     {
        cout<<"constructor of the Student class"<<endl;
        this->id=id;
        this->name=name;
     }

     void college()
     {
        cout<<"come in the college"<<endl;
     }


};
class Eng : public Student
{
 public:
  string branch;
  Eng(int id,string name,string branch):Student(id,name)
 { 
     cout<<"constructor of the Eng class"<<endl;
     this->branch=branch;
 }

 void display()
 {
    cout<<" this is Engineearing student"<<" "<<name<<" "<<branch<<endl;
 }

};

int main()
{
    Eng s1(55,"raj","cse");
    s1.display();
    s1.college();
    return 0;
}