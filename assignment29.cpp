/*Assignment – 29 A Job Ready Bootcamp in C++, DSA and IOT MySirG

                Type Casting and Conversion*/

/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}*/
/*#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    Complex()
    {
        cout<<"default constructor call\n";
    }
     Complex(int val)
     {
        cout<<"perameterized constructor call\n";
        real=val;
        img=val;
     }
     void showdata()
     {
        cout<<"real :"<<real<<"   img :"<<img<<"\n";
     }
};
int main()
{
Complex c1;
cout<<"-----------------------------\n";
int x=5;
c1=x;
cout<<"------------------------------\n";
c1.showdata();
return 0;
}*/


/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}*/
/*#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:

    Complex(){ cout<<"default constructor call\n";}
    void setData(int num1,int num2)
    {
        real=num1;
        img=num2;
    }
    operator int()
    {
        cout<<"convert user to primitive\n";
        return real+img;
    }
};
int main()
{
Complex c1;
cout<<"-----------------------------\n";
c1.setData(3,4);
int x;
x=c1;
cout<<"-----------------------------\n";
cout<<x;
return 0;
}*/

/*#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:

    Complex(){ cout<<"default constructor call\n";}
    void setData(int num1,int num2)
    {
        real=num1;
        img=num2;
    }
    operator int()
    {
        cout<<"int() called\n";
        return real+img;
    }
   explicit operator long()//explicit agar kese toj chalse
    {
        cout<<"long() called\n";
        return real+img;
    }
};
int main()
{
    Complex c1;
    cout<<"-----------------------------\n";
    c1.setData(3,4);
    int x;
    //x=c1;
    cout<<"-----------------------------\n";
    cout<<int(c1);//compliler convert krvanu vicharse//(int)c1
    return 0;
}*/

/*3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}*/
//you can return object of that class 
/*#include<iostream>
using namespace std;
class Product
{
    int x,y;
    public:
    Product(){cout<<"default constructor call\n";}
    int getX()
    {
        return x;
    }
     int getY()
    {
        return y;
    }
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
    void showdata()
    {
             cout<<"num1 :"<<x<<"num2 :"<<y<<"\n"; 
    }
};
class Item
{
    int num1,num2;
    public:
    Item(){cout<<"default constructor call\n";}
    Item(Product p)
    {
        cout<<"constructor call for type casting\n";
        num1=p.getX();//num1=p.x+p.y;
        num2=p.getY();
    }
    void showdata()
    {
        cout<<"num1 :"<<num1<<"num2 :"<<num2<<"\n";
    }
    Item operator=(Item i)
    {
        cout<<"operator = called\n";
        return Item();
    }
};
int main()
{
        Item i1;
        cout<<"-----------------------------\n";
        Product p1;
        cout<<"-----------------------------\n";
        p1.setData(3,4);
        i1=p1;
        i1.showdata();
        cout<<"-----------------------------\n";
        p1.showdata();
        return 0;
}*/


/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
Item i1;
Product p1;

p1.setData(3,4);
i1=p1;
return 0;
}*/

/*#include<iostream>
using namespace std;
class Item
{
    int num1,num2;
    public:
    Item(){cout<<"default constructor call\n";}
    void showdata()
    {
        cout<<"num1 :"<<num1<<"num2 :"<<num2<<"\n";
    }
    int & getnum1()
    {
        return num1;
    }
    int & getnum2()
    {
        return num2;
    }
    Item(int a,int b)
    {
        num1=a;
        num2=b;
    }
};
class Product
{
    int x,y;
    public:
    Product(){cout<<"default constructor call\n";}
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
    operator Item()
    {
        /*Item t;
        t.getnum1()=x;
        t.getnum2()=y;
        return t;
        Item t(x,y);
        return t;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    i1.showdata();
    return 0;
}*/
/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}*/


/*#include<iostream>
using namespace std;
class Invent1
{
    int a;
    public:
    Invent1(int x)
    {
        a=x;
    }
    operator float()
    {
        return a*1.00;
    }
    int getA()
    {
        return  a;
    }
};
class Invent2
{
    private:
    int num;
    public:
    Invent2(){}
    Invent2(Invent1 I)
    {
        num=I.getA();
    }
    void showdata()
    {
        cout<<"value is a :"<<num<<"\n";
    }
    
};

int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
cout<<"tv  :  "<<tv<<"\n";
d1=s1;
d1.showdata();
//cout<<"d1  :  "<<d1<<"\n";
return 0;
}*/



/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.
Example-
int main()
{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}*/

/*#include<iostream>
using namespace std;
class Time
{
    int hour,minute,sec;
    public:
    Time(int s)
    {
        hour=s/3600;
        minute=s%3600;
        sec=minute%60;
        minute=minute/60;
           }
    void display()
    {
       cout<<"time ="<<hour <<":"<<minute<<":"<<sec<<endl;
    }
};
int main()
{
int duration;
cout<<"Enter duration in second";
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}*/



/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}*/
/*#include<iostream>
using namespace std;
class Time
{
    int hour,min;
    public:
    Time(int h,int m)
    {
        hour=h;
        min=m;
    }
    void display()
    {
        cout<<"hour : "<<hour<<"  minute : "<<min<<"\n";
    }
    int getMIN()
    {
        return min;
    }
};
class Minute
{
    int m;
    public:
    Minute()
    {
        m=0;
    }
    void display()
    {
        cout<<"Minute is :  "<<m<<"\n";
    }
    Minute(Time t)
    {   
        m=t.getMIN();
    }
};
int main()
{
Time t1(2,30);
t1.display();
cout<<"-----------------------------\n";
Minute m1;
m1.display();
cout<<"-----------------------------\n";
m1=t1; // Fetch minute from time
t1.display();
cout<<"-----------------------------\n";
m1.display();
cout<<"-----------------------------\n";
return 0;
}*/
/*8. Create a Rupee class and convert it into int. And Display it.
Example-
int main()
{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}*/
/*#include<iostream>
using namespace std;
class Rupee
{
    int data;
    public:
    Rupee(int a)
    {
        data=a;
    }
    operator int()
    {
       return data; 
    }
};
int main()
{
Rupee r = 10;
int x = r;
cout<<"value is a:"<<x;
return 0;
}*/



/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

Example-
int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}*/
/*#include<iostream>
using namespace std;
class Dollar{
    int d;
    public:
    Dollar()
    {}
    Dollar(int data)
    {
        d=data;
    }
    void display()
    {
        cout<<"value is a :"<<d<<"\n";
    }
};
int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}*/



/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}*/
/*#include<iostream>
using namespace std;
class Rupee
{
    float ru;
    public:
    Rupee(float data)
    {
        ru=data;
    }
    float getR()
    {
        return  ru;
    }
     void display()
    {
        cout<<"Rupee is a :"<<ru<<"\n"; 
    }

};
class Dollar
{
    float Do;
    public:
    Dollar(Rupee R )
    {
        Do=R.getR()/78;
    }
    void display()
    {
        cout<<"Dollar is a :"<<Do<<"\n"; 
    }
    operator Rupee()
    {
        return Do*78;
    }

};
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
cout<<"-----------------------------\n";
d.display();
r.display();
cout<<"-----------------------------\n";
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}*/