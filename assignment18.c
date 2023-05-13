/*Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG

String and Functions in C Language*/

//1. Write a function to calculate length of the string
/*int length(char[]);
#include<string.h>
#include<stdio.h>
int main()
{
    char arr[9];
    printf("enter string");
    gets(arr);
    printf("%d",length(arr));
}
int length(char a[])
{
    int i;
    for( i=0;a[i];i++){}
    return i;
}*/
//2. Write a function to reverse a string.
/*#include<stdio.h>
#include<string.h>
void rev(char[]);
int main()
{
    char arr[9];
    printf("enter string");
    gets(arr);
   rev(arr);
}
void rev(char a[])
{
    int i;
    for( i=0;a[i];i++){}
    for(int j=i-1;j>=0;j--)
    {
        printf("%c ",a[j]);
    }
}*/
//3. Write a function to compare two strings.
/*#include<stdio.h>
#include<string.h>
void compare(char[],char[]);
int main()
{
    char arr[9],arr_2[9];
    printf("enter two string");
    scanf("%s %s",arr,arr_2);
    compare(arr,arr_2);

}
void compare(char a[],char b[])
{
    int i;
    i= strcmp(a,b);
    if(i==1)
    {
        printf("both string in oposite order");
    }
    else if(i==-1)
    {
        printf("both string dicxnary order");
    }
    else
    {
        printf("string is equal");
    }
}*/

//4. Write a function to transform string into uppercase
/*#include<stdio.h>
#include<string.h>
void upper(char[]);
int main()
{
    char arr[9];
    printf("enter string");
    fgets(arr,9,stdin);
    upper(arr);

}
void upper(char a[])
{
    for(int i=0;a[i];i++)
    {
        if(a[i]>='a'&& a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}*/

//5. Write a function to transform a string into lowercase
/*#include<stdio.h>
#include<string.h>
void lower(char[]);
int main()
{
    char arr[9];
    printf("enter string");
    fgets(arr,9,stdin);
    lower(arr);

}
void lower(char a[])
{
    for(int i=0;a[i];i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}*/
/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
/*#include<stdio.h>
#include<string.h>
void alpha_nu(char[]);
int main()
{
    char arr[9];
    printf("enter string");
    gets(arr);
    alpha_nu(arr);
}
void alpha_nu(char a[])
{
    int numeric=0,al_nume=1;
    for(int i=0;a[i];i++)
    {
         if((a[i]<='z'&& a[i]>='a')||(a[i]>='A'&& a[i]<='Z'))
            al_nume=0;
         if(a[i]>='0'&& a[i]<='9')
            numeric=1;
    }
    al_nume==0 && numeric==1?printf("alphanumeric string "):printf(" not alphanumeric string ");
}*/


//7. Write a function to check whether a given string is palindrome or not.
/*#include<stdio.h>
#include<string.h>
void peli(char[],char[]);
int main()
{
    char arr[9],arr_1[9];
    printf("enter string");
    gets(arr);
    peli(arr,arr_1);
}
void peli(char a[],char b[])
{
    int j=0;
    while(a[j])
    {
        j++;
    }
    for( i=0;a[i];i++)
    {
        b[i]=a[j-1];
        j--;
    }
    b[i]='\0';
    if(strcmp(a,b))
        printf("string is not pelidrom");
    else
        printf("string is pelidrom");

    //*******************************************
   int i=0,p=j-1,count=0;
    while(i<=p)
    {
        if(a[i]!=a[p])
        {
            break;
        }
        p--;
        i++;
    }
    printf("%d ",p);
     printf("%d ",i);

    if(i>p)
        printf("string is pelidrome");
    else
        printf("string is not  pelidrome");
}*/

//8. Write a function to count words in a given string
/*#include<stdio.h>
#include<string.h>
int word(char[]);
int main()
{
    char arr[9];
    printf("enter string");
    fgets(arr,9,stdin);
    word(arr);
}
int word(char a[])
{
    int count=1;
    for(int j=0; a[j];j++)
    {
        if(a[j]==' ' && a[j+1]==' ')
            count++;
    }
    printf(" the words in a given string %d",count);
}*/

/*9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” ) */
/*#include<stdio.h>
#include<string.h>
void swap(char[],int ,int);
void rev(char[]);
int main()
{
    char arr[100];
   printf("enter string");
    gets(arr);
    rev(arr);
}
void rev( char a[])
{
    int star=0,end=0,i=0,flog=0;
    while(a[i])
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                flog=1;
                break;
            }
                end++;
                i++;
        }
        swap(a,star,end-1);

        if(flog==1)
        {
            break;
        }
        star=++end;
        i++;
    }
    swap(a,0,i-1);
    printf("%s",a);
    int count=0, array[100],i;
    array[0]=0;
    for( i=0;a[i];i++)
    {
        if(a[i]==' ')
        {
            count++;
            array[count]=i+1;
            a[i]='\0';
        }
    }
    int k=0;
    for(int p=count;p>=0;p--)
    {
        for(int c=array[p];a[c];c++)
        {
            b[k]=a[c];
            k++;       
        }
        if(i==k)
        {
            b[k]='\0';
            break;
        }
        b[k]=' ';
        k++;
    }
    for(int p=0;b[p];p++)
    {
        printf("%c",b[p]);
    }
    int i,p=0;
    for(i=0;a[i];i++)
    {
        while(a[i]==' ')
        {   
            b[i]=a[i];
        }
    }
}

void swap(char b[],int start_one,int end_one)
{
     while(start_one<end_one)
        {
            char temp=b[end_one];
            b[end_one]=b[start_one];
            b[start_one]=temp;
            start_one++;
            end_one--;
        }
}*/
//10. Write a function to find the repeated character in a given string.
/*#include<stdio.h>
#include<string.h>
void rev(char[]);
int main()
{
    char arr[10];
    printf("enter string");
    gets(arr);
    rev(arr);
}
void rev(char arr[])
{
     int count=0,i;
     for( i=0;arr[i];i++){}
     for(int j=0;j<i-1;j++)
     {
        for(int k=j+1;arr[k];k++)
        {
            if(arr[j]==arr[k])
            {
                count++;
                break;
            }
        }
     }
     printf(" repeated character %d",count);
}*/


