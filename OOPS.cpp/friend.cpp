#include <iostream>
using namespace std;
class A
{
  public:string mobile="Raj iphone";
  private:string phone="Shreyas nokia";
  friend class B;
  friend void print(A &a);

};
//friend class
class B
{
  public:
  void print(A &a)
  {
 cout<<"I Can Acess "<<a.phone<<endl;
  }
};
//friend function
 void print(A &a)
  {
 cout<<"I Can Acess "<<a.phone<<endl;
  }
int main() {
  cout << "we  can call the print by passing the object pof class a" << endl;
  A a;
  B b;
  b.print(a);
  print(a);
  return 0;
}