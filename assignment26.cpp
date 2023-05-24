/*#include<iostream>
using namespace std;
class item
{
   private:
    int a;
    static int s;
    public:
        void seta(int b)
        {
            a=b;
        }
      static  void sets(int z)
        {
            s=z;
            //geta();error
        }
        int geta()
        {
            return a;
        }
      static  int gets(){return s;}
};
int main()
{
    item i,i2;
   // i.seta(4);
    i.sets(6);
    //cout<<i.gets();
    cout<<item::gets();
}
int item::s;*/


/*Assignment - 26 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Member function, static, constructor

1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/
/*#include<iostream>
using namespace std;
class complex
{
    private:
        int real;
        int img;
    public:

        void setData(int num1,int num2)
        {
            real=num1;
            img=num2;
        }
        void showData()
        {
            cout<<real<<"+"<<img<<endl;
        }
        complex add(complex a)
        {
            complex temp;
            temp.real=real+a.real;
            temp.img=img+a.img;
            return temp;
        }
};
int main()
{
    complex c1,c2,c3;
    c1.setData(3,5);
    c2.setData(5,7);
    c1.showData();
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
}*/



/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
/*#include<iostream>
using namespace std;
class time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        void setTime(int h,int m,int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
        void showTime()
        {
            cout<<hour<<":"<<minute<<":"<<second<<endl;   
        }
        void normalize()
        {
            int temp,temp_mi;
            temp=second;
            second=second%60;
            temp_mi=minute+temp/60;
            minute=temp_mi%60;
            hour=hour+temp_mi/60;
        }
        time add(time s)
        {
            time temp;
            temp.hour=hour+s.hour;
            temp.minute=minute+s.minute;
            temp.second=second+s.second;
            return temp;
        }

};
int main()
{
    time t1,t2,t3;
    t1.setTime(3,67,90);
    t2.setTime(4,53,20);
    t1.showTime();
    t2.showTime();
    t1.normalize();
    t2.normalize();
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    return 0;
}*/

//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
/*#include<iostream>
using namespace std;
class cube
{
    private:
    float volume;
    public:
    cube(float a)
    {
        if(a<0)
        {
            a=-a;
        }
        volume=a*a*a;
    }
    void showdata()
    {
        cout<<"volume is a"<<volume;
    }
};
int main()
{
    cube c(-4.9f);
    c.showdata();

}*/





//4. Define a class Counter and Write a program to Show Counter using Constructor.
/*class counter
{
    private:
    int count;
    public:
    counter()
    {

    }

};
int main()
{
    counter c;
}*/

/*5. Define a class Date and write a program to Display Dateand initialise date object
using Constructors.*/
/*#include<iostream>
using namespace std;
class Date
{
    private:
     int date;
    public:
        Date(int value)
        {
            date=value;
        }
        void showdata()
        {
                cout<<"date is a "<<date;
        }
};
int main()
{
    Date d(30);
    d.showdata();

}*/

/*6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/

/*#include<iostream>
using namespace std;
class student
{
    private:
        int age;
        int year;
        public:
        void setdata()
        {
            age=34;
            year=2004;
        }
        void showdata()
        {
            cout<<"age is"<<age<<"year is a"<<year;
        } 
        student(){} 
        student(student *c)
        {
            age=(*c).age;
            year=(*c).year;
        }
        void add(student c)
        {

        }
};
int main()
{  
    student c1;
    c1.setdata();
    student c2=c1;
    c2.showdata();
    c1.add(c2);
}*/
/*6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/
/*#include<iostream>
using namespace std;
#include<string.h>
class student
{
    private:
        int rno;
        char name[7];
        int age;

    public:
        student()
        {
            cout<<"enter details of student";
            cout<<"*************************";
            cout<<"enter roll number";
            cin>>rno;
            cout<<"enter name";
            cin.ignore();
            cin.getline(name,7);
            cout<<"enter age";
            cin>>age;
        }
        void showdata()
        {
            cout<<"roll_numer:"<<rno<<endl<<"name:"<<name<<endl<<"age is:"<<age;
        }
};
int main()
{
    student s;
    s.showdata();
}*/

/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/

/*#include<iostream>
using namespace std;
class box
{
    private:
    float length;
    float breadth;
    float height,volume;

    public:
    box()
    {
        cout<<"enter length";
        cin>>length;
        cout<<"enter breadth";
        cin>>breadth;
        cout<<"enter height";
        cin>>height;
    }
    void processdata()
    {
        volume=length*breadth*height;
    }
    void showdata()
    {
        cout<<"volume is a:"<<volume;
    }
};
int main()
{
    box b;
    b.processdata();
    b.showdata();
}*/


/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/

/*#include<iostream>
using namespace std;
class bank
{
    private:
        int pri,rate,no_year;
        float interest;
    public:
        bank(int p,int r,int n)
        {
            pri=p;
            rate=r;
            no_year=n;
        }
        void prodata()
        {
            interest=(pri*rate*no_year)/100.00;
        }
        void showdata()
        {
            cout<<"simple interest "<<interest;
        }
};
int main()
{
    bank b(3431,5,8);
    b.prodata();
    b.showdata();
}*/



/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
/*#include<iostream>
using namespace std;
class Bill
{
    private:
    float bill;

    public:
       int get()
       {
        float unit;
        cout<<"enter unit";
        cin>>unit;
        return unit;
       }
       void calculatebill(int);
       void showdata()
       {
        cout<<"bill is a"<<bill;
       }      
};
void Bill::calculatebill(int data)
{
                switch(data<=100)
                {
                        case 1:
                        {
                            bill=data*1.20;
                            break;
                        }
                        case 0:
                            switch(data<=200)
                            {
                                case 1:
                                {
                                    bill=(data-100)*2+120;
                                    break;
                                }
                                case 0:
                                {
                                    bill=(data-200)*3+320;
                                    break;
                                }
                            }
                            break;
                }    
}  
int main()
{
    int  u;
    Bill b;
    u=b.get();
    b.calculatebill(u);
    b.showdata();
}*/


/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
/*#include<iostream>
using namespace std;
class StaticCount
{
    private:
    static int num;
    public:
     void  incredata()
        {
            num++;
        }
   static void showdata()
    {
        cout<<"function call"<<num;
    }

};
int StaticCount::num;
int main()
{
    StaticCount s1;
    s1.incredata();
    s1.incredata();
    s1.incredata();
    StaticCount::showdata();
}*/