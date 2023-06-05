/*Assignment - 28 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Operator Overloading, friend operator and this pointers

1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/

/*#include<iostream>
using namespace std;
class complex
{
    private:
        int img,real;
    public: 
        friend istream & operator>>(istream &,complex &);
        friend ostream & operator<<(ostream &,complex );
};
 istream & operator>>(istream &in,complex &data)
 {
    cout<<"enter imgnary number:";
    in>>data.img;
    cout<<"enter real number:";
    in>>data.real;
    return in;
 }
 ostream & operator<<(ostream &out,complex data)
 {
    out<<"imgnary number:"<<data.img<<endl<<"real number:"<<data.real;
    return out;
 }
int main()
{
    complex c;
    cin>>c;
    cout<<c;
    return 0;
}*/
/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/
/*#include<iostream>
using namespace std;
class complex{
    private:
        int img,real;
    public:
        void setdata(int img,int real)
        {
           (*this).img=img;
           this->real=real;
        }
        void showdata()
        {
            cout<<"imgnary number is:"<<img<<endl<<"real number is:"<<real;
        }
};
int main()
{
    complex c;
    c.setdata(5,7);
    c.showdata();

}*/


/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/
/*#include<iostream>
using namespace std;
class subscript
{   
    int a[8];
   const  int size=8;
    public:
        subscript()
        {       
        }
        int setarray(int n,int index)
        {
            if(index>=size)
            {
                exception_hendle(-1);
            }
            else
            {
                 a[index]=n;
            }
        }
        void display(int index)
        {
             if(index>=size)
            {
                exception_hendle(-1);
            }
            else
            {
                 cout<<a[index]<<endl;
            }
        }
        int operator[](int);
        void  exception_hendle(int a)
        {
            if(a==-1)
            {
                cout<<"array index out of bound exption"<<endl;
            }
        }
        subscript(int  a)
        {
            b[]=a;
        }
        operator=(subscript )
        {

        }
};
int subscript:: operator[](int data)
{
    if(data>=size)
    {
        exception_hendle(-1);
    }
    else
    {
         return a[data];
    }
}
int main()
{
    subscript s;
    s.setarray(23,89);
    s.display(567);
    cout<<s[56]<<endl<<s[67];//s.operator[](4);
    s[20]=50;
}*/

/*4. Create a student class and overload new and delete operators as a member function
of the class.*/

/*class student
{ 
    int *rno;
    char *name;
    public:
        operator new()
        {

        }

};
int main()
{
    student *s= new student();

}*/




/*5. Create a student class and overload new and delete operators outside the class.*/
//6. Create a complex class and overload assignment operator for that class.
/*#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class assignment
{   
    public:
    char *a;
    int b;
    public:
    assignment(const char p[],int c)
    {
        a=(char *)calloc(1,sizeof(char));
        strcpy(a,p);
        b=c;
    }
    void update(const char data[])
    {
        strcpy(a,data);
    }
    void operator=(assignment &c)
    {
        c.a=(char *)calloc(1,sizeof(char));
       strcpy(c.a,a);
        c.b=b;
    }
    void showdata()
    {
        cout<<a<<" "<<b<<endl;
    }
    assignment(){}
};
int main()
{
    assignment A("prity",23),B;
    cout<<"object A data:";
    A.showdata();
   A=B;
    A.update("kyada");
    cout<<endl<<"object A data:";
    A.showdata();
    cout<<endl<<"object B data:";
    B.showdata();
    return 0;
}*/
/*#include<iostream>
#include<string.h>
using namespace std;
#include<cstring>

class mystring
{
    private:
        char *p;
        int size;
    public:
    mystring(char *a  )
    {
        cout<<"parameterized constructor call"<<endl;
        size=strlen(a);
        p=(char *)malloc(size+1);
        strcpy(p,a);
    }
    mystring(mystring &a)
    {
        cout<<"copy constructor call"<<endl;
        p=(char *)malloc(a.size+1);
        strcpy(p,a.p);
    }
    void changevalue(char * d)
    {
        size=strlen(d);
        p=(char *)realloc(p,size+1);
        strcpy(p,d);
    }
    void showdata()
    {
        cout<<"value is a:"<<p<<endl;
    }
    mystring()
    {
        cout<<"default constructor call"<<endl;
        p=(char *)malloc(1);
    
    }
   mystring & operator=( mystring &data)
   {
    cout<<"assignment operator call"<<endl;
    if(p==data.p)
    {
        return  *this;
    }
        p=(char*)realloc(p,data.size+1);
       // p=(char *)malloc(data.size+1);
        strcpy(p,data.p);
   }
};
int main()
{
    mystring m("prity");
    mystring n=m;
    m.changevalue("kyada");
    m.showdata();
    n.showdata();
    mystring o("xyzw");
    o=m;
    mystring q;
    q=m;//p erase so create assign 1 block in default constructor
    m.changevalue("bali");
    m.showdata();
    o.showdata();
    q.showdata();
    m=m;
    cout<<"\n";
    mystring r;
    m.showdata();
    r=q=m;
    cout<<"\n";
    r.showdata();
    return 0;
}*/

