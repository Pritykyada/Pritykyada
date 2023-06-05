//overload c3=-C1+C2;
#include<iostream>
using namespace std;
class student
{
    int a,b;
    public :
        friend ostream& operator<<(ostream &,student);
        friend istream& operator>>(istream&,student &);
        student(){  cout<<endl<<"default constructor call"<<endl;}
        student(int s,int n){
            cout<<endl<<"peramiterized constructor call"<<endl;
            a=s;
            b=n;
        }        
       student operator-()
       {
            cout<<"-operator overload"<<endl;
            student temp,t;
            temp.a=-a;
            temp.b=-b;
            return  a>0?temp:t;
       }
       student (const student &c)
        {
            cout<<endl<<"copy constructor call"<<endl;
            a=c.a;
            b=c.b;
        }
       student operator+(student s)
       {
            student temp,t;
            cout<<"+ operator call"<<endl;
            temp.a=a+s.a;
            temp.b=b+s.b;
            return a>0? temp:t;//copy constructor call 
       }
       void showdata()
       {
        cout<<"a-->"<<a<<"b-->"<<b<<endl;
       }
      student operator++(int)
      {
        cout<<"++operator called";
            student temp;
            temp.a=a++;
           temp. b=b++;
           return temp;
      }
      student operator++()
      {
        student temp;
        temp.a=++a;
        temp.b=++b;
        return temp;
      }
};
ostream & operator<<(ostream &out,student data)
{
    static int a=0;
    cout<<"<<operator called"<<endl;
    cout<<a++;
    out<<"a-->"<<data.a;
    out<<"b-->"<<data.b;
    return out;
}
istream & operator>>(istream &in,student &data)
{   
        cout<<"enter a:";
        in>>data.a;
        cout<<endl<<"enter b:";
        in>>data.b;
        return in;
}
int main()
{
    student c1(6,3),c4,c5;
    cout<<" c1 data:";
    c1.showdata();
    student c2=c1;
    cout<<" c2 data:";
    c2.showdata();
   cout<<endl<<" after addition  data:"<<endl;
   // student c3=c5+c4;
    student c3=-c1+c2;//c2 first execute
    c3.showdata();
    cout<<endl<<" pre incriment  data:";
   // (++c3).showdata();
    cout<<endl<<" post incriment  data:"<<endl;
    cout<<c3 <<"hello "<<endl<<c3++;
    cout<<endl;
    (c3++).showdata();
    c3.showdata();
    cout<<"take input from user";
    cin>>c4>>c5;
    cout<<c4<<c5;
}

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
   int operator==(complex c)
   {
        if(num1==c.num1)
        {
            if ( num2==c.num2)
            {
                return 1;
            }
        }    
        return 0;
   }
};
int main()
{
    complex c1(4,6),c2(4,6);
    c1.showdata();
    c2.showdata();
    complex c3=c1+c2;
    c3.showdata();
    complex c4=c1-c2;
    c4.showdata();
   complex c5=c1*c2;
    c5.showdata();
    if (c1==c2)
    {
        cout<<"both object equal"<<endl;
    }
    else
    {
        cout<<"both object is not equal"<<endl;
    }
}*/

