/*Assignment - 21 A Job Ready Bootcamp in C++, DSA and IOT MySirG

Structure*/

/*1. Define a structure Employee with member variables id, name, salary
2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]
3. Write a function to display employee data. [ Refer structure from question 1 ]*/

/*#include<string.h>
#include<stdio.h>
struct employee input();
void display(struct employee);
struct employee 
{
    int id;
    char name[7];
    float salary;
};
int main()
{
    struct  employee e;
    e=input();
    display(e);
}
void display(struct  employee p)
{
    printf(" id is :%d \n name is: %s  \n salary is a:%f",p.id,p.name,p.salary);
}
struct employee input()
{
    struct  employee e1;
    printf("enter id:");
    scanf("%d",&e1.id);
    printf("enter name:");
    fflush(stdin);
    fgets(e1.name,8,stdin);
    e1.name[strlen(e1.name)-1]='\0';
    printf("enter salary:");
    scanf("%f",&e1.salary);
    return e1;
}*/

/*4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/
/*#include<string.h>
#include<stdio.h>
struct employee input();
struct employee 
{
    int id;
    char name[7];
    float salary;
};
void high(struct employee *b,int size)
{
    struct employee high=*b;
    for(int i=1;i<10;i++)
    {
        if(high.salary<b[i].salary)
        {
            high=b[i];
        }
    }
    printf("**************************\n");
    printf("highest salary details\n");

    printf(" id :%d\n name :%s\n salary %.2f",high.id,high.name,high.salary);

}
int main()
{
    struct  employee e[10];
    for(int i=0;i<5;i++)
    {
        e[i]=input();
    }
    high(e,5);

}
struct employee input()
{
    struct  employee e1;
    printf("enter id:");
    scanf("%d",&e1.id);
    printf("enter name:");
    fflush(stdin);
    fgets(e1.name,8,stdin);
    e1.name[strlen(e1.name)-1]='\0';
    printf("enter salary:");
    scanf("%f",&e1.salary);
    return e1;
}*/


/*5. Write a function to sort employees according to their salaries [ refer structure from
question 1]*/
/*#include<string.h>
#include<stdio.h>
struct employee input();
void display(struct employee);
struct employee 
{
    int id;
    char name[7];
    float salary;
};


int main()
{
    struct employee e1={1,"prity",3455.8};
    struct employee e2;
    e2.id=12;
    strcpy(e2.name,"vvbfgb");
    e2.salary=234.78;

    struct employee e3[5];
    for(int i=0;i<5;i++)
    {
        e3[i]=input();
    }
    swap(e3,5);
    for(int i=0;i<5;i++)
    {
        display(e3[i]);
    }

}
void swap( struct employee b[],int size)
{
    struct employee temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(b[i].salary>b[j].salary)
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
}

void display(struct  employee p)
{
    printf(" id is :%d \n name is: %s  \n salary is a:%2.f\n",p.id,p.name,p.salary);
}
struct employee input()
{
    struct  employee e1;
    printf("enter id:");
    scanf("%d",&e1.id);
    printf("enter name:");
    fflush(stdin);
    fgets(e1.name,8,stdin);
    e1.name[strlen(e1.name)-1]='\0';
    printf("enter salary:");
    scanf("%f",&e1.salary);
    return e1;
}*/

/*6. Write a function to sort employees according to their names [refer structure from
question 1]*/
/*#include<stdio.h>
#include<string.h>
struct employees input();
void display(struct employees);
struct employees 
{
    int id;
    char name[10];
    float salary;
};
void display(struct  employees p)
{
    printf(" id is :%d \n name is: %s  \n salary is a:%2.f\n",p.id,p.name,p.salary);
}
void swap(struct employees b[],int size )
{
    struct employees temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(strcmp(b[i].name,b[j].name)>0)
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
}
int main()
{
    struct employees e[5];
    for(int i=0;i<5;i++)
        e[i]=input();
    swap(e,5);
    for(int i=0;i<5;i++)
    {
        display(e[i]);
    }
}
 
struct employees input()
{
    struct employees emp;
    printf("enter id:");
    scanf("%d",&emp.id);
    printf("enter name:");
    fflush(stdin);
    fgets(emp.name,8,stdin);
    emp.name[strlen(emp.name)-1]='\0';
    printf("enter salary:");
    scanf("%f",&emp.salary);
    return emp;
}*/

//7. Write a program to calculate the difference between two time periods.
/*struct time
{
    int hh;
    int mm;
    int ss;
};
void result(struct time ,struct time ,struct time *);
#include<stdio.h>
int main()
{
    struct time start_time,end_time,diff;
    printf("enter start time ");
    printf("***************\n");

    printf("enter start_hour");
    scanf("%d",&start_time.hh);
    printf("enter start_minit");
    scanf("%d",&start_time.mm);
    printf("enter start_second");
    scanf("%d",&start_time.ss);

    printf("***************");
    printf("enter end time ");

    printf("enter end_hour");
    scanf("%d",&end_time.hh);
    printf("enter end_minit");
    scanf("%d",&end_time.mm);
    printf("enter end_second");
    scanf("%d",&end_time.ss);

    result(start_time,end_time,&diff);
     printf("end time :%d :%d: %d\n",end_time.hh,end_time.mm,end_time.ss);
    printf("start time :%d :%d: %d\n",start_time.hh,start_time.mm,start_time.ss);
    printf("difference:%d :%d: %d",diff.hh,diff.mm,diff.ss);

}
void result(struct time s_time,struct time e_time,struct time * difference)
{
        while(e_time.ss<s_time.ss)
        {
            e_time.mm--;
            e_time.ss+=60;
        }
        difference->ss=e_time.ss-s_time.ss;
         while(e_time.mm<s_time.mm)
        {
           e_time.hh--;
            e_time.mm+=60;     
        }
        difference->mm=e_time.mm-s_time.mm;
        difference->hh=e_time.hh-s_time.hh;
}*/

