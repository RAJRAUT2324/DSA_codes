#include <iostream>
using namespace std;
class Complex
{
public:
int real;
int img;
Complex()
{
    cout<<"This is default constructor"<<endl;
}
Complex(int r,int i)
{
    cout<<"This is condtructor of complex class"<<endl;
    real=r;
    img=i;
}
void display()
{
    printf("[%d+i%d]\n",real,img);
}
//syntax of the operator overloading
//Return_type operator + (Complex b)
//return_type= it is return of complex number
//this is use for the A because the A+ its function and the B is pass as the argument
//complex temp is use for the A and temp is temporary  variable for class
Complex operator + (Complex b)
{
Complex temp;
temp.real=this->real+b.real;
temp.img=this->img+b.img;
return temp;

}
};

int main()
{
    Complex A(3,2);
    Complex B(1,1);
    Complex C=A+B;
    A.display();
    B.display();
    C.display();
    return 0;

}