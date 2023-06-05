/*Assignment – 30 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Exception Handling

1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
/*#include<iostream>
using namespace std;
class demo
{
    public:
  void process(int age)  
 {   try
    {
        if(age>100)
        {
            throw 1;
        }
        if(age<18)
        {
            throw "you are not aligible for votting";
        }
        cout<<"you are alligible for vote\n";
    }
    catch( const char * p)
    {
        cout<<p;
    }
    catch(int a)
    {
        cout<<"invalid age\n";
    }
}

};
int main()
{
    demo d;
    int age;
    cout<<"Enter age : ";
    cin>>age;
    d.process(age);
    return 0;
}*/


/*2. Write a C++ program to demonstrate try, throw and catch statements.*/
/*#include<iostream>
using namespace std;
int main()
{
    int a=-23;
    try
    {
        if(a<0)
        {
             throw exception();
        }
        cout<<"valid integer number";
    }
    catch(...)
    {
        cout<<"exception occur";
    }
}*/

/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
/*#include<iostream>             //cout<<"--------------------------";
using namespace std;
int main()
{
    float num,num2,ans;
    char Operator;
    cout<<"\nperform arithmetic operation on two number\n";
    cout<<"================================="; 
    try
    {
        cout<<"\nEnter first number";
        cin>>num;
        if(num==0)
            throw 0;
        cout<<"\nEnter operator";
        cin>>Operator;
        if(Operator!='+'&&Operator!='-'&& Operator!='/'&&Operator!='*')
            throw Operator;
        cout<<"\nEnter second number";
        cin>>num2;
        cout<<"\n==========================\n";
        switch (Operator)
        {
        case '+':
            ans=num+num2;
            break;
        case '-':
            ans=num-num2;
            break;
        case '/':
            if(num2==0)
            {
                throw 0;
            }
            ans=num/num2;
            break;
        case '*':
            ans=num*num2;
            break;
        default:

            break;
        }
        cout<<"answer is a "<<num<<Operator<<num2 <<"="<<ans;
    }
    catch(int )
    {
        cout<<"\nnumber is a zero";
    }
    catch(char a)
    {
        cout<<"\noperator is not add ";
    }
    cout<<"program end \n";
    return 0;
}*/
/*4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.*/