// 2. Write a C++ program to overload unary operators that is increment and decrement
/*#include<iostream>
using namespace std;
class unary
{
    private:
        int n1,n2;
    public:
        unary(){
            cout<<"default constructor call "<<endl;
        }
        unary(int x,int y)
        {
            cout<<"parameterized constructor call"<<endl;
            n1=x;
            n2=y;
        }
      unary operator++()
        {
            cout<<"pre insriment ++ operator call"<<endl;
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
            cout<<"pre dicriment  -- call"<<endl;
            unary temp;
            temp.n1=--n1;
            temp.n2=--n2;
            return temp;
        }
      unary operator--(int  p)
        {
            cout<<"post decriment -- call"<<endl;
        unary temp;
        temp.n1=n1--;
        temp.n2=n2--;
        return temp;
        }
    unary operator++(int p)
        {
        cout<<"post incriment ++ call"<<endl;
        unary temp;
        temp.n1=n1++;
        temp.n2=n2++;
        return temp;
    }
};

int main()
{
    unary u1(4,7),u2(0,0),u3,u4,u5;
    u1.showdata();
    u2++=++u1;
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

// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.
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
/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time
4.<    : oveload operator*/
/*#include <iostream>
using namespace std;
class time
{
public:
    int hour;
    int minute;
    int second;

public:   
    int operator==(time y)
        {
            int sum_t1=hour*3600+minute*60+second;
            int sum_t2=y.hour*3600+y.minute*60+y.second;
            if(sum_t1==sum_t2)
            {
                return 1;
            }
            return 0;
        }
    bool operator>(time &data);
    friend istream &  operator>>(istream &,time &);
    friend ostream & operator<<(ostream &,time &);   
    friend  void validation(time &p)
    {
        if(p.hour>=25)
        {
            cout<<"====================================="<<endl;
            cout<<"invalid time:"<<endl;
            exit(0);
        }  
    }
};
istream & operator>>(istream &cin,time &t)
{
    cout<<"enter hour:";
    cin>>t.hour;
    cout<<"enter minute:";
    cin>>t.minute;
    cout<<"enter second:";
    cin>>t.second;
    t.minute=t.minute+t.second/60;
    t.second=t.second%60;
    t.hour=t.hour+t.minute/60;
    t.minute=t.minute%60;
    validation(t);
    return cin;

}
ostream & operator<<(ostream &cou,time &p)
{
    cou<<p.hour<<":"<<p.minute<<":"<<p.second<<endl;
    return cou;

}
bool time::operator>(time &data)
    {
       if(hour>data.hour)
       {
            return 1;
       }
       else
       {
            if(hour==data.hour)
            {
                if(minute>data.minute)
                {
                    return 1;
                }
                else
                {
                    if(minute==data.minute)
                    {
                            if(second>data.second)
                            {
                                return 1;
                            }
                    }
                }
            }
             return 0;
       }

    }
int main()
{
    time t1, t2;
    cout<<"enter first time"<<endl;
    cout<<"==============================="<<endl;
    cin>>t1;
    cout<<endl;
    cout<<"enter second time"<<endl;
    cout<<"==============================="<<endl;
    cin>>t2;
    cout<<endl <<"==============================="<<endl;
    cout<<" first time:  ";
    cout<<t1;
    cout<<" second time: ";
    cout<<t2;
    cout<<endl <<"==============================="<<endl;
    cout<<"result of operation: "<<endl;
   if(t1==t2)
   {
    cout<<"time t1 and t2 is equal"<<endl;
   }
   else
   {
    cout<<"time t1 and t2 is not equal"<<endl;
   }
   if(t1>t2)
   {
        cout<<"time t1 is grater"<<endl;
   }
   else
   {
         cout<<"time t2 is grater"<<endl;
   }
}*/
/*5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
/*#include<iostream>
using namespace std;
class number
{
    private:
        int x,y,z;
    public:
    void setdata()
    {
       cout<<"enter x:";
       cin>>x;
       cout<<endl<<"enter y:";
       cin>>y;
        cout<<endl<<"enter z:";
       cin>>z;
      if(x<0)
       {
            x=-x;
       }
       if(y<0)
       {
            y=-y;
       }
       if(z<0)
       {
            z=-z;
       }
    }
    void showdata()
    {
        cout<<"x :"<<x<<"   y :"<<y<<" z :"<<z;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    number n,n1;
    n.setdata();
    cout<<"Number are :";
    n.showdata();
    -n;
    cout<<endl<<"negate the numbers"<<endl;
    n.showdata();
}*/