//8. Write a program to store information of 10 students and display them using structure.
/*struct student
{
    int rollno;
    char name[50];
    char address[50];
    char email[50];
    int fees;
};
#include<stdio.h>
#include<string.h>
int main()
{
    struct student s1={1,"pritee","a53,nilkanthvarnisurat","pritee@gmail.com",2345};
    struct student s2[3]={{2,"pritee","a53,nilkanthvarnisurat","pritee@gmail.com",2345},
    {2,"pritee","a53,nilkanthvarnisurat","pritee@gmail.com",2345},
    {3,"pritee","a53,nilkanthvarnisurat","pritee@gmail.com",2345 }};
    printf("%d \n  %s \n  %s  \n %s\n %d\n",s1.rollno,s1.name,s1.address,s1.email,s1.fees);
    printf("\n%d \n %s \n %s \n%s \n%d\n",s2[0].rollno,s2[0].name,s2[0].address,s2[0].email,s2[0].fees);

    struct student s3[10];
    
    for(int i=0;i<10;i++)
    {
        printf("enetr rollno:");
        scanf("%d",&s3[i].rollno);
        printf("\nenetr  name:");
        fflush(stdin);
        fgets(s3[i].name,50,stdin);
        s3[i].name[strlen(s3[i].name)-1]='\0';
         printf("\nenetr  address:");
         fflush(stdin);
        fgets(s3[i].address,50,stdin);
        s3[i].address[strlen(s3[i].address)-1]='\0';
         printf("\nenetr email:");
         fflush(stdin);
        fgets(s3[i].email,50,stdin);
        s3[i].email[strlen(s3[i].email)-1]='\0';
         printf("enetr fees:");
        scanf("%d",&s3[i].fees);

    }

    for(int i=0;i<10;i++)
    {
        printf("\nroll number:%d",s3[i].rollno);
        printf("\nrname:%s",s3[i].name);
        printf("\naddress:%s",s3[i].address);
        printf("\nemail:%s",s3[i].email);
        printf("\nfees:%d",s3[i].fees);
    }
}*/

//9. Write a program to store information of n students and display them using structure
/*struct student
{
    int rollno;
    char name[50];
    char address[50];
    char email[50];
    int fees;
};
#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    printf("enter number of student which you want to store");
    scanf("%d",&a);
    struct student s3[a];
    printf("*****************************************");
    for(int i=0;i<a;i++)
    {
        printf("enetr rollno:");
        scanf("%d",&s3[i].rollno);
        printf("enetr  name:");
        fflush(stdin);
        fgets(s3[i].name,50,stdin);
        s3[i].name[strlen(s3[i].name)-1]='\0';
         printf("enetr  address:");
         fflush(stdin);
        fgets(s3[i].address,50,stdin);
        s3[i].address[strlen(s3[i].address)-1]='\0';
         printf("enetr email:");
         fflush(stdin);
        fgets(s3[i].email,50,stdin);
        s3[i].email[strlen(s3[i].email)-1]='\0';
         printf("enetr fees:");
        scanf("%d",&s3[i].fees);

    }

    for(int i=0;i<a;i++)
    {
        printf("\nroll number:%d",s3[i].rollno);
        printf("\nrname:%s",s3[i].name);
        printf("\naddress:%s",s3[i].address);
        printf("\nemail:%s",s3[i].email);
        printf("\nfees:%d",s3[i].fees);

    }
}*/

/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
/*#include<stdio.h>
#include<string.h>
struct mark
{
    int rno;
    char name[20];
    int c_mark,p_mark,b_mark;
};

int main()
{
    struct mark m1[5];
    float per=0;
    for(int i=0;i<5;i++)
    {
        printf("enetr rollno:");
        scanf("%d",&m1[i].rno);
        printf("enetr  name:");
        fflush(stdin);
        fgets(m1[i].name,50,stdin);
        m1[i].name[strlen(m1[i].name)-1]='\0';
         printf("enetr  Chemistry mark:");
        scanf("%d",&m1[i].c_mark);
        printf("enetr phisicks mark:");
        scanf("%d",&m1[i].p_mark);
        printf("enetr  biology mark:");
        scanf("%d",&m1[i].b_mark);
    }  
    for(int i=0;i<5;i++)
    {
        per=((m1[i].p_mark+m1[i].c_mark+m1[i].b_mark)/300.00)*100.;
        printf("name :%s per: %.2f\n",m1[i].name,per);
    }
}*/