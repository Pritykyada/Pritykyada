/*- 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG
Array in C Language*/

/*1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user*/
/*#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum of the array is a %d",sum);
}*/
/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum of the array is a %.2f",sum/10.0);
}*/

/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user*/


/*#include<stdio.h>
int main()
{
    int a[10],sum_odd=0,sum_even=0;
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]&1)
        {
                sum_odd=sum_odd+a[i];
        }
        else
        {
                sum_even=sum_even+a[i];
        }
    }
    printf("sum of all odd number is a %d \n",sum_odd);
    printf("sum of all even number is a %d \n",sum_even);
}*/
/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],max;
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=-1;
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
         max=a[i];   
        }
    }
    printf("max is a:%d",max);
}*/
/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],min;
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=-1;
    for(int i=0;i<10;i++)
    {
        if(a[i]<min)
        {
         min=a[i];   
        }
    }
    printf("max is a:%d",min);
}*/

/*6. Write a program to sort elements of an array of size 10. Take array values from the
user.*/
/*#include<stdio.h>
int main()
{
    int a[10];
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
            }
        }
    }
    printf("sort array element is a :");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
    }
}*/

//7. Write a program to find second largest in an array.Take array values from the use
/*#include<stdio.h>
int main()
{
    int a[10],second_l;
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     /*for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<2;j++)
        {
            if(a[i]<a[j])
            {
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
            }
        }
    }

int large=a[0];
int se_large=0;
    for(int p=1;p<10;p++)

    {
        if(large<a[p])
        {
            se_large=large;
            large=a[p];
        }
        else
        {
            if((se_large<a[p]))
            {
                se_large=a[p];
            }
        }
    }

    printf("large element is a %d \n",large);
    printf("second large element is a %d",se_large);
}*/
/*8. Write a program to find the second smallest number in an array.Take array values
from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10];
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     /*for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int b=a[j];
                a[j]=a[i];
                a[i]=b;
            }
        }
    }
    printf("second large element is a %d",a[1]);

    int small=a[0];
    int se_small=-1;
    for(int i=1;i<10;i++)
    {
        if(small>a[i])
        {
            se_small=small;
            small=a[i];
        }
        else{
            if(se_small>a[i] || se_small==-1)
            {
                se_small=a[i];
            }
        }
    }
    printf("second small element is a %d",se_small);
}*/

/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
/*#include<stdio.h>
int main()
{
    int n;
   
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("\nenter %d of element",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
       printf("%d  ",a[i]);
    }
}*/

/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
/*#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("enter 10 number:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<10;i++)
    {
        printf(" %d ",b[i]);
    }  
}*/



