/*#include<iostream>
using namespace std;
#include<string.h>
bool isvalidEmail(char * email)
{
    int aetTHErate=-1;
    int dot=-1,i,length=0;
    for( i=0;email[i];i++)
    {
        if(email[i]=='@')
        {
            aetTHErate=i;
        }
        else if(email[i]=='.')
        {
                dot=i;
                cout<<"dot"<<i;
        }   
        length++;
    }
    cout<<length;
    if(aetTHErate==-1||dot==-1)
    {
        return 0;
    }
    if(aetTHErate>dot){return 0;}
    return!(dot>=(i-1));
};
int main()
{
   
    char email[100];
    cout<<"Enter email address:";
    cin.getline(email,100);
    try
    {
         if(isvalidEmail(email))
        {
            cout<<"valid email address";
        }
        else 
        {
            throw 'c';
        }
    }
    catch(char)
    {
        cout<<"exception occure......."<<endl<<"your email id is invalid";
    }
}*/
/*5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
/*#include<string.h>
#include<iostream>
using namespace std;
bool isVALIDphone(char * phone)
{
    int i,len=0;
    for(i=0;phone[i];i++)
    {
        if(phone[i]==' ')
        {
            continue;
        }
        if((phone[i]>='0'&& phone[i]<='9'))
        {
            len++;
        }
        else
        {
            return 0;
        }
    }
    if(len==10)
    {
        return 1;
    }
}
int main()
{
    char  phone_no[12];
    cout<<"Enter phone_no number  :  ";
    cin.getline(phone_no,12);
     try
    {
        if(isVALIDphone(phone_no))
        {
             cout<<"valid phone_no number";
        }
       else
       {
            throw 'c';
       }
    }
    catch(char p)
    {
            cout<<"exception occure....."<<endl<<"Invalid phone number";
    }
}*/
/*6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/
/*#include<string.h>
#include<iostream>
using namespace std;
bool isvalidPIN(char *pin)
{
    int i,length=0;
    for(i=0;pin[i];i++)
    {
        if(pin[i]>='0' && pin[i]<='9')
        {
            length++;
        }
        else
        {
            return 0;
        }
    }
    if(length==6)
    {
        return 1;
    }
}
int main()
{
    char  pin[10];
    cout<<"Enter pin number  :  ";
    cin.getline(pin,10);
     try
    {
        if(isvalidPIN(pin))
        {
            cout<<"valid pin number";
        }
       else
       {
            throw 'p';
       }
    }
    catch( char p)
    {
            cout<<"exception occure........"<<endl<<"invalid phone number";
    }
}*/
/*7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*///meaning check
/*#include<string.h>
#include<iostream>
using namespace std;
bool isVALIDusername(char *p)
{
    int i,len=0;
    for(i=0;p[i];i++)
    {
        if(p[i])
        {
            if(p[i]>=33 && p[i]<=40)
            {
                return 0;
            }
            len++;
        }
    }
    return(len>=6);
}
int main()
{
    char name[50];
    cout<<"Enter username : ";
    cin.getline(name,50);
    cout<<name;
    try
    {
        if(isVALIDusername(name))
        {
            cout<<"valid username\n";
        }
        else
        {
            throw 'c';
        }
        
    }
    catch( char  s)
    {
        cout<<"Exception occure......."<<endl<<"Invalid username";
    }
    return 0;
}*/

/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any specialcharacter or
 does not contain any capital letter.*/
/*#include<iostream>
#include<ctype.h>
using namespace std;
#include<string.h>
int main()
{
    char pass[20];
    cout<<"Enter password";
    cin.getline(pass,20);
    try{
        if(strlen(pass)<6)
        {
            cout<<"password sholud be 6 charcter long"<<endl;
            throw 'c';
        }
        bool digit_yes=false;
        for(int k=0;pass[k];k++)
        {
            if(isdigit(pass[k]))
                digit_yes=true;
        }
        if(!digit_yes)
        {
            cout<<"\n password must have at least one digit"<<endl;
            throw 'c';
        }
        else
        {
            cout<<"password is correct";
        }
    }
    catch( char  p)
    {
        cout<<"Invalid password formate"<<endl;
    }
    catch(...)
    {
        cout<<"Invalid password\n";
    }
}*/

/*9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/
#include<iostream>
using namespace std;
#include<string.h>
class A
{
    public:
    void ex()
    {
       cout<<"invalid email address";
    }
};
int main()
{
    A a;
    char email[30];
    cout<<"Enter email address:";
    cin>>email;
    try
    {
         if(!strstr(email,"gmail.com"))
        {
            throw a;
        }
        if(!strchr(email,'@'))
        {
            throw a;
        }
        cout<<"valid email address";
    }
    catch(A)//declare type
    {
        a.ex();
    }
}
/*10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/

/*#include<string.h>
#include<iostream>
using namespace std;
bool isValidformate(char * name)
{
    int i;
    bool ans=true;
   for(i=0;name[i];i++)
   {
        if(name[i]>=32&&name[i]<=64)
            ans=false;
   } 
   return ans;
}
int main()
{
    char name[20];
    cout<<"Enter Nickname : ";
    cin.getline(name,20);
    try
    {
        if((strlen(name))>8)
        {
            cout<<"Nick name should be only 8 charcter long";
            throw 'c';
        }
        if(isValidformate(name))
        {
            cout<<"valid username";
        }
        else
        {
            throw 'c';
        }
    }
    catch( char  s)
    {
       cout<<"\nInvalid formate";
    }
    catch(...)
    {
        cout<<"Invalid username";
    }
}*/