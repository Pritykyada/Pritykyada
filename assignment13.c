       /* Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
                More on Recursion in C Language*/
//1. Write a recursive function to calculate sum of first N natural numbers

/*#include<stdio.h>
int sum_natural(int );
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    printf(" sum of natural number is %d",sum_natural(number));
    return 0;
}
int sum_natural(int n)
{
       if(n>1)
              return  n+sum_natural(n-1);     
}*/

//2. Write a recursive function to calculate sum of first N odd natural numbers
/*#include<stdio.h>
int sum_odd(int);
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    printf(" sum of  odd natural number is : %d",sum_odd(number));
    return 0;
}
int sum_odd(int n)
{
       if(n>1)
              return 2*n-1+sum_odd(n-1);
}*/

//3. Write a recursive function to calculate sum of first N even natural numbers
/*#include<stdio.h>
int sum_even(int);
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    printf(" sum of even  natural number is : %d",sum_even(number));
    return 0;
}
int sum_even(int n)
{
       if(n>0)
              return 2*n+sum_even(n-1);      
}*/

//4. Write a recursive function to calculate 
//sum of squares of first n natural numbers
/*#include<stdio.h>
int square(int );
int main()
{
       int number;
       printf("enter number");
       scanf("%d",&number);
       printf("square of n natural number is :%d",square(number));
       return 0;
}
int square(int n)
{
       if(n>1)
       {
              return n*n+square(n-1);
       }
}*/

//5. Write a recursive function to calculate sum of digits of a given number

/*#include<stdio.h>
int digit(int );
int main()
{
       int number;
       printf("enter number");
       scanf("%d",&number);
       printf("sum of  digits of a given number:%d",digit(number));
       return 0;
}
int digit(int n)
{
       if(n>0)
              return n%10 +digit(n/10);            
}*/

//6. Write a recursive function to calculate factorial of a given number
/*#include<stdio.h>
int factorial(int);
int main()
{
       int number;
       printf("enter number");
       scanf("%d",&number);
       printf("factorial of number is :%d",factorial(number));
       return 0;
}
int factorial(int n)
{
       if(n==0)
              return 1;
       if(n>1)
              return n*factorial(n-1);
}*/
//7. Write a recursive function to calculate HCF of two numbers
/*#include<stdio.h>
int hcf(int,int);
int main()
{
       int number_1,number_2;
       printf("enter number_1:");
       scanf("%d",&number_1);
       printf("enter number_2:");
       scanf("%d",&number_2);
       printf("HCF of a two number is a :%d",hcf(number_1,number_2));
}
int hcf(int a, int b)
{
       /*if(a==0)
       {
              return b;
       }
       return hcf(b%a,a);
       if(a==0)
       {
              return b ;
       }
       if(a>b)
       {
              hcf(a%b,b);
       }
       else{
              hcf(b%a,a);
       }
}*/


//8. Write a recursive function to print first N terms of Fibonacci series

/*#include<stdio.h>
int fibbo(int);
int main()
{
       int number;
       printf("enter how many fibbonacci series you want to see");
       scanf("%d",&number);
       for (int i=1;i<=number;i++)
              printf("%d ",fibbo(i));
       return 0;
}
int  fibbo(int n)
{
       if(n==1||n==2)
              return 1;
       return fibbo(n-1)+fibbo(n-2);
}*/
//9. Write a program in C to count the digits of a given number using recursion.

/*#include<stdio.h>
int digit(int );
int main()
{
       int number;
       printf("enter number");
       scanf("%d",&number);
       printf("The digits of a given number  :%d",digit(number));
       return 0;
}
int c=0;
int digit(int n)
{
       if(n)
       {
              c++;
              digit(n/10);
       }
       return c;
}*/
//10. Write a program in C to calculate the power of any number using recursion

/*/#include<stdio.h>
int power(int,int );
int main()
{
       int number,power_no;
       printf("enter number");
       scanf("%d",&number);
       printf("enter number for power");
       scanf("%d",&power_no);
       printf("power of a given number is a %d",power(number,power_no));
       return 0;
}
int power(int b,int p)
{
       if(p==0)
       {
              return 1;
       }
       return b*power(b,(p-1));
}*/