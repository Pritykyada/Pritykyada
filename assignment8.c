//pattern..............................

//1..........
/*
*   
**  
*** 
****
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//2...........
/*
    *
   **
  ***
 ****
*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=5+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//3.............
/*
*****
**** 
***  
**   
*   
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=5+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//4...................
/*
*****
 ****
  ***
   **
    *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//5..........................
/*
    *    
   ***   
  *****
 ******* 
*********
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5*2-1;j++)
        {
            if(j>=5+1-i&&j<=5-1+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//6...........................
/*
*********
 ******* 
  *****
   ***
    *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5*2-1;j++)
        {
            if(j>=i&&j<=5*2-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//7..................................
/*
*********
**** ****
***   ***
**     **
*       *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5*2-1;j++)
        {
            if(j>=5-1+i || j<=5+1-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//8................................................
/*
   1   
  121  
 12321 
1234321
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)//2
    {
        k=0;
        for(j=1;j<=4*2-1;j++)//1
        {
            if(j>=4+1-i && j<=4-1+i)
            {
                if(j>4)
                    k--;
                else
                {
                k++;//1
                }
                printf("%d",k);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//9...........................
/*
1234321
 12321 
  121  
   1
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=4*2-1;j++)
        {
            if(j>=i && j<=4*2-i)
            {
                if(j>4)
                    k--;
                else
                    k++;
                printf("%d",k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//10............................
/*
1234321
123 321
12   21
1     1
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=0;
        for(j=1;j<=4*2-1;j++)
        {
            if(j>=4-1+i || j<=4+1-i)
            {
               
                if(j>4)
                    k--;
                else
                    k++;
                printf("%d",k);
            }
            else
            {
                
                /*if(j>4)
                {
                    k--;
                }
                else
                {
                    k++;
                }
                printf(" ");
                if(j==4)
                {
                    k++;
                }
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//11....................................
/*
             A
          A  B  A          
       A  B  C  B  A       
    A  B  C  D  C  B  A
 A  B  C  D  E  D  C  B  A 
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)//2
    {
        k=64;
        for(j=1;j<=5*2-1;j++)//1
        {
            if(j>=5+1-i && j<=5-1+i)
            {
                if(j>5)
                    k--;
                else
                    k++;
                printf(" %c ",k);
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}*/

//12...............................................
/*
A  B  C  D  C  B  A 
    A  B  C  B  A    
       A  B  A
          A
#include<stdio.h>
int main()
{
    int i,j,k;
    //char k;
    for(i=1;i<=4;i++)//2
    {
        k='@';
        for(j=1;j<=4*2-1;j++)//1
        {
            if(j>=i && j<=4*2-i)
            {
                if(j>4)
                    k--;
                else
                    k++;
                printf(" %c ",k);
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}*/
//13...................................................
/*
 A  B  C  D  E  F  G  F  E  D  C  B  A
 A  B  C  D  E  F     F  E  D  C  B  A
 A  B  C  D  E           E  D  C  B  A
 A  B  C  D                 D  C  B  A
 A  B  C                       C  B  A
 A  B                             B  A
 A                                   A
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k='@';
        for(j=1;j<=7*2-1;j++)//
        {
            if(j>=7-1+i ||j<=7+1-i)
            {
                if(j>7)
                {
                    k--;
                }
                else
                    k++;
                printf(" %c ",k);
            }
            else
            {
                
                if(j==7)
                {
                    k++;
                }
                printf("   ");
            }

        }
        printf("\n");
    }
    return 0;
}*/

//14...........................................
/*
*    
**   
* *  
*  *
***** 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==i||j==1 || i==5 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/
//15..............................................
/*
    *
   **
  * *
 *  *
***** 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5||j==5+1-i|| i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

//16...............
/*
    *    
   * *   
  *   *
 *     * 
********* 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5*2-1;j++)
        {
            if(j==5+1-i || j==5-1+i || i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

//17..................................................
/*
*********
 *     * 
  *   *  
   * *
    * 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5*2-1;j++)
        {
            if(j==i || j==5*2-i  || i==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}*/
//18....................................
/*
    *    
   ***   
  *****
 *******
*********
 *******
  *****
   ***
    *    
#include<stdio.h>
int main()
{
    int i,k=0,j;
    for(i=1;i<=5*2-1;i++)
    {
        if(i>5)
        {
            k--;
        }
        else
        {
            k++;
        }
        for(j=1;j<=5*2-1;j++)
        {
            if(j>=5+1-k&& j<=5-1+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}*/

//19...................................
/*
  *****     *****  
 *******   ******* 
********* *********
******MySirG*******
 ***************** 
  ***************  
   *************   
    ***********    
     *********     
      *******      
       *****       
        ***        
         *
        */
/*#include<stdio.h>
int main()
{
    int i,k=0,j;
    for(i=1;i<=7*2-1;i++)
    {
        if(i>7/2)
        {
            k++;
        }
        for(j=1;j<=10*2-1;j++)
        {
            if(i>(7/2)+1)
            {
                    if(j>=k&&j<=10*2-k)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
            }
            if(i<=7/2)
            {

                if((j>=7/2+1-i&& j<=7/2*2+i)||(j>=7*2-i && j<=8*2+i))
                {
               
                printf("*");
                 }
                else
                {
                    printf(" ");
                }
            }
            if(k==1)
            {
                if(j==7)
                {
                printf("MySirG");
                }
                else
                {
                    if((j>=k&&j<=7-k)||(j>=7*2-k&&j<=10*2-k))
                        printf("*");
                }
            }
        }
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    printf("\n\n\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((j>3-i &&j<=3*2+i) ||(j>10+3-i && j<10*2-3+i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            } 
        }
         printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=19;j++)
        {
         
            if(i==1 && j==7)
            {
                printf("Pritee");
            }
            if(i==1 && (j>=7 &&j<=12))
            {
                continue;
            }
            if(j>=i &&j<=20-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}*/







