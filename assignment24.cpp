/*Assignment - 24 Job Ready Bootcamp in C++, DSA and IOT MySirG

Functions in C++*/

//1. Define a function to check whether a given number is a Prime number or not.
/*#include<iostream>
using namespace std;
void prime(int );
int main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    prime(number);
    
}
void prime(int num)
{
    if(num<=0)
    {
        cout<<"number is invalid";
        return ;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            cout("number is not prime");
            return;
        }
    }
    if(num!=1)
        cout<<"number is prime";
}*/
//2. Define a function to find the highest value digit in a given number.

/*#include<iostream>
using namespace std;
void highest(int );
int main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    highest(number);
}
void highest(int num)
{   
    int high=-1;
    while (num)
    {
        if(num%10>high)
            high=num%10;
       num=num/10;
    }
    cout<<"high value digit is a:"<<high;
}*/



//3. Define a function to calculate x raised to the power y.
/*#include<iostream>
using namespace std;
void highest(int,int);
int main()
{
    int x,y;
    cout<<"enter number x raised";
    cin>>x;
    cout<<"enter number y power";
    cin>>y;
    highest(x,y);
}
void highest(int raised,int power)
{   
    int ans=1;
    while(power)
    {
        ans=raised*ans;
        power--;
    }
    cout<<"power is a :"<<ans;
}*/


//4. Define a function to print Pascal Triangle up to N lines.
/*#include<iostream>
using namespace std;
int combi(int ,int);
int fact(int);
void prime(int );
int main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    prime(number);
}
void prime(int num)
{
    for(int i=0;i<num;i++)
    {
        int r=0;
        for(int j=0;j<num;j++)
        {
            if(j>=num-i-1)
            {
                cout<<combi(i,r)<<" ";
                r++;
            }
            else
                cout<<" ";   
        }
        cout<<"\n";
    }
}
int  combi(int a,int b) 
{
    return fact(a)/(fact(a-b)*fact(b));
}
int  fact(int f) 
{
    int fac=1;
    if(f==0 || f==1)
    {
        return 1;
    }
    while(f)
    {
        fac=fac*f;
        f--;
    }
    return  fac;
}*/




/*5. Define a function to check whether a given number is a term in a Fibonacci series or
not.*/
/*#include<iostream>
using namespace std;
void fibbo(int);
int main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    fibbo(number);
}
void fibbo(int num)
{
    int a=1,b=1,c;
    for(int i=0;i<=num;i++)
    {
        cout<<" "<<a;
        if(a==num)
        {
            cout<<"yes,number present in Fibonacci series ";
            return;
        }
        if(a>num)
            break;
        c=a+b;
        a=b;
        b=c;
         
    }
    cout<<"No,number not present in Fibonacci series ";
}*/



//6. Define a function to swap data of two int variables using call by reference
/*#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int num1,num2;
    cout<<"enter  first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    swap(num1,num2);
    cout<<"number1 is a "<<num1<<" number2 is a "<<num2;
}
void swap(int &n,int &m)
{
    int t;
    t=n;
    n=m;
    m=t;
}*/




//7. Write a function using the default argument that is able to add 2 or 3 numbers.

/*#include<stdio.h>
#include<iostream>
using namespace std;
void add(int,int,int=0);
int main()
{
    int num1,num2,num3;
    cout("enter  first number");
    cin>>num1;
    cout("enter second number");
    cin>>num2;
    add(num1,num2);
    cout("\n**************************************\n");
    cout("enter  first number");
    cin>>num1;
    cout("enter second number");
    cin>>num2;
    cout("enter third number");
    cin>>num3;
    add(num1,num2,num3);
}
void add(int a,int b ,int c)
{
        int sum;
        sum=a+b+c;
        cout<<"sum is a :"<<sum;
}*/





/*8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/

/*#include<stdio.h>
#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float,float);
int main()
{
    int redious;
    int length,width;
    float base ,hight;
    cout<<"enter  redious";
    cin>>redious;
    cout<<"area of circle is a "<<area(redious);
    cout<<"enter length";
    cin>>length;
    cout<<"enter width";
    cin>>width;
    cout<<"area of ractangle is a "<<area(length,width);
    cout<<"\n**************************************\n";
    cout<<"enter  base";
    cin>>base;
    cout<<"enter hight";
    cin>>hight;
    cout<<"area of triangle is a "<<area(base,hight);
}
float area(int r)
{
        return 3.14*r*r;
}
int area(int l,int w)
{
        return l*w ;
}
float area(float b,float h)
{
        return (0.5*b*h);
}*/





/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/

/*#include<stdio.h>
#include<iostream>
using namespace std;
int max(int,int);
float  max(float,float);
int main()
{
    int num1,num2;
    cout<<"enter  first number of int ";
    cin>>num1;
    cout<<"enter second number of int ";
    cin>>num2;
    cout<<"Maximum is a"<<max(num1,num2);
    cout<<"\n**************************************\n";
    float fnum1,fnum2;
    cout<<"enter  first number of float ";
    cin>>fnum1;
    cout<<"enter second number of float ";
    cin>>fnum2;
    cout<<"Maximum is a"<<max(fnum1,fnum2);
    cout<<"\n**************************************\n";
}
int  max(int a,int b )
{
    return a>b?a:b;
}
float max(float a,float b )
{
    return a>b?a:b;
}*/

/*10. Write functions using function overloading to add two numbers having different data
types.*/

/*#include<stdio.h>
#include<iostream>
using namespace std;
float add(int,float);
double add(float,double);
int main()
{
    int num1;
    float fnum1,fnum2;
    double num;
    cout<<"enter  first number of int ";
    cin>>num1;
    cout<<"enter second for float";
    cin>>fnum1;
    cout<<"sum is a "<<add(num1,fnum1);
    cout<<"\n**************************************\n";
    cout<<"enter  first number of float";
    cin>>fnum1;
    cout<<"enter second for double";
    cin>>num;
    cout<<"sum is a "<<add(fnum1,num);
}
float add(int a,float b )
{
       return a+b;
}
double add(float b,double c )
{
       return b+c;
}*/