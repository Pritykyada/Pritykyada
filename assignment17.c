/*Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG

String Basics in C Language*/

//1. Write a program to calculate the length of the string. (without using built-in method)
/*#include<stdio.h>
#include<string.h>
int main()
{
    //for dianamic
    char a[10];
    printf("enter string");
    //fgets(a,10,stdin);
    //gets(a);
    //printf(" length is a :%d",printf("%s",a));
}*/

/*int main()
{
    //for stable
    char a[10]={'p','r','i','t','e','e'};
    printf(" length is a :%d",printf("%s",a));
}*/


//2. Write a program to count the occurrence of a given character in a given string.
/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10],charc;
    int count=0;
    printf("enter string: ");
    fgets(a,10,stdin);
    printf("enter charcter :");
    scanf("%c",&charc);
    for(int i=0;a[i];i++)
    {
        if(a[i]==charc)
           count++; 
    }
    printf("occurrence of a given character %d time",count);
}*/

//3. Write a program to count vowels in a given string
/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10];
    int count=0;
    printf("enter string: ");
    fgets(a,10,stdin);
    for(int i=0;a[i];i++)
    {
        if(a[i]=='A' ||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            count++;
    }
    printf(" Total number of vowels is a :%d ",count);
}*/

//4. Write a program to convert a given string into uppercase
/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10];
    printf("enter string: ");
    fgets(a,10,stdin);
    for(int i=0;a[i];i++)
    {
        if(a[i]>='a'&& a[i]<=120)
            a[i]=a[i]-32;
    }
    printf("%s",a);
}*/
//5. Write a program to convert a given string into lowercase

/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10];
    printf("enter string: ");
    fgets(a,10,stdin);
    for(int i=0;a[i];i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
            a[i]=a[i]+32;
    }
    printf("%s",a);
}*/

//6. Write a program to reverse a string.
/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10],temp[10];
    int b=0,k=0;
    printf("enter string: ");
    gets(a);
    b=printf("%s",a);
    for(int i=0;i<=b/2;i++)
    {
        if(i<b-1)
        {
            char c=a[b-1];
            a[b-1]=a[i];
            a[i]=c;
            b--;
        }
    }
    /*for(int i=b-1;i>=0;i--)
    {
        temp[k]=a[i];
        k++;
    }
    temp[k]='\0';
    strcpy(a,temp);
    printf(" reverce string is a %s",a);
         
}*/

/*7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10];
    int alphabet=0,digit=0,sp_char=0;
    int b=0;
    printf("enter string: ");
    gets(a);
    for(int i=0;a[i];i++)
    {
        if((a[i]>='a' &&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
            alphabet++;
        else if (a[i]>='0' && a[i]<='9')
            digit++;
        else
            sp_char++;
    }
    printf("alphabet is a %d\n",alphabet);
    printf("digit is a %d\n",digit);
    printf("apecial charcter is a  %d",sp_char);
}*/

//8. Write a program in C to copy one string to another string.
/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10],b[10];
    printf("enter string: ");
    fgets(a,10,stdin);
    for(int i=0;a[i];i++)
    { 
        b[i]=a[i];
    }
   printf("%s",b);
}*/




//9. Write a C program to sort a string array in ascending order.
/*#include<string.h>
#include<stdio.h>
int main()
{
    //for dianamic
    char a[10];
    int b=0;
    printf("enter string: ");
    gets(a);
     b=printf("%s",a);
    /*for(int i=0;i<b-1;i++)
    { 
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }  
        }
    }      
    printf("   %s",a);
}*/
/*10. Write a program in C to Find the Frequency of Characters.*/
#include<stdio.h>
int main()
{
    char arr[30];
    int store[123]={0};
    printf("enter string :");
    gets(arr);
    for(int i=0;arr[i];i++)
    {
        store[arr[i]]++;
    }
    for(int i=0;i<123;i++)
    {
        if(store[i]!=0)
        printf("frequency of charcter %c : %d\n",i,store[i]);
    }

    /***************************************************/
   /* printf("enter string :");
    gets(arr);
    for(int i=0;arr[i];i++)
    {
        int count=1;
        for(int j=0;arr[j];j++)
        {
            if(i==j)
                continue;
            if(arr[i]==arr[j])
                count++;
        }
        printf("frequency of charcetr %c : %d \n",arr[i],count);
    }*/
}




















