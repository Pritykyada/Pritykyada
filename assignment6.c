// 1. write a program to calculate sum of first N natural number.........
/*#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter  natural number: ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is a %d",sum);
}*/

//2. write a program to calculate sum of first N  even natural number.........
/*#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter  natural number: ");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    {
        s=s+i*2;
    }
    printf("sum of even natural number is a %d",s);
}*/

//3.write a program to calculate sum of first N  odd natural number.........
/*#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter  natural number: ");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    {
        s=s+i*2-1;
    }
    printf("sum of even natural number is a %d",s);
}*/
//4.write a program to calculate sum of squares of first N natural number
/*#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter  natural number: ");
    scanf("%d",&n);
     for(i=1,s=0;i<=n;i++)
     {
        s=s+i*i;
     }
     printf(" sum is a :%d",s);
}*/

//5.write a program to calculate sum of cubes of first N natural number
/*#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter  natural number: ");
    scanf("%d",&n);
     for(i=1,s=0;i<=n;i++)
     {
        s=s+i*i*i;
     }
     printf(" sum is a :%d",s);
}*/
//6.write a program to claculate factorial of a number........
/*#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter  natural number: ");
    scanf("%d",&n);
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("factorial is a :%d",fact);
}*/

//7.write a program to count digits in a given number;
/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter  natural number: ");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        i++;
    }
    printf("digit is a:%d",i);
}*/

//8.write a program to check whether a given number is a prime number or not
/*#include<stdio.h>
int main()
{
    int i,n,flog=0;
    printf("Enter  natural number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i)
        {}
        else
        {            
            flog=1;
            break;
        } 
    }
    if(flog==0 && a!=1)
        printf("prime");
    else
        printf("not prime");
}*/
//write a program to claculate LCM of two number..........
#include<stdio.h>
int main()
{
    int i,k,max,num;
    printf("Enter two natural number: ");
    scanf("%d %d",&i,&k);
    max=i>k?i:k;
    num=max;
    while(1)
    {
        if(max%k==0 && max%i==0)
        {
            printf("The LCM of %d and %d Are :%d",i,k,max);
            break;
        }
        max=max+num;
    }
    return 0;
}

//10.write a program to reverse a given number........
/*#include<stdio.h>
int main()
{
    int a,rem,ans=0,s=0;
    printf("enter number");
    scanf("%d",&a);

    while(a)
    {
        rem=a%10;
        if(rem==0)
            ans++;
        s=s*10+rem;
        a=a/10;
    }
    while(ans--)
    {
        printf("%c",'0');
    }
    printf("%d",s);
}*/
