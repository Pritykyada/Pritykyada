            /*Assignment - 12 A Job Ready Bootcamp in C++, DSA and IOT MySirG
                    Recursion in C Language*/
//1. Write a recursive function to print first N natural numbers
/*#include<stdio.h>
void natural(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    natural(number);
    return 0;
}

void natural( int n)
{
    if(n>0)
    {
        natural(n-1);
        printf("%d",n);
    }
}*/

//2. Write a recursive function to print first N natural numbers in reverse order

/*#include<stdio.h>
void natural(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    natural(number);
    return 0;
}

void natural( int n)
{
    if(n>0)
    {
        printf("%d",n);
        natural(n-1);
      
    }
}*/

//3. Write a recursive function to print first N odd natural numbers

/*#include<stdio.h>
void odd(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    odd(number);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        printf("%d \n",2*n-1);
    }
}*/

//4. Write a recursive function to print first N odd natural numbers
 //in reverse order
/*#include<stdio.h>
void odd(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    odd(number);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        printf("%d \n",2*n-1);
        odd(n-1);
    }
}*/

//5. Write a recursive function to print first N even natural numbers
/*#include<stdio.h>
void even(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    even(number);
    return 0;
}
void even(int n)
{
    if(n==0)
    {
        return;
    }
    even(n-1);
    printf("%d \n",2*n);
}*/

//6. Write a recursive function to print first N 
//even natural numbers in reverse order

/*#include<stdio.h>
void even_r(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    even_r(number);
    return 0;
}
void even_r(int n)
{
    if(n>0)
    {
        printf("%d \n",2*n);
        even_r(n-1);
    }
}*/

//7. Write a recursive function to print squares of first N natural numbers
/*#include<stdio.h>
void squre(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    squre(number);
    return 0;
}
void squre(int n)
{
    if(n>0)
    {
        squre(n-1);
        printf("%d ",n*n);
    }
}*/

//8. Write a recursive function to print binary of a given decimal number

/*#include<stdio.h>
void binary(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    binary(number);
    return 0;
}
/*void binary(int n)
{
    if(n)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}

void binary(int n)
{
    if(n>1)
    {
        binary(n>>1);
    }
    printf("%d",n&1);
}*/
//9. Write a recursive function to print octal of a given decimal number

/*#include<stdio.h>
void octal(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    octal(number);
    return 0;
}
void octal(int n)
{
    if(n)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}*/

//10. Write a recursive function to print reverse of a given number

/*#include<stdio.h>
void reverce(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    reverce(number);
    return 0;
}
void reverce(int n)
{
        
        if(n==0)
        {
           return ; 
        }
        printf("%d",n%10);
        reverce(n/10);
}*/

/*int sum=0,rem,c=0;
void reverce(int n)
{
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        reverce(n/10);
    }
    else
    {
    printf("%d",sum);
    }
}*/