//7. Create an Integer class and overload logical not operator for that class.
/*#include<iostream>
using namespace std;
class integer
{
    int num;
    public:
    void setdata(int v)
    {
        num=v;
    }
    /*integer operator!()
    {
        integer temp;
        temp.num=-num;
        return temp;
    }
    void showdata()
    {
        cout<<endl<<"value is a:"<<num;
    }
    integer(int a):num(a){}
    integer(){}
    int operator!()
    {
        return -num;
    }
};
int main()
{
    /*integer i,i2;
    i.setdata(2);
    i2=!i;
    i.showdata();
    i2.showdata();

    integer i=4;//second use
    int x;
    x=!i;
    cout<<x;
    int val=0;
    cout<<endl<<val;
    return 0;
}*/


/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
/*#include<iostream>
using namespace std;
class coordinate
{
    private:
        int x,y,z;
    public:
        coordinate(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        coordinate(coordinate &data)
        {
            cout<<"copy constructer call";
            x=data.x;
            y=data.y;
            z=data.z;
        }
        coordinate(){}
        void showdata()
        {
            cout<<"x-->"<<x<<"y-->"<<y<<"z-->"<<z<<endl;
        }
        coordinate operator,(coordinate a)
        {
            cout<<", opearator call \n";
            coordinate data;
            data.x=a.z;
            data.y=a.y;
            data.z=a.x;
            cout<<"caller object : "<<x<<"\n";
            return data;
        }
};
int main()
{
    coordinate c1(4,5,6),c2(5,7,8),c3(5,8,9),c4(3,5,6);
    //coordinate c3=(c1,c2);
    c3=(c1,c2,c4);
    cout<<"c1 data: \n";
    cout<<"***************************";
    c1.showdata();
    cout<<"c2 data: \n";
    cout<<"*****************************";
    c2.showdata();
    cout<<"c3 data: \n";
    cout<<"****************************";
    c3.showdata();
    return 0;
}*/

/*9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/
/*#include<iostream>
using namespace std;
class doller;
class rupee
{
    float r;
    public:
     int getR()
    {
        return r;
    }
    rupee(float data)
    {
        cout<<"perameterized  constructor call for rupee\n";
        r=data;
    }
    operator float()//return type not mention
    {

        cout<<"casting operator call for rupee"<<endl;
        return r;
    }
    void showdata()
    {
        cout<<"data is a-->"<<r<<"\n";
    }
    rupee(){cout<<"default constructor call for rupee\n";}
    /*operator dollar();//A use but that is declar after//but that not create object
    {
        cout<<"convert from r to dolar\n";
        return r/78.00;
    }
};
class dollar
{
    
    float d;
    public:
    dollar(){cout<<"default constructor call for A\n";}
   dollar(float data)
    {
        cout<<"paramiterized constructor call for A\n";
        d=data;
    }
    dollar(rupee ru)
    {
        cout<<"convert rupee to dollar by using constructor\n";
        d=ru.getR()/78.00;
    }
    operator float()//return type not mention,you can declare friend function that class
    {
        cout<<"casting operator call for dollar\n"<<endl;
        return d;
    }
    void showdata()
    {
        cout<<"data is a-->"<<d<<"\n";
    }
    operator rupee()
    {
        cout<<"convert from dolar to rupee\n";
        return d*78;//peramiterized constructor call
    }
};
int main()
{
    
    float x=500;
    float y=6;
    dollar a=x;
    a.showdata();
    x=(float)a;
    rupee v=y;
    v.showdata();
    y=(float)v;//type casting 
    v=a;//dolar to rupee
    a.showdata();
    v.showdata();
    a=v;//rupee to dolar
    a.showdata();
    return 0;
}*/
/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/
/*#include<iostream>
using namespace std;
class distance1
{
    private:
    float feet,inches;
    public:
    distance1(){cout<<"default constructor call"<<endl;};
    distance1(int a,int b)
    {
        cout<<"parameterized constructor call"<<endl;
        feet=a;
        inches=b;
    }
    distance1  operator()(int a,int b,int c)
    {
        distance1 d;
        d.feet=a+c+5;
        d.inches=a+b+15;
        return d;
    }
    distance1(distance1 &t)
    {
        cout<<"copy constructor call"<<endl;
        feet=t.feet;
        inches=t.inches;
    }
    void showdata()
    {
        cout<<"feet-->"<<feet<<"inches-->"<<inches<<endl;
    }
    friend ostream & operator<<(ostream &,distance1 );
};
   ostream & operator<<(ostream &in,distance1 data)
   {
        in<<"feet-->"<<data.feet<<"inches-->"<<data.inches<<endl;
   }  
int main()
{
    distance1 d(4,6);
    distance1 d2;
    d2=d(5,7,7);
    cout<<d2;
    d.showdata();
    d2.showdata();
}*/

/*11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/
/*#include<iostream>
using namespace std;
class mark
{
    private:
    int marks;
    public:
        mark(int data)
        {
            marks=data;
        }
        void showdata()
        {
            cout<<"marks is a:"<<marks;
        }
        mark  *  operator->()
        {
            return this; 
        }
};
int main()
{
    mark m(56);
   // mark *p=&m;//yeh nhi karna hai toh bhi arrow operator chale
    m->showdata();
    m.showdata();
}*/