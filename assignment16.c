//1. Write a program to calculate the sum of two matrices each of order 3x3.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],mat_2[3][3],ans[3][3];
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat_1[i][j]);
        } 
    
    }
    printf("**************************************************\n");
    printf("enter mat_2 element  9 :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_2[i][j]);
        }
    
        
    }
     for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
        {
            ans[i][j]=mat_1[i][j]+mat_2[i][j];
        }
    }
    printf("sum  of matrix is a\n");
    for(int p=0;p<3;p++)
    {
        for(int k=0;k<3;k++)
        {
            printf("%d ",ans[p][k]);
        }
        printf("\n");
    }
}*/

//2. Write a program to calculate the product of two matrices each of order 3x3.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],mat_2[3][3],ans[3][3],j;
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    
    }
    printf("**************************************************\n");
    printf("enter mat_2 element  9 :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_2[i][j]);
        }     
    }
    printf("matrix multiplication is a\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            ans[i][j]=0;
            for(int k=0;k<3;k++)
            {
                ans[i][j]= ans[i][j]+mat_1[i][k]*mat_2[k][j];
                
            }
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}*/

//3. Write a program in C to find the transpose of a given matrix.

/*#include<stdio.h>
int main()
{
    int mat_1[3][3];
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    
    }
    printf("matrix is a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            printf("%d ",mat_1[i][j]);
        } 
        printf("\n");
    }
    printf("**************************************************\n");
    printf("Transpose of matrix is a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            printf("%d ",mat_1[j][i]);
        } 
        printf("\n");
    }
}*/
//4. Write a program in C to find the sum of right diagonals of a matrix.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],sum=0;
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    
    }
    for(int j=0;j<3;j++)
    {

        sum=sum+mat_1[j][j];
    }
    printf("%d",sum);
}*/

//5. Write a program in C to find the sum of left diagonals of a matrix.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],sum=0;
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

           printf("%d  ",mat_1[i][j]);
        }
        printf("\n"); 
    }

    for(int k=2, j=0;j<3;j++,k--)
    {
        sum=sum+mat_1[j][k];
    }
    printf("%d ",sum);
}*/


//6. Write a program in C to find the sum of rows and columns of a Matrix.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],sum_r=0,sum_c=0;
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&mat_1[i][j]);
        } 
    }
    printf("********************************************\n");
    printf("matrix is a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mat_1[i][j]);
        } 
        printf("\n");
    }
    int j;
     for(int i=0;i<3;i++)
    {
        sum_c=0;
        sum_r=0;
        for( j=0;j<3;j++)
        {
            sum_r=sum_r+mat_1[i][j];
           
            sum_c=sum_c+mat_1[j][i];
       
        }
        printf("sum of row %d : %d \n",i,sum_r);
        printf("sum of column %d: %d \n",j,sum_c);
    }        
}*/
//7. Write a program in C to print or display the lower triangular of a given matrix.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],sum=0;
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    }
    printf("********************************************\n");
    printf("matrix is a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

           printf("%d  ",mat_1[i][j]);
        }
        printf("\n"); 
    }
    printf("lower triangular matrix is a\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           /* if(j<=i)
            {
                printf("%d ",mat_1[i][j]);
            }
            else
            {
                mat_1[i][j]=0;
                printf("%d ",mat_1[i][j]);
            }
            if(i<j)
            {
                mat_1[i][j]=0;
            }
        }
    }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d ",mat_1[i][j]);
            }
            printf("\n"); 
        }
}*/

//8. Write a program in C to print or display an upper triangular matrix.
/*#include<stdio.h>
int main()
{
    int mat_1[3][3],sum=0;
    printf("enter mat_1 element  9:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    }
    printf("********************************************\n");
    printf("matrix is a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

           printf("%d  ",mat_1[i][j]);
        }
        printf("\n"); 
    }
     printf("upper triangular matrix is a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           /* if(j>=i)
            {
                 printf("%d ",mat_1[i][j]);
            }
            else
            {
                printf("  ");
            } 

            if(i>j)
            {
                mat_1[i][j]=0;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mat_1[i][j]);
        }
        printf("\n");
    }
}*/


//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
/*#include<stdio.h>
int main()
{
    int row,column;
    printf("enter the row of matrix");
    scanf("%d",&row);
    printf("enter the column of matrix");
    scanf("%d",&column);

    int mat_1[row][column],count_ze=0,count_nze=0;
    printf("enter mat_1 element %d :",row*column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    }
    printf("********************************************\n");
    printf("matrix is a\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",mat_1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           if(mat_1[i][j]==0)
               count_ze++;
        }
    }
    if(count_ze>row*column/2)
        printf("This matrix is a sparse matrix");
    else
        printf("This matrix is dense matrix");
}*/

//10. Write a program in C to find the row with maximum number of 1s
#include<stdio.h>
int main()
{
    int row,column,c=0;
    printf("enter the row of matrix");
    scanf("%d",&row);
    printf("enter the column of matrix");
    scanf("%d",&column);

    int mat_1[row][column],count_ze=0,count_nze=0;
    printf("enter mat_1 element %d :",row*column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {

            scanf("%d",&mat_1[i][j]);
        } 
    }
    printf("********************************************\n");
    printf("matrix is a\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",mat_1[i][j]);
        }
        printf("\n"); 
    }
    
 /*   int arr[row];
    for(int i=0;i<row;i++)
    {
        int count=0;
        for(int j=0;j<column;j++)
        {
            if(mat_1[i][j]==1)
            {
                count++;
            }
        }
        arr[i]=count;
    }
    int max=arr[0];
    int n=-1;
    for(int p=0+1;p<row;p++)
    {
        if(max<arr[p])
        {
            max=arr[p];
            n=p;
        }
        if(n==-1)
        {
            n=0;
        }
    }*/

    int max=0,index;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<column;j++)
        {
            if(mat_1[i][j]==1)
            {
                sum=sum+mat_1[i][j];
                
            }
        }
        if(sum>max)
        {
            max=sum;
            index=i;
        }
    }
    printf("row with maximum number of 1s %d :",index);

}


















