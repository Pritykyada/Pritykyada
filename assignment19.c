/*Assignment - 19 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Handling multiple Strings in C Language*/

/*1. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    printf("Enter string");

    for(int i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(int k=0;k<5;k++)
    {
        
        int vowel=0;
        for(int j=0;str[k][j];j++)
        {
            if(str[k][j]=='a'|| str[k][j]=='e'|| str[k][j]=='i'|| str[k][j]=='o'|| str[k][j]=='u'|| str[k][j]=='A'|| str[k][j]=='E'|| str[k][j]=='I'|| str[k][j]=='O'|| str[k][j]=='U')
            {
                vowel++;
            }
        }
        printf("%s vowel is %d \n",str[k],vowel);
    }
}*/


/*2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10],b[10];
    printf("Enter string\n");
    for(int i=0;i<5;i++)
        gets(str[i]);
    for(int k=0;k<5-1;k++)
    {
        for(int j=k+1;j<5;j++)
        {
            if(strcmp(str[k],str[j])>0)
            {
                strcpy(b,str[j]);
               strcpy(str[j],str[k]);
               strcpy(str[k],b);
            } 
        }
    }
    for(int k=0;k<5;k++)
        printf("%s ",str[k]);     
}*/

//3. Write a program to read and display a 2D array of strings in C language.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    printf("Enter  5 string");
    for(int i=0;i<5;i++)
    {
        gets(str[i]);
    }
    printf("*************************\n");
    for(int k=0;k<5;k++)
    {
        printf("%s \n",str[k]);
    }
}*/


//4. Write a program to search a string in the list of strings.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10],serch[10];
    printf("Enter  5 string");
    for(int i=0;i<5;i++)
    {
        gets(str[i]);
    }
    int flog=0;
    printf("Enter string four searching:");
  gets(serch);
     for(int j=0;j<5;j++)
    {
        if(strcmp(str[j],serch)==0)
        {
             flog=1;
             break;
        }
    }
    if(flog)
        printf("string  present in the string");
    else
         printf("string not present in the string");
}*/

/*5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30];
    printf("Enter  5 email address");
    for(int i=0;i<5;i++)
    {
       fgets(str[i],30,stdin);
    }
   
     for(int j=0;j<5;j++)
    {
        if(!strchr(str[j],'@'))
        {
                printf("%s \n",str[j]);
        }
        /*int flog=0;
        for(int p=0;str[j][p];p++)
        {
            if(str[j][p]=='@')
            {
                flog=1;
                break;
            }
        }
        if(flog==0)
            printf(" odd email out: %s \n",str[j]);
    }
}*/
//6. Write a program to print the strings which are palindrome in the list of strings.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30],str_rev[5][30];
    printf("Enter  5 string");
    for(int i=0;i<5;i++)
    {
       gets(str[i]);
    }
    int p,j;
    for(int i=0;i<5;i++)
    {
        int len=strlen(str[i]);
        p=0,j=len-1;
        while(p<j)
        {
            if(str[i][p]!=str[i][j])
            {
                break;
            }
            j--;
            p++;
        } 
        if(p>j)
        {
            printf("pelindrom string is a :%s\n ",str[i]);
        }
    }
    /*for(int i=0;i<5;i++)
    {
        strcpy(str_rev[i],str[i]);
        strrev(str[i]);
    }
    for(int j=0;j<5;j++)
    {
        if((strcmp(str[j],str_rev[j]))==0)
        {
            printf("pelindrome string is a :%s ",str_rev[j]);
        }
    }


}*/

//7. From the list of IP addresses, check whether all ip addresses are valid.
/*#include<stdio.h>
#include<string.h>
int atoi(char[]);
int main()
{
   
    char address[5][30]={"234.45.56.67","456.67.78","23.45.56.67","344.67.7778","45.67.78.78"};
    char temp[5][30];
    for(int i=0;i<5;i++)
    {
        strcpy(temp[i],address[i]);
         int result=0;
        char *a =strtok(address[i],".");
        while (a)
        {
            int  x=atoi(a);
            if((x>=0) && (x<=255))
            {
                result++;
            }
            a=strtok(NULL,".");
        }
        if(result==4)
        {
            printf("%s \n",temp[i]);
        }
        
    }
}*/



/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )*/
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char arr[5][20];
    char word1[20],word2[20];
    printf("enter 5 words");
    for(int i=0;i<5;i++)
    {
        gets(arr[i]);
    }
    printf("************************************");
    printf("enter two words");
    scanf("%s %s",word1,word2);
    int w1=-1,w2=-1,min=10000,temp;
    for(int j=0;j<5;j++)
    {
        if(strcmp(arr[j],word1)==0)
        {
            w1=j;
        }
        if(strcmp(arr[j],word2)==0)
        {
            w2=j;
        }

    }
    temp=abs(w2-w1);
    printf("%d",min);
    printf("minimum distinct is a %d",min-1);
}*/

/*9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/


/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[7][20]={"pritee","vruti","priyanka","ahlya","sweni","srushti","drshti"};
    char str_2[20];
    int flog=0;
    printf("enter username");
    scanf("%s",str_2);
    for(int i=0;i<7;i++)
    {
        if((strcmp(str[i],str_2))==0)
        {
            flog=1;
            break;
        }
    }
    if(flog==1)
        printf("yes,you can calculate factorial of number");
    else
         printf("pleace check your username");
}*/

//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    char user[20];
    char pas[20];
    int flog=0;

    char str[4][2][20]={
        {"pritee","3250"},
        {"vruti","3445"},
        {"priyanka","5664"},
        {"ahlya","5675"}
    };

    printf("enter username");
    gets(user);
    printf("enter password");
   gets(pas);
    for(int i=0;i<4;i++)
    {
        if(strcmp(str[i][0],user)==0 && strcmp(str[i][1],pas)==0)
        {
            printf("login successfully");
            flog=1;
        }
    }
    if(flog==0)
    {
        printf("please check your username and password");
    }
}
