/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
/*#include<string.h>
#include<iostream>
using namespace std;
class str
{
    private:
        char name[18];
        int size;
    public:
        void setdata()
        {
           cout<<"Enter string"<<endl;
           cin>>name;
           size=strlen(name);
        } 
       str operator+(str b)
       {
            str temp;
            strcpy(temp.name,name);
            strcat(temp.name,b.name);
            return temp;
       }
       void showdata()
       {
            cout<<"String is :"<<name<<endl;
       }
       int operator==(str &n);
};
int str::operator==(str &n)
       {
        int data=size>n.size?size:n.size;
        for(int i=0;i<=data+1;i++)
        {
            if(name[i]==n.name[i])
            {}
            else
            {
                return 1;
            }
        }
        return 0;
       }
int main()
{
    str s1,s2,s3;
    s1.setdata();
    s2.setdata();
    cout<<"********************************"<<endl;
    s1.showdata();
    s2.showdata();
    s3=s1+s2;
    cout<<"********************************"<<endl;
    cout<<endl<<"concate string:"<<endl;
    s3.showdata();
    cout<<"*********************************"<<endl;
    if((s1==s2)==0)
    {
        cout<<"both string are equal"<<endl;
    }
    else
    {
        cout<<"both string not equal"<<endl;
    }
    return 0;
}*/
/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/
/*#include<iostream>
using namespace std;
class fraction
{
    private:
    long numerator;
    long denominator;
    public:
    fraction (long n=0,long d=0)
    {
        numerator=n;
        denominator=d;  
    }
    fraction  operator++()
    {
        ++numerator;  
        ++denominator;
        return *this;
    }
     fraction operator++(int p)
    { 
        fraction temp=*this;
        numerator++;
       denominator++;
        return temp;
    }

    friend istream & operator>>(istream &,fraction &);
    friend ostream & operator<<(ostream &,fraction &);

};
ostream  & operator<<(ostream &out,fraction &data)
{
    out<<data.numerator<<"/"<<data.denominator<<endl;
    return out;

}
istream & operator>>(istream &c,fraction &a)
{
    cout<<endl<<"numerator:";
    c>>a.numerator;
    cout<<endl<<"denominator:";
    c>>a.denominator;
    return c;
}

int main()
{
    fraction f,f2;
    cout<<"f    :"<<f;
     cout<<"f2   :"<<f2;
     cout<<endl<<"enter 1 fraction number"<<endl;
     cin>>f;
     cout<<endl<<"f++   :";
     f++;
     cout<<f;
    cout<<"++f   :";
     ++f;
     cout<<f;
     cout<<endl<<"enter 2 fraction number"<<endl;
     cin>>f2;
     cout<<endl<<"f2=++f"<<endl;
     f2=++f;
     cout<<"f  :"<<f;

      cout<<"f2  :"<<f2;
        cout<<endl<<"f2=f++"<<endl;
        f2=f++;
        cout<<"f  :"<<f;
        cout<<"f2  :"<<f2;
}*/
/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object*/
/*#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
    public:
    void inputdata();
    void showdata();
    void  operator-();
    
};
void matrix:: operator-()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j]=-a[i][j];
            }
        }
    }
void matrix::inputdata()
    {
        cout<<"enter matrix(3 *3)"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
void matrix::showdata()
{
    cout<<"matrix is a:"<<endl;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
}
int main()
{
    matrix m;
    m.inputdata();
    m.showdata();
    -m;
    m.showdata();  
}*/

/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
/*#include<string.h>
#include<iostream>
using namespace std;
class mystring
{
    private:
    char str[100];
    public:
    void inputdata()
    {
      cout<<"Enter string : ";
      cin>>str;
    }
    mystring operator!();
    void  showdata()
    {
        cout<<str;
    }
};
    mystring mystring::operator!()
    {
        
        for(int i=0;str[i];i++)
        {
            if(str[i]>='A' &&   str[i]<='Z')
            {
                 str[i]= str[i]+32;
            }
            else
            {
                if( str[i]>='a' &&  str[i]<='z')
                {
                 str[i]= str[i]-32;
                }
            }
        }
    }
int main()
{
    mystring s1,s2;
    s1.inputdata();
    cout<<"----------------------------------\n";
    cout<<"String is a :";
    s1.showdata();
    s2=!s1;
    cout<<"\n----------------------------------\n";
    cout<<"after perform ! operation\n";
    s2.showdata();
    cout<<"\n----------------------------------\n";
    s1.showdata();
    //s1.showdata();    
}*/


/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Output */

/*#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void inputdata();
    Matrix operator+(Matrix);
    void showdata();
};
void  Matrix::showdata()
{
    
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"    ";
            }
            cout<<endl;
        }
}
Matrix Matrix:: operator+(Matrix m)
{   
    Matrix temp;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
    return temp;
}
    void Matrix::inputdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
             cin>>a[i][j];
            }
        }
    }
int main()
{
    Matrix m,m2,m3;
    cout<<"Enter matrix one data(3*3)"<<endl;
    cout<<"********************************"<<endl;
    m.inputdata();
    cout<<"first matrix is:"<<endl;
    cout<<"********************************"<<endl;
    m.showdata();
    cout<<"Enter matrix two data(3*3)"<<endl;
    cout<<"********************************"<<endl;
    m2.inputdata();
    cout<<"second matrix is:"<<endl;
    cout<<"********************************"<<endl;
    m2.showdata();
    m3=m+m2;
    cout<<"********************************"<<endl;
    cout<<"addition matrix is:"<<endl;
    m3.showdata();
}*/