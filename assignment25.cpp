/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
/*#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
        void setvalue(int r,int i)
        {
            real=r;
            img=i;
        }
        void printval()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        complex  add(complex c)
        {
            complex temp;
            temp.real= real+c.real;
            temp.img=img+c.img;
            return temp;
        }
};
int main()
{
    complex c1,c2,c3;
    c1.setvalue(5,2);
    c2.setvalue(7,5);
    c1.printval();
    c2.printval();
    c3=c1.add(c2);
    c3.printval();
}*/


/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
/*#include<iostream>
using namespace std;
class time
{
    private:
        int hour;
        int min;
        int sec;
    public:
        void setdata(int a,int b,int c)
        {
            hour=a;
            min=b;
            sec=c;
        }
        void showdata()
        {
            cout<<hour<<":hr"<<min<<":min"<<sec<<":sec";
        }
};
int main()
{
    time t;
    t.setdata(5,60,50);
    t.showdata();

}*/

/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
/*#include<iostream>
using namespace std;
class fact
{
    private:
        int fact=1;
    public:
        void factorial(int);
        void showdata()
        {
            cout<<"factorial of number"<<fact;
        }
};
void fact::factorial(int num)
{
    for(num;num>1;num--)
    {
        fact=fact*num;
    }
}
int main()
{
    fact f;
    f.factorial(5);
    f.showdata();
}*/

/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
/*#include<iostream>
using namespace std;
class large
{
    private:
        int large;
    public:
        void showdata(int a,int b,int c)
        {
            if(a>b)
            {
                if(a>c)
                    large=a;
                else
                    large=c;
            }
            else
            {
                if(b>c)
                    large=b;
                else
                    large=c;
            }
            cout<<"large is a "<<large;
        }

};
int main()
{
    large l1;
    l1.showdata(23,566,78);
}*/

/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/

/*#include<iostream>
using namespace std;
class rev
{
    private:
        int reverece=0;
    public:
        void reverce(int num)
        {
            while(num)
            {       
                reverece=num%10+reverece*10;
                num=num/10;
            }
        }
        void show()
        {
            cout<<"reverce is a==>"<<reverece;
        }
};
int main()
{
    rev r1;
    int r;
    cout<<"enter number";
    cin>>r;
    r1.reverce(r);
    r1.show();
}*/


/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
/*#include<iostream>
using namespace std;
class square
{
    public:
        int squr;
        static int call;
    public:
        void processdata(int num)
        {
            squr=num*num;
            cout<<squr;
            call++;
        }
      static  void showdata()
        {
                cout<<"function call"<<call;
        }
};
int square::call;
int main()
{
    square s,s2;
    int data;
    cout<<"Enter number";
    cin>>data;
    s.processdata(data);
    cout<<"Enter number";
    cin>>data;
     s2.processdata(data);
     square::showdata();
}*/

/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
/*#include<iostream>
using namespace std;
class gretest
{
    private:
    int large;
    public:

     void largenumber(int a,int b,int c)
     {
        if(a>b)
        {
            if(a>c)
                large=a;
            else    
                large=c;
        }
        else
        {
            if(b>c)
                large=b;
            else    
                large=c;
        }
        cout<<"largenumber==>"<<large;
     }
};
int main()
{
    gretest g;
    int num1,num2,num3;
    cout<<"enter three number";
    cin>>num1>>num2>>num3;
    g.largenumber(num1,num2,num3);
    return 0;
}*/

/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
/*#include<iostream>
using namespace std;
class ract
{
    private:
        float area;
    public:
        void area_ract(float l,float w)
        {
            area=l*w;
            cout<<"area of "<<area;
        }
};
int main()
{
    ract r;
   float height,wigth;
    cout<<"enter redious:";
    cin>>height>>wigth;
    r.area_ract(height,wigth);
}*/






/*9. Define a class Circle and define an instance member function to find the area of the
circle.*/
/*#include<iostream>
using namespace std;
class circle
{
    private:
      float area;
    public:
        void area_c(float r)
        {
            area=3.14*r*r;
            cout<<"area of circle==>"<<area;
        }
};
int main()
{
    circle c;
    float redious;
    cout<<"enter redious";
    cin>>redious;
    c.area_c(redious);
    return 0;
}*/




/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/

/*#include<iostream>
using namespace std;
class Area
{
    private: 
        float areas;

    public:
        void area(int r)
        {
            areas=r*r;
            cout<<"area of squre==>"<<areas;
        }
        void area(float l,float w)
        {
            areas=l*w;
            cout<<"area of rectangle==>"<<areas;
        }
        void area(float r)
        {
            areas=3.14*r*r;
            cout<<"area of circle==>"<<areas;
        }
};
int main()
{
    Area squre,ract,cir;
    squre.area(4);
    ract.area(3,5);
    cir.area(3.4f);
}*/