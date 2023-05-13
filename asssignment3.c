//1.	Write a program to check whether a given number is positive or non-positive.
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    a>0?printf("positive"): printf("non positive");
}*/

//2.Write a program to check whether a given number is divisible by 5 or not
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
}*/

//3.	Write a program to check whether a given number is an even number or an odd number.
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    a%2?printf("odd"):printf("even");
    return 0;
}*/

//4.	Write a program to check whether a given number is an even number or an odd number without using % operator.
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    n/2*2==n?printf("even"):printf("odd");
    return 0;
}*/
//5.Write a program to check whether a given number is a three-digit number or not.
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if((n>99)&&(n<1000))
    {
        printf("Three digit number");
    }
    else
    {
        printf("Does not three digit number");

    }    
    return 0;
}*/
/*6.	Write a program to print greater between two numbers. 
Print one number of both are the same.*/
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number"); 
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is a greater",a);
    }
   else
   {
        printf("%d is a greater",b);
    }
    
}*/
/*7.	Write a program to check whether roots of a given quadratic 
equation are real & distinct, real & equal or imaginary roots*/

/*#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter  value of a: ");
    scanf("%d",&a);
    printf("enter  value of b: ");
    scanf("%d",&b);
    printf("enter  value of c: ");
    scanf("%d",&c);
    d=b*b-4*a*c;

    if(d>0)
        printf("real & distinct");

    else if(d<0)
        printf("imaginary roots");
    else
        printf("real & equal");

    return 0;
}*/
//8.	Write a program to check whether a given year is a leap year or not.(366)
/*#include<stdio.h>
int main()
{
    int year;
    printf("enter number");
    scanf("%d",&year);

    if(year%400==0||( year%100!=0&&year%4==0))
    {
        printf("year ia a leap year");
    }
    else
    {
        printf("year ia a not leap year");
    }
}*/
/*9.	Write a program to find the greatest among three given numbers.
 Print number once if the greatest number appears two or three times.*/
 /*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number"); 
    scanf("%d%d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is a greater",a);
        else
            printf("%d is a greater",c);
    }
    else
    {
        if(b>c)
            printf("%d is a greater",b);
        else
            printf("%d is a greater ",c);
    }

    printf("%d",a>b?a>c?a:c:b>c?b:c);//you can also write that type also
    
}*/
/*10.	Write a program which takes the cost price and selling price of a product from the user. 
Now calculate and print profit or loss percentage.*/
/*#include<stdio.h>
int main()
{
    double s,pl,c;
    double per;
    printf("enter costprice\n");
    scanf("%lf",&c);
    printf("enter sellingprice\n");
    scanf("%lf",&s);
   
    per=((s-c/c)*100);
    if(per>0)
    {
        printf("profit %lf",per);
    }
    else if(per<0)
    {
         printf("lose %lf",per);
    }
    else
    {
        printf("nighter profit nor loss");
    }
}*/

//11.	Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
 //Now display whether the candidate passed the examination or failed.
 /*#include<stdio.h>
int main()
 {
    int a,b,c,d,e;
 printf("enter  five number");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("pass in exam");
 else
        printf("try next time");
 }*/

//12.	Write a program to check whether a given alphabet is in uppercase or lowercase
/*#include<stdio.h>
int main()
{
    char  a;
    printf("enter alphabate");
    scanf("%c",&a);
    //printf("%d",a);
    if(a>='A'&& a<='Z')
        printf("alphabet is in upercase");
    else
        printf("alphabet is in lowercase");
}*/

//13.	Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*#include<stdio.h>
int main()
{
    int  a;
    printf("enter number");
    scanf("%d",&a);

   
    if(a%2==0 && a%3==0)
    {
        printf("number is devisible by both");
    }
    else
    {
        printf("cannot be divided with any number");
    }
}*/
//14.	Write a program to check whether a given number is divisible by 7 or divisible by 3.
/*#include<stdio.h>
int main()
{
    int  a;
    printf("enter number");
    scanf("%d",&a);

   
    if(a%7==0 || a%3==0)
    {
        printf("number is devisible by any one");
    }
    else
    {
        printf("cannot be divided with any number");
    }
}*/

//15.	Write a program to check whether a given number is positive, negative or zero.
/*#include<stdio.h>
int main()
{
    int  a;
    printf("enter number");
    scanf("%d",&a);

    if(a<0)
    {
       printf("number is negative\n");
    }
    if(a>0)
    {
        printf("number is positive\n");
    }
    if(a==0)
    {
        printf("number is a zero");
    }
}*/
/*16.	Write a program to check whether a given character is an alphabet (uppercase),
 an alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char  a;
    printf("enter input");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("alphabet is in upercase\n");
    }
    else if(a>=97 && a<=122)
    {
        printf("alphabate is in lowercase\n");
    } 
    else if(a>='0'&& a<='9')
    {
        printf("it is a digit");
    }
    else
    {
       printf("it is a special charcter\n");
    }
}
/*17.	Write a program which takes the length of the sides of a triangle as an input. 
Display whether the triangle is valid or not.*/
/*#include<stdio.h>
int main()
{
    int  a,b,c;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    printf("enter c:\n");
    scanf("%d",&c);

    if(a+b>c&&b+c>a&&c+a>b)
    {
        printf("valid");
    }
    else
    {
        printf("not valid");
    }
}*/
//18.	Write a program which takes the month number 
//as an input and display number of days in that month
/*#include<stdio.h>
int main()
{
    int  a;
    printf("enter number");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        printf("the month of the day is 31");
    }
    else if(a==2)
    {
        printf("the month of the day is 28");   
    }
    else if(a==2||a==4||a==6||a==9||a==11)
    {
        printf("the month of the day is 30");   
    }
    else
    {
        printf("unvalid month");
    }
}*/
