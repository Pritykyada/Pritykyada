/*Assignment - 10 A Job Ready Bootcamp in C++, DSA and IOT MySirG
Functions in C Language*/


/*1. Write a function to calculate the area of a circle. (TSRS)*/
/*#include<stdio.h>
float area(int);
int main()
{
    int R;
    printf("enter R of circle:");
    scanf("%d",&R);
    area(R);
    printf("The area od circle is a :%.2f",area(R));
}
float area(int a)
{
    float process;
    process=3.14*a*a;
    return(process);
}*/
//*********************************************************************************************

/*2. Write a function to calculate simple interest. (TSRS)*/

/*#include<stdio.h>
float interest(int ,int ,int);
int main()
{
    int P,R,T;
    printf("Enter the value of principal balance:");
    scanf("%d",&P);
    printf("\nEnter the value of rate:");
    scanf("%d",&R);
    printf("\nEnter the value of time:");
    scanf("%d",&T);
    interest(P,R,T);
    printf("The simple interest is a:%.2f",interest(P,R,T));
}
float interest(int a,int b,int c)
{
    float process;
    process=a*b*c/100;
    return (process);
}*/

//***********************************************************************************
/*3. Write a function to check whether a given number is even or odd.
Return 1 if the number is even, otherwise return 0. (TSRS)*/
/*#include<stdio.h>
int evenodd(int);
int main()
{
    int number,i;
    printf("Enter number");
    scanf("%d",&number);
    i= evenodd(number);
    printf("value is a %d",i);
}
int evenodd(int a)
{
    if(a&1)
        return 0;
    else
        return 1;
}*/


/*4. Write a function to print first N natural numbers (TSRN)*/
/*#include<stdio.h>
void natural(int);
int main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    natural(number);
}
void natural(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d\n",i);
    }
}*/

/*5. Write a function to print first N odd natural numbers. (TSRN)*/
/*#include<stdio.h>
void odd(int);
int main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    odd(number);
}
void odd(int a)
{
    int i;
    for(i=1;i<=a;i++)
        printf("%d\n",2*i-1);
}*/

/*6. Write a function to calculate the factorial of a number. (TSRS)*/
/*#include<stdio.h>
int factorial(int);
int main()
{
    int number,result;
    printf("Enter number");
    scanf("%d",&number);
    result=factorial(number);
    printf("factorial of a number is a%d",result);
}
int factorial(int a)
{
    int i,fact=1;
    for(i=a;i>1;i--)
        fact=fact*i;
    return fact;
}*/

/*7. Write a function to calculate the number of combinations one can 
make from n items and r selected at a time. (TSRS)*/
/*#include<stdio.h>
int combi(int ,int);
int fact (int );
int main()
{
    int n,r,result;
    printf("Enter number n :");
    scanf("%d",&n);
    printf("Enter number r:");
    scanf("%d",&r);
    result=combi(n,r);
    printf("The number of combinations is a %d",result);
}
int combi(int a,int b)
{
   return fact(a)/(fact(a-b)*fact(b));
    
}
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}*/


/*8. Write a function to calculate the number of arrangements 
one can make from n items and r selected at a time. (TSRS)*/
/*#include<stdio.h>
int fact(int );
int arrange(int ,int);
int main()
{
    int n,r,result;
    printf("Enter number n :");
    scanf("%d",&n);
    printf("Enter number r:");
    scanf("%d",&r);
    result=arrange(n,r);
    printf("The number of combinations is a %d",result);
}
int arrange(int a,int b)
{
    return fact(a)/fact(a-b);
}
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}*/


/*9. Write a function to check whether a given number contains a given digit or not. (TSRS)*/
/*#include<stdio.h>
int conta(int ,int);
int main()
{
    int number,digit,result;
    printf("Enter number number :");
    scanf("%d",&number);
    printf("Enter number digit:");
    scanf("%d",&digit);
    conta(number,digit);
    if(conta(number,digit))
        printf(" The given number contains a given digit ");
    else
        printf("The given number  does  not contains a given digit ");   
}
int conta(int a,int b)
{
    while (a)
    {
        int rem;
        rem=a%10;
        if(rem==b)
        {
            return 1;
        }
        a=a/10;
    }
    return 0;
}*/


/*10. Write a function to print all prime factors of a given number. For example
, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/

/*#include<stdio.h>
void prime_factors(int);
int main()
{
    int number;
    printf("Enter number number :");
    scanf("%d",&number);
    prime_factors(number);
}
void prime_factors(int a)
{
    int i;
    for(i=2;a!=1;i++)
    {
       while(a%i==0)
        {
            printf("%d ,",i);
            a=a/i;
        }
    }
}*/






