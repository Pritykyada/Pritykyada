/*Assignment - 22 A Job Ready Bootcamp in C++, DSA and IOT MySirG

DMA*/


/*1. Define a function to input variable length string and store it in an array without
memory wastage.*/
/*void input();
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    input();   
}
void input()
{
    char *p;
    char q;
    int j=1,i;
    p=(char *)malloc(sizeof(char));
    printf("enter string");
    for(i=0;q!='\n';i++)
    {
        q=getc(stdin);
        j++;
        p=realloc(p,j*sizeof(char));//one extra block for '\n'
        p[i]=q;
    }
    p[i]='\0';
    printf("%s ",p);
    free(p);
}*/


/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
/*#include<stdlib.h>
#include<stdio.h>
int main()
{
    int * n;
    int * arr;
    float  f=0.00;
    printf("enter number fot the data value");
    n=(int*)malloc(sizeof(int));
    scanf("%d",n);
    arr=(int *)calloc(*n,sizeof(int));

    if(arr==NULL)
    {
        printf("memory allocation failed");
        return 0;
    }
    printf("enter data value\n");
    for(int i=0;i<*n;i++)
    {
        scanf("%d",arr+i);
    }
    for(int i=0;i<*n;i++)
    {
        f=f+arr[i];
    }
    printf("average is a :%.2f",f/(*n));
    free(arr);
}*/

/*3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/
/*#include<stdlib.h>
#include<stdio.h>
int  sum_number(int *,int *);
int main()
{
    int *n;
    int ans;
    int *arr;
    n=(int *)malloc(sizeof(int));
    printf("enter n nummber");
    scanf("%d",n);
    arr=(int *)malloc(*n*sizeof(int));
    ans=sum_number(arr,n);
    free(arr);
    free(n);
    printf(" sum is :%d",ans);
}
int  sum_number(int *arr,int *n)
{
    int sum=0;
     for(int i=0;i<*n;i++)
    {
        scanf("%d",arr+i);
        
    }
    for(int i=0;i<*n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}*/
//4. Write a program to input and print text using dynamic memory allocation.
/*#include<stdlib.h>
#include<stdio.h>
int main()
{
    char *arr;
    arr=(char *)calloc(1,sizeof(char));
    gets(arr);//arr considerAS VALUE
    printf("%s",arr);//arr[0],arr[1]
}*/

/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/

/*#include<stdlib.h>
#include<stdio.h>
int  sum_number(int *,int);
int main()
{
    int ans;
    int *arr;
    arr=(int *)calloc(5,sizeof(int));
    if(arr==NULL)
    {
        printf("memory allocation faild");
        return 0;
    }
    ans=sum_number(arr,5);
    free(arr);
    printf(" sum is :%d",ans);
}
int  sum_number(int *arr,int n)
{
    int sum=0;
    printf("enter number");
     for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}*/

//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * a;
    int * max;
    a=(int *)calloc(5,sizeof(int));
    printf("enter number");
    for(int i=0;i<5;i++)
    {
        scanf("%d",a+i);
    }
    max=(int *)malloc(sizeof(int));
    max=a;
    for(int i=1;i<5;i++)
    {
        if(*max<a[i])
        {
            *max=a[i];
        }
    }
    printf(" max is a :%d",*max);
}*/

//7. Write a program to demonstrate memory leak in C
/*#include<stdlib.h>
void f1();
int main()
{
    f1();
}
void f1()
{
    int *a,*b;
    a=(int *)malloc(sizeof(int));
    b=(int *)malloc(sizeof(int));
    printf("sum is a: %d",*a+*b);
}*/
/*#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int));
    ptr=NULL;
    return 0;
}*/

//8. Write a program to demonstrate dangling pointers in C.
/*#include<stdlib.h>
#include<stdio.h>
void f1();
int main()
{
    f1();
}
void f1()
{   
    int * p;
    p=(int *)malloc(sizeof(int));
    *p=10;
    printf("before free %d",*p);
    free(p);
    printf("after free %d",*p);
}*/


/*9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/
/*#include<stdlib.h>
#include<stdio.h>
int main()
{
    int * n;
    int p,memory;
    printf("enter byte");
    scanf("%d",&p);
    n=(int *)malloc(p);
    if(n==NULL)
    {
        printf("mamory allocation faild");
        return 0 ;
    }
    for(int i=0;i<(p/sizeof(int));i++)
    {
        scanf("%d",n+i);
    }
    for(int i=0;i<(p/sizeof(int));i++)
    {
        printf("%d",n[i]);
    }
}*/

/*10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/
/*#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *p,*min,*max;
    p=(int *)calloc(5,sizeof(int));
    printf("enter element");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    min=(int *)malloc(sizeof(int));
    max=(int *)malloc(sizeof(int));
    *min=p[0];
    *max=p[0];
    for(int i=1;i<5;i++)
    {
        if(*max<p[i])
        {
            *max=p[i];
        }
        else
        {
            if(*min>p[i])
            {
                 *min=p[i];
            }
        }    }
    printf("mix is a :%d",*max);
     printf("min is a:%d",*min);
}*/


















