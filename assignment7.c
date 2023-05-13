//1.write  a program to find the n th term of fibonaci series
/*#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter number");
    scanf("%d",&n);//5
    while(a<=n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}*/

//Write a program to print first N terms of Fibonacci series
/*#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter number");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return 0;
}*/

//3.write a program to check whether a given number is there in the fibonacci series or not
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter number");
    scanf("%d",&n);
    while(a<=n)
    {
        if(a==n)
        {
            printf("present in fibonacci series");
            exit(0);
        }
        c=a+b;
        a=b;
        b=c;
    }
    printf("does not present in fibonacci series");
}*/

//write a program to calculate HCF of two number.....
/*#include<stdio.h>
int main()
{
    int a,b,i,max,HCF=1;
    printf("enter number");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;

    for(i=1;i<=max/2;i++)
    {
        if(a%i==0&& b%i==0)
            HCF=i;
    }
    printf("HCF of %d and %d  are %d",a,b,HCF);
}*/

//write a program to check whether two given numbers are co-prime number or not
/*#include<stdio.h>
int main()
{
    int a,b,max,i,k=0;
    printf("enter number");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;

    for(i=2;i<=max/2;i++)
    {
        if(a%i==0 && b%i==0)
        {
            k++;
            break;
        }
    }
    if(k==1)
        printf("number are a  not co -prime");
    else
        printf("number are co-prime");
}*/
//writea program to print all prime number under 100
/*#include<stdio.h>
int main()
{
    int i,k,c=0;
    for(i=1;i<=100;i++)
    {
        for(k=2;k<=i/2;k++)
        {
            if(i%k==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && i!=1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}*/

//7.write a program to print all prime number between two given numbers
/*#include<stdio.h>
int main()
{
    int a,b,c,k,n;
    printf("enter lower  number");
    scanf(" %d",&a); 
    printf("\nenter upper number");
    scanf(" %d",&b);
    for(n=a+1;n<b;n++)
    {
        c=0;
        for(k=2;k<=n/2;k++)
        {
            if(n%k==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && n!=1)
        {
            printf("%d ",n);
        }
    }
    return 0;
}*/
//8.write a program to find next prime number of a given number....
/*#include<stdio.h>
int main()
{
    int a,i,j,c;
    printf("enter number");
    scanf("%d",&a);
    for(i=a+1;i<=i+4;i++)
    {
        c=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",i);
            break;
        }
    }
    return 0;
}*/
//9.write a program to check whether a given number is an Armstrong number or not
/*#include<stdio.h>
int main()
{
    int n,modulo,num=0,copyn;
    printf("enter number");
    scanf("%d",&n);
    copyn=n;
    while(n)
    {
            modulo=n%10;
            num=(modulo*modulo*modulo)+num;
            n=n/10;
    }
    copyn==num?printf("number is armstrong number"):printf("number is not armstrong");
    return 0;                                                                                      
}*/

//10.write a program to print all armstrong numbers under 1000
/*#include<stdio.h>
int main()
{
    int modulo,n,num,copyn,i;
    for(i=0;i<=1000;i++)
    {
        n=i;
        num=0;
        while(n>0)
        {
            modulo=n%10;
            num=(modulo*modulo*modulo)+num;
            n=n/10;
        }
        if(i==num)
        {
            printf("%d ",i);
        }
    }
    return 0;
}*/
