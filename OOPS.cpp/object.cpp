#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    string name;

    public:
  Student(string name)
  {
    cout<<"this is simple paramitarize constructor"<<endl;
    this->name=name;
  }
 Student(const Student &srcobj)
  {
    cout<<"this is copy constructor"<<endl;
    this->name=srcobj.name;
    this->id=srcobj.id;
  }
  void display()
  {
     cout<<" "<<name<<endl;
     cout<<" "<<id<<endl;
  }
    ~Student()
  {
    cout<<"destructor"<<endl;
   
  }
};
int main()
{
    Student s1("Raj");
    s1.id=5;
    s1.display();
    // copy constructor
    Student s2(s1);
    s2.display();
    return 0;
}