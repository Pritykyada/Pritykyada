/*Assignment - 9 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Switch Case Problems

1. Write a program which takes the month number as an input and display
number of days in that month.*/
/*#include<stdio.h>
int main()
{
    int month,input;
    /*printf("enter month :");
    scanf("%d",&month);
    printf("How many time you take input from user");
    scanf("%d",&input);

    for(int i=1;i<=input;i++)
    {
        printf("\nenter month :");
        scanf("%d",&month);
        switch (month)
        {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("The day of in that month are: 31");
        break;
    case 2:
        printf("The day of in that month are : 28");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("The day of in that month are : 30");
        break;
    default:
        printf("Invalid month");
    }
    }
    return 0;
}*/

/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no_1,no_2,choice;
    while(1)
    {
        printf("\n 1.Addition");
        printf("\n 2.Subtraction");
        printf("\n 3.Multiplication");
        printf("\n 4.Division");
        printf("\n 5.Exit");

        printf("Enter your choice");
        scanf("%d",&choice);

          
        switch (choice)
        {
        case 1:
            printf("Enter two number");
            scanf("%d %d",&no_1,&no_2);
            printf("The Addition  of two numbers are :%d",no_1+no_2);
            break;
        case 2:
            printf("Enter two number");
            scanf("%d %d",&no_1,&no_2);
            printf("The Subtraction of two numbers are :%d",no_1-no_2);
            break;
        case 3:
            printf("Enter two number");
            scanf("%d %d",&no_1,&no_2);
            printf("The Product of two numbers are :%d",no_1*no_2);
            break;
        case 4:
            printf("Enter two number");
            scanf("%d %d",&no_1,&no_2);
            printf("The Quotient of two numbers are :%d",no_1/no_2);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
    }
}*/

/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day,i,choise;

    printf("HOw many time you want to repeat");
    scanf("%d",&choise);
 
    for(i=1;i<=choise;i++)
    {
        printf("\nEnter day number of week");
        scanf("%d",&day);
        switch (day)
        {
        case 1:
            printf("Happy Sunday");
            break;
        
        case 2:
            printf("Have a Fabulous Monday");
            break;

        case 3:
            printf("Good Moring...Have a wonderful Tuesday");
            break;

        case 4:
            printf("Happy and Blessed Wednesday");
            break;
            
        case 5:
            printf("Thankful Thursday");
            break;

        case 6:
            printf("I hope this Friday becomes the best friday for you");
            break;

        case 7:
            printf("good morning ...Have a beautiful saturday");
            break;

        default:
            printf("Invalid day ");
            exit(0);
        }
    }
}*/




/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

/*#include<stdio.h>
int main()
{

    printf("1.isosceles tringle");
    printf("\n2.right angled  tringle");
    printf("\n3.equilateral tringle");
    printf("\n4.Exit");

    int side1,side2,side3,choice;

    printf("\nenter choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nenter first side:");
            scanf("%d",&side1);

            printf("\nenter second side:");
            scanf("%d",&side2);

            printf("\n enter third side:");
            scanf("%d",&side3);

            if(side1==side2||side2==side3||side1==side3)
            {
                printf("isosceles tringle");
            }
            else
                printf(" not isosceles tringle");
            break;

        case 2:

            printf("\nenter first side:");
            scanf("%d",&side1);

            printf("\nenter second side:");
            scanf("%d",&side2);

            printf("\n enter third side:");
            scanf("%d",&side3);

            if((side1*side1+side2*side2==side3*side3)||(side1*side1+side3*side3==side2*side2)||(side2*side2+side3*side3==side1*side1))
            {
                printf("right angled  tringle");
            }
            else
            {
                printf(" not right  angled tringle");
            }
            break;

        case 3:
             printf("\nenter first side:");
            scanf("%d",&side1);

            printf("\nenter second side:");
            scanf("%d",&side2);

            printf("\n enter third side:");
            scanf("%d",&side3);

            if(side1==side2&& side2==side3)
            {
                printf("equilateral tringle");
            }
            else
            {
                 printf("not equilateral tringle");
            }
            break;

        default:
            printf("invalid choice");
            break;

        case 4:
            printf("exit");
           
    }
    return 0;
}*/

/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/

