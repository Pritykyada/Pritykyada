
#include<stdio.h>




/*int pascal(int );
int  main()
{
    printf("prityhhn\bkyada");//delete one element
    printf("wellcome\rsd");//sdllcome
      printf("wellcome\fsd");//work like \n
      printf("wellcome\nsd");
      printf("\\wellcome\nsd\\");
     printf("\"wellcome\nsd\"");
   printf("\'priteekyada\'");
    printf("%%d",2);*/


    
  /*  int a;
    a=sizeof(3.5f);//4
    a=sizeof(3.5);//8
    a=sizeof(3);//4
   a=sizeof('r');//4
   a=sizeof("ghghj");//6
   a=sizeof(long double);//12
    a=sizeof(long int);//4
    a=sizeof(int);//4
    a=sizeof(short int);//2
    a=sizeof(unsigned int );//4
    a=sizeof(signed int );//4
    printf("%d",a);*/


   /* printf("\"\"\\n\"\"");
    printf("%d",-3/-2 );//1
    printf("%d",-3%2 );//-1
    printf("%d",3%-2 );//1
    printf("%d",0/3 );//0
    printf("%d",3/4 );//3
    printf("%d",3%4 );//3
    printf("%d",-3%4 );//-3
    printf("%d",3%-4);//3
    printf("%d",0.3/4 );//point*/

    //ASSIGNMENT-2:

  //write a program to print position of  first one in lsb

   /* int a,count=0;
    printf("enter number");
    scanf("%d",&a);
    while(1)
    {
    
      count++;
      if(a&1)
      {
        printf("%d",count);
        break;
      }
      a=a>>1;

    }*/


    //write a program to print last digit towart to right
  /*  int a,rem,ans;
     printf("enter number");
    scanf("%d",&a);

    rem=a%10;
    a=a/10;
    ans=rem*100+a;
    printf("answer is a %d",ans);*/



    //write a program to print prime number or not
   /*int a,flog=1;
     printf("enter number");
    scanf("%d",&a);

    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
          flog++;
          break;
        }
    }
    if(flog==1&& a!=1)
      printf("number is a prime number");
    else
        printf("number is a not prime  number");*/



  //write a program to print heart shape 
  /*int n;
      printf("enter number");
       scanf("%d",&n);

       for(int i=1;i<=n/2-1;i++)
       {

          for(int j=1;j<=n*2-1;j++)
          {
            if((j>=(n/2)-(i+1)&&j<=(n/2)+(i+1))||(j>=(n+n/2)-(i+1)&&j<=(n+n/2)+(i+1)))
            {
              if(i==n/2-1 && j>n-i&&j<=n+i/2)
              {
                
                if(j==n)
                {
                  printf("pritee");
                }
                continue;
              }
                printf("*");
            }
            else
            {
              printf(" ");
            }
           
          }
          printf("\n");
       }
       for(int p=1;p<=n/2*2-1;p++)
       {

          for(int k=1;k<=n*2-1;k++)
          {
              if(k>=p+1 && k<=(n*2-1)-p)
              {
                printf("*");
              }
              else
              {
                printf(" ");
              }
          
          }
          printf("\n");

       }*/


     /*int n;
      printf("enter number");
       scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {

            for(int j=1;j<=n;j++)
            {
                if(i==j ||j==1 || i==n) 
                {
                  printf("*");
                }
                else
                  printf(" ");

            }
            printf("\n");
        }*/


// menu driven program in table
     /* int n,no1,no2;
      while(1)
{
        printf("\n1. addition \n");
         printf(".2 subtraction\n");
          printf("3.division \n");
           printf("4.multiplication \n ");
          printf("5 exit \n ");
           printf("enter your choice:");
           scanf("%d",&n);
           switch(n)
           {
             case 1:
             printf("enter two number");
             scanf("%d %d",&no1,&no2);
             printf("the sum is :%d",no1+no2);
             break;

             case 2:
             printf("enter two number");
             scanf("%d %d",&no1,&no2);
             printf("the subtraction is :%d",no1-no2);
             break;

             case 3:
             printf("enter two number");
             scanf("%d %d",&no1,&no2);
             printf("the division is :%d",no1/no2);
             break;

             case 4:
             printf("enter two number");
             scanf("%d %d",&no1,&no2);
             printf("the multiplication is :%d",no1*no2);
             break;


            case 5:
                break;
           }
           if(n==5)
                break;
}*/



//write a program to print electricity bill

 /*float unit,amount,total;
    printf("Enter unit :");
    scanf("%f",&unit);

    if(unit<=50)
    {
        amount=unit*0.50;
    }
    else
    {

      if(unit<=150)
      {
          amount= 25+ (unit-50)*0.75;

      }
      else
      {
          if(unit<=250)
          {
            amount=100+(unit-150)*1.20;
          }
          else
          {
            amount=220+(unit-250)*1.50;
          }

      }
      total= amount+(amount*20/100);

      printf("total is a %d",total);

    }*/


//reverce of given number 
  /*void swap(char[],int ,int);
  int main()
  {
    int start=0,end=0,flog=0,i;
    char a[30]={"pritee kyada ashokbhai"};
    for( i=0;a[i];i++)//7
    {
        while(a[i]!=' ')
        {
          if(a[i]=='\0')
          {
            flog=1;
            break;
          }
          i++;//6
          end++;//6
        }
        swap(a,start,end-1);
        if(flog==1)
        {
          break;
        }
        start=++end;//13
    }

    swap(a,0,i-1);
    printf("%s",a);
}
 void swap(char b[],int s,int e)
    {
      while(s<e)
      { 
          char a=b[e];
          b[e]=b[s];
          b[s]=a;
          e--;
          s++;
      } 
    }*/














    
  