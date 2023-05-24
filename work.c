#include<stdio.h>
#include<conio.h>
int main()
{
   
    switch ( getch())
    {
    case 40 :
        printf("enter char cter");
        break;
    
    default:
        break;
    }

}
/*int serij(int);
int fact(int );

int main()
{

    int n;
    printf("enter number");
    scanf("%d",&n);
   printf("%d",serij(n));

}
int fact(int b)
{
    int fact=1;
    for (int i=1;i<=b;i++)
    {
        fact=fact*i;
    }
    return fact;

}

int serij(int c)
{
    int sum=0;
    for(int  i=1;i<=c;i++)
    {
        sum=sum+(fact(i)/i);
           
    }
    return sum;



}*/