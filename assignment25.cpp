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
        int fact;
        int n;
    public:
        void setdata(int data)
        {
            n=data;
        }
        void factorial();
        int getN()
        {
            return n;
        }
        int getdata()
        {
            return fact;
        }
};
void fact::factorial()
{
    int f=1;
    if(n<=0)
    {
        fact=1;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    fact =f;
}
int main()
{
    fact  fa;
    fa.setdata(5);
    fa.factorial();
    cout<<"factorial of a "<<fa.getN()<<"is a"<<fa.getdata();
}*/

/*4. Define a class maxestNumber and define an instance member function to find the
maxest of three Numbers using the class.*/
/*#include<iostream>
using namespace std;
class maxe
{
    private:
        int a,b,c;
        int max;
    public:
        maxe(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void cal_data()
        {
            if(a>b)
            {
                if(a>c)
                    max=a;
                else
                    max=c;
            }
            else
            {
                if(b>c)
                    max=b;
                else
                    max=c;
            }
        }
        int getval()
        {
            return max;
        }
        int geta()
        {
            return a;
        }
        int getb()
        {
            return b;
        }
        int getc()
        {
            return c;
        }
};
int main()
{
    maxe l1(4,6,7);
    l1.cal_data();
    cout<<"maxest value from "<<l1.geta()<<","<<l1.getb()<<","<<l1.getc()<<"is"<<l1.getval();
}*/

/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/

/*#include<iostream>
using namespace std;
class rev
{
    private:
        int reverece;
        int n;
    public:
        rev(int data)
        {
            n=data;
        }
        void reverce()
        {
            int  val=n;
            int ans=0;
            while(val)
            {       
                ans=val%10+ans*10;
                val=val/10;
            }
            reverece=ans;        
        }
        int getn()
        {
            return n;
        }
        int getreverce()
        {
            return reverece;
        }
};
int main()
{
    rev r1(780);
    r1.reverce();
    cout<<"reverce of "<<r1.getn()<<" is a:"<<r1.getreverce();
}*/


/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
/*#include<iostream>
using namespace std;
class square
{
    public:
        int squr;
        int n;
        static int call;
    public:
        void setN(int data)
        {
            n=data;
        }
        int getn()
        {
            return n;
        }
        void processdata()
        {
            squr=n*n;
            call++;
        }
        static int call_data()
        {
            return call;
        }
       int getval()
        {
            return squr;
        }
};
int square::call;
int main()
{
    square s,s2;
    int data;
    cout<<"Enter number";
    cin>>data;
    s.setN(data);
    s.processdata();
    cout<<"Enter number";
    cin>>data;
    s2.setN(data);
    s2.processdata();
    cout<<"squre of a "<<s.getn()<<" is "<<s.getval()<<endl;
    cout<<"squre of a "<<s2.getn()<<" is "<<s2.getval()<<endl;
    cout<<"call data is a "<<square::call_data();
}*/

/*7. Define a class Greatest and define instance member function to find maxest among
3 numbers using classes.*/
/*#include<iostream>
using namespace std;
class gretest
{
     private:
        int a,b,c,max;
    public:
        gretest(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void cal_data()
        {
            if(a>b)
            {
                if(a>c)
                    max=a;
                else
                    max=c;
            }
            else
            {
                if(b>c)
                    max=b;
                else
                    max=c;
            }
        }
        int getval()
        {
            return max;
        }
        int geta()
        {
            return a;
        }
        int getb()
        {
            return b;
        }
        int getc()
        {
            return c;
        }
};
int main()
{
    gretest l1(4,6,7),l2(4,7,8);
    l1.cal_data();
    cout<<"maxest value from "<<l1.geta()<<","<<l1.getb()<<","<<l1.getc()<<"is"<<l1.getval();
    l2.cal_data();
    cout<<"maxest value from "<<l2.geta()<<","<<l2.getb()<<","<<l2.getc()<<"is"<<l2.getval();
}*/
/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
/*#include<iostream>
using namespace std;
class ract
{
    private:
       int area,l,w;

    public:
    void setdata(int length,int width)
    {
            l=length;
            w=width;
    }
       int getarea()
       {
         return area;
       }
        void area_ract()
        {
            area=l*w;
        }
};
int main()
{
    ract r;
    int length,width;
    cout<<"enter length & width:";
    cin>>length>>width;
    r.area_ract();
    cout<<"area is a"<<r.getarea();
}*/
/*9. Define a class Circle and define an instance member function to find the area of the
circle.*/
/*#include<iostream>
using namespace std;
class circle
{
    private:
      float area;
      int r;
    public:
    void setR(int data)
    {
        r=data;
    }
        void area_c()
        {
            area=3.14*r*r;
           
        }
       int  getR()
        {
            return r;
        }
         float getAREA()
        {
            return area;
        }
};
int main()
{
    circle c;
    float redious;
    cout<<"enter redious";
    cin>>redious;
    c.setR(redious);
    c.area_c();
    cout<<"redious is a "<<c.getR()<<"area of circle is a:"<<c.getAREA()<<endl;
    return 0;
}*/


/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/

/*#include<iostream>
using namespace std;
class Area
{
    private: 
        float side;
        float r;
        float length,width;
    public:
    void setSIDE(float data)
    {
        side=data;
    }
    float getSIDE()
    {
        return side;
    }
     float areaofsqure()
        {
            return side*side;
        }

        void setlw(float l,float w)
        {
            length=l;
            width=w;
        }
        float areaofract()
        {
            return  length*width; 
        }         
     void setR(float data)
    {
        r=data;
    }
       
        float getR()
        {
            return r;
        }
       float areaofcircle()
        {
           return 3.14*r*r;
        }   
};
int main()
{
    Area squre,ract,cir;
    squre.setSIDE(5);
    cout<<"side is a:"<<squre.getSIDE()<<"area of squre is a:"<<squre.areaofsqure()<<endl;
    ract.setlw(4,7);
    cout<<"area of ractangle is a :"<<ract.areaofract()<<endl;
    cir.setR(6);
    cout<<"redious is a :"<<cir.getR()<<"area of circle is a:"<<cir.areaofcircle(); 
}*/
//best example of arrow operator


/*#include<iostream>
using namespace std;
class shape
{
    private:
        float area;
    public :
        void setdata(float data)
        {
            area=data;
        }
        void display()
        {
            cout<<"area is a : "<<area<<"\n";           
        }
};
class circle
{
    shape  s;
    float radious;
    public:
        void setradious(float val)
        {
            radious=val;
        }
        void area_circle()
        {
            s.setdata(3.14*radious*radious);
        }
        shape *  operator->()
        {
            return &s;
        }
};
int main()
{
    circle c;
    c.setradious(3.5);
    c.area_circle();
    c->display();
    return 0;
}*/