/*#include<stdio.h>
int main()
{
    int choice;
    printf("Enter choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("good");
            break;

        case 2:
            printf("better");
            break;

        case 3:
            printf("best");
            break;

        default:
            printf("invalid choice");
    }
}*/

/*6. Program to check whether a year is a leap year or not. Using switch
statement*/

/*#include<stdio.h>
int main()
{
    int year,rem;
    printf("enter year");
    scanf("%d",&year);

   /* switch(year%400==0||year %4==0 && year%100 !=0)
    {
        case 1:
            printf("leap year");
            break;

        case 0:
            printf("not leap year");
    }
    return 0;
    switch (year%100!=0)
    {
    case 1:
    {
            switch ( year %4==0)
            {
                case 1:
                    {
                    printf("year is leap year");
                    break;}
                case 0:
                    {
                    printf("year is not leap year 1");
                    break;
                    }
            }
           break;
    }
    case 0:
        switch (year%400==0)
        {
                case 1:
                    printf("year is a leap year");
                    break;
                case 0:
                    printf("year is not leap year");
                    break; 
        }
        break;
    }
}*/

/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.


For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

/*#include<stdio.h>
int main()
{
    float unit,amount,total;
    printf("Enter unit :");
    scanf("%f",&unit);

    switch (unit<=50)
    {
        case 1 :
            amount=unit*0.50;
            break;
        case 0:switch (unit<=150)
            {
                case 1:
                    amount=25+(unit-50)*0.75;
                    break;
                case 0:switch (unit<=250)
                    {
                        case 1:
                        amount=100 +(unit-150)*1.20;
                        break;

                        case 0: 
                                  
                            amount=220+(unit-250)*1.50;
                            break;
                               
                    }
                    break;
            }
            break;   
    }
    total=amount+(amount*20/100);
    printf("Electricity charges are %f",total);

}*/

/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

/*#include<stdio.h>
int main()
{
    int number,choice;

   /* printf("1. Negative number to positive number");
    printf("\n2.Positive number to negetive number");
    
    printf("\nEnter choice :");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            printf("\n Enter Negative number");
            scanf("%d",&number);

            number=number*-1;
            printf("Number is a :%d",number);
            break;

         case 2:
            printf("\nEnter Positive number");
            scanf("%d",&number);

            number=number*-1;
            printf("Number is a :%d",number);
            break;

        default:
            printf("invalid choice");
    }

    
}*/
/*#include<stdio.h>
int main()
{
    int number;
    
    printf("\nEnter number :");
    scanf("%d",&number);
    //number =number*-1;
    switch (number>0)
    {
        case 1:
        printf("%d",-number);//number
        break;

        case 0:
            printf("%d",-number);//number
    }
}*/

/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.*/

/*#include<stdio.h>
int main()
{
    int number,choice;


    printf("1.even number to odd number");

    printf("\nenter choice");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
                printf("\nenter  even number");
                scanf("%d",&number);
                printf("number is a:%d",number+1);
                break;
        default:
            printf("invalid choice");
    }

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    switch (number%2==0)
    {
        case 1:
                printf("%d",number+1);
                break;
        case 0:
                printf("%d",number);
    }
}*/
/*#include<stdio.h>
int main()
{
    char a;
    printf("enter charcter");
    scanf("%c",&a);
    switch (a)
    {
        case 'A':
            printf("happy");
            break;

        
        case 'B':
            printf("unhappy");
            break;
        
        
        case 'C':
            printf("moj");
            break;

        default:
            printf("invalid choice");
            break;
    }
}*/

/*10.C program to find all roots of a quadratic equation using switch case*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("enter coefficient of x^2, x and constant term");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch (D>0)
    {
        case 1:
             printf("both roots are real & distinct"); 
             x= (-b+ sqrt(D))/(2*a); 
             y= (-b- sqrt(D))/(2*a);    
             printf("root are : %f, %f",x,y);     
            break;

         case 0 :switch (D<0)
            {
                        case 1:
                            printf("both roots are imaginary");                        
                            break;

                         case 0:
                            printf("both roots are equal");  
                            x=-b/2.0*a; //if 2.0 not then not reatrun floating value
                            printf("root are : %f",x);   
                            break;                   
            }break;
    }
    return 0;

}*/