
/*Assignment - 27 A Job Ready Bootcamp in C++, DSA and IOT MySirG
Operator overloading and friend function
1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/

/*#include<iostream>
using namespace std;
class complex
{
    private:
        int num1,num2;
    public:
    complex(int a,int b)
    {
        num1=a;
        num2=b;
    }
    complex(){}
    complex operator+(complex c)
    {
        complex temp;
        temp.num1=num1+c.num1;
        temp.num2=num2+c.num2;
        return temp;
    }
    void showdata()
    {
        cout<<"num1==>"<<num1<<"num2==>"<<num2<<endl;
    }
    complex operator-(complex a)
    {
        complex temp;
        temp.num1=num1-a.num1;
        temp.num2=num2-a.num2;
        return temp;
    }
    complex operator*(complex b)
    {
        complex temp;
        temp.num1=num1*b.num1;
        temp.num2=num2*b.num2;
        return temp;
    }
   bool operator==(complex c)
   {      
        return  num1==c.num1 && num2==c.num2;   
   }
};
int main()
{
    complex c1(4,6),c2(5,6),c3,c4,c5;
    c1.showdata();
    c2.showdata();
    c3=c1+c2;
    c3.showdata();
    c4=c1-c2;
    c4.showdata();
    c5=c1*c2;
    c5.showdata();
    cout<<"comparison is a:"<<(c1==c2);
}*/

//2. Write a C++ program to overload unary operators that is increment and decrement
/*#include<iostream>
using namespace std;
class unary
{
    private:
        int n1,n2;
    public:
        unary(){}
        unary(int x,int y)
        {
            n1=x;
            n2=y;
        }
      unary operator++()
        {
            unary temp;
            temp.n1=++n1;
            temp.n2=++n2;
            return temp;
        }
        void showdata()
        {
            cout<<"n1==>"<<n1<<"==>"<<n2<<endl;
        }
        unary operator--()
        {
            unary temp;
            temp.n1=--n1;
            temp.n2=--n2;
            return temp;
        }
        friend unary operator++(unary,int);
      friend  unary operator--(unary ,int);
     
        
};
unary operator--(unary y,int  p)
{
    unary temp;
    temp.n1=y.n1--;
    temp.n2=y.n2--;
    return temp;
}
unary operator++(unary c,int p)
{
    cout<<"i am frienf function";
    unary temp;
    temp.n1=c.n1++;
    temp.n2=c.n2++;
    return temp;
}
int main()
{
    unary u1(4,7),u2,u3,u4,u5;
    u1.showdata();
    u2=++u1;
    u1.showdata();
    u2.showdata();
    u3=u1++;
    u3.showdata();
    u4=--u1;
    u4.showdata();
    u5=u1--;
    u1.showdata();
    u5.showdata();
    return 0;
}*/

//3. Write a C++ program to add two complex numbers using operator overloaded by a
//friend function.
/*#include<iostream>
using namespace std;
class complex
{
    private:
        int real,img;
        friend  complex operator+(complex a,complex b);
    public:
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    complex(){}
    void showdata()
    {
        cout<<img<<"+"<<real<<endl;
    }
};
complex operator+(complex a,complex b)
{
    complex temp;
    temp.img=a.img+b.img;
    temp.real=a.real+b.real;
    return temp;
}
int main()
{
    complex c(3,5),c2(5,9),c3;
    c.showdata();
    c2.showdata();
    c3=c+c2;
    c3.showdata();
    return 0;
}*/


