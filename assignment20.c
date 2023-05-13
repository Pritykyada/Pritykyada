/*Assignment - 20 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Pointers*/

//1. Write a function to swap values of two in variables of calling function. (TSRS)
/*#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d=a,%d=b",a,b);
}
void swap(int * p,int * q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}*/

//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

/*void swap(char **,char **);
#include<stdio.h>
#include<string.h>
int main()
{
    //char a[]="gghjhj";
    //char *i="dfgvg";

    char * str_1[10],*str_2[10];
    printf("Enter two string");
    gets(str_1);
    gets(str_2);
    swap(str_1,str_2);
    printf(" string is a :%s %s",str_1,str_2);
}
void swap(char **p,char **q)
{
   char *a;
   a=*p;
   *p=*q;//address of str
   *q=a;
}*/

//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
/*#include<stdio.h>
void sort(int * ,int);
int main()
{
    int a[5];
    sort(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
void sort(int * ptr,int size)
{
    printf("enter %d number",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("%d",ptr[0]);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(*(ptr+i)>ptr[j])
            {
                int a;
                a=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=a;
            }
        }
    }
}*/



//4. Write a program in C to demonstrate how to handle the pointers in the program.
/*#include<stdio.h>
int main()
{

    int x=10,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;

    printf("%d %d %d %d \n",x,*p,**q,***r);
    printf("%d %d %d \n",&x,p,*q,**r);
    printf("%d %d %d \n",&p,q,*r);
    printf("%d",&r);
    return 0;
}*/



//5. Write a program to find the maximum number between two numbers using a pointer
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int max;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    max=abs(*p-*q);
    printf("maximum number is a %d",max-1);
}*/


//6. Write a program to calculate the length of the string using a pointer
/*#include<stdio.h>
int main()
{
    char a[10];
    int i;
    printf("enter string");
    gets(a);
    char *p=a;
    for(i=0;p[i];i++)
    {
    }
    printf("%d",i);
}*/

/*7. Write a program to count the number of vowels and consonants in a string using a
pointer.*/

/*#include<stdio.h>
int main()
{
    char a[10];
    int i;
    printf("enter string");
    gets(a);
    int vowel=0,consonants=0;
    char *p=a;
    for(i=0;p[i];i++)
    {
        if(p[i]=='a'||p[i]=='e' ||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
                vowel++;
        else
            consonants++;
    }
    printf("vowel is a :%d",vowel);
    printf("consonants is a:%d",consonants);
}*/

//8. Write a program to compute the sum of all elements in an array using pointers.
/*#include<stdio.h>
int main()
{
    int a[5];
    int *p=a;
    int sum=0;
    printf("%d",p);
    printf("Enter 5 element");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
   
    for(int i=0;i<5;i++)
    {
        sum=sum+p[i];
    }
    printf(" sum is :%d",sum);
}*/


/*9. Write a program to print the elements of an array in reverse order.*/
/*#include<stdio.h>
int main()
{
    int a[5];
    int *p=a;
    int j=5-1;
    printf("Enter 5 element");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<=5/2;i++)
    {
        if(i<j)
        {
            int k;
            k=p[j];
            p[j]=p[i];
            p[i]=k;
            j--;
        }
    }
     for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}*/

//10. Write a program to print a string in reverse using a pointer*/
/*#include<stdio.h>
int main()
{
    char a[10];
    char *p=a;
    int j,h;
    printf("Enter string");
    gets(p);
    for(h=0;p[h];h++)
    {
    }
    j=h-1;
    for(int i=0;i<=j/2;i++)
    {
        if(i<j)
        {
            char k;
            k=p[j];
            p[j]=p[i];
            p[i]=k;
            j--;
        }
    }
    printf("%s",a);
}*/
