/*Assignment - 11 A Job Ready Bootcamp in C++, DSA and IOT MySirG
More on functions in C Language*/
/*1. Write a function to calculate LCM of two numbers. (TSRS)*/
/*#include<stdio.h>
int lcm(int,int);
int main()
{
    int number_1,number_2,i;
    printf("Enter first number");
    scanf("%d",&number_1);
    printf("Enter second number");
    scanf("%d",&number_2);
    i=lcm(number_1,number_2);
    printf("The LCM of two number is a %d",i);
}
int lcm(int a,int b)
{
    int max,num;
    max=a>b?a:b;
    num=max;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            return (max);
        }
        max=max+num;
    }
}*/


/*2. Write a function to calculate HCF of two numbers. (TSRS)*/
/*#include<stdio.h>
int hcf(int,int);
int main()
{
    int number_1,number_2,i;
    printf("Enter first number");
    scanf("%d",&number_1);
    printf("Enter second number");
    scanf("%d",&number_2);
    i=hcf(number_1,number_2);
    printf("The HCF of two number is a %d",i);
}
int hcf(int a,int b)
{
    int i,max,hcf=1;
    max=a>b?a:b;
    for(i=2;i<=max/2;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    return(hcf);
}*/
/*3. Write a function to check whether a given number is Prime or not. (TSRS)*/
/*#include<stdio.h>
int prime(int);
int main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    prime(number);
    if(  prime(number))
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}
int prime(int a)
{
    int k=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            k++;
            break;
        }
    }
    if(k==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}*/
 
/*4. Write a function to find the next prime number of a given number. (TSRS)*/
/*#include<stdio.h>
int prime(int);
int main()
{
    int number,k;
    printf("Enter number");
    scanf("%d",&number);
    k=prime(number);
    printf(" Next prime number is a %d",k);
}
int prime(int a)
{
    int num;
    for(int i=a+1;i;i++)
    {
        num=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                num=1;
                break;
            }
        }
        if(num==0 && i!=1)
        {
            return i;
        }
    }
}*/
/*5. Write a function to print first N prime numbers (TSRN)*/
/*#include<stdio.h>
void prime(int);
int main()
{
    int number,k;
    printf("Enter number");
    scanf("%d",&number);
    prime(number);
}
void prime(int a)
{

    int k,n=0;
    for(int i=2;i>0;i++)
    {
        k=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                k++;
                break;
            }
        }
        if(k==0 && i!=1)
        {
            printf("%d\n",i);
            n++;
        }
        if(a==n)
        {
            break;
        }
    }
}*/
/*6. Write a function to print all Prime numbers between two given numbers. (TSRN)9*/
/*#include<stdio.h>
void prime(int ,int);
int main()
{
    int nu_1,nu_2;
    printf("Enter LOwer number");
    scanf("%d",&nu_1);
    printf("Enter upper number");
    scanf("%d",&nu_2);
    prime(nu_1,nu_2);
}
void prime(int a,int b)
{
    int k;
    for(int i=a+1;i<b;i++)
    {
        k=0;
        for(int j=2;j<=b/2;j++)
        {
            if(i%j==0)
            {   
                k++;
                break;
            }
        }
        if(k==0 && i!=1)
        {
            printf("%d\n",i);
        }
    }
}*/


/*7. Write a function to print first N terms of Fibonacci series (TSRN)*/

/*#include<stdio.h>
void fibbo(int);
int main()
{
    int nu_1;
    printf("Enter  number");
    scanf("%d",&nu_1);
    fibbo(nu_1);
}
void fibbo(int x)
{
    int a=0,b=1,c;
    for(int i=1;i<=x;i++)
    {
        c=a+b;//8
        printf("%d\n",a);//0 1 1 2 3
        a=b;//3
        b=c;//5
    }
}*/

/*8. Write a function to print PASCAL Triangle. (TSRN)*/
/*#include<stdio.h>
void pascal(int);
int fact(int );
int combi(int ,int );
int main()
{
    int nu_1;
    printf("Enter  number");
    scanf("%d",&nu_1);
    pascal(nu_1);
}

int fact(int n)
{
    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;

}
int combi(int a,int b)
{
        return fact(a)/(fact(a-b)*fact(b));
}
void pascal(int x)
{
            
                for(int k=0;k<x;k++)
                {
                    int r=0;
                    for(int p=0;p<x;p++)
                    {
                        if(p>=x-1-k)
                        {
                                printf("%d ",combi(k,r));
                                r++;
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
}*/


 /*9. Write a program in C to find the square of any number using the function.*/
/*#include<stdio.h>
float square(float);
int main()
{
    float nu_1,i;
    printf("Enter number");
    scanf("%f",&nu_1);
    i=square(nu_1);
    printf("The square is a %.2f",i);
}
float square(float x)
{
    float ans;
    ans=x*x;
    return ans;
}*/


 /*10. Write a program in C to find the sum of the series
  1! /1+2!/2+3!/3+4!/4+5!/5 using the function.*/

/*#include<stdio.h>
void series(int);
int fact(int);
int main()
{
    int nu_1;
    printf("Enter number");
    scanf("%d",&nu_1);
    series(nu_1);
}
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void series(int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        sum=sum+fact(i)/i;
    }
    printf("sum is a %d",sum);
}*/