/*Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
Array and Functions in C Language*/
//1. Write a function to find the greatest number from the given array of any size. (TSRS)
/*#include<stdio.h>
int gretest(int[],int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
    printf("%d",gretest(a,j)) ;
}

int gretest( int b[],int s)
{
        printf("enter %d number",s);
        for(int i=0;i<s;i++)
        {
            scanf("%d",&b[i]);
        }
        int max=b[0];
        for(int i=1;i<s;i++)
        {
            if(b[i]>max)
            {
                max=b[i];
            }
        }
        return max;
}*/
//2. Write a function to find the smallest number from the given array of any size. (TSRN)
/*#include<stdio.h>
int gretest(int[],int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
    printf("max is a %d",gretest(a,j)) ;
}

int gretest( int b[],int s)
{
        printf("enter %d number",s);
        for(int i=0;i<s;i++)
        {
            scanf("%d",&b[i]);
        }
        int min=b[0];
        for(int i=1;i<s;i++)
        {
            if(b[i]<min)
            {
                min=b[i];
            }
        }
        return min;
}*/
//3. Write a function to sort an array of any size. (TSRS)
/*#include<stdio.h>
int gretest(int[],int,int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
    
        printf("enter %d number",j);
        for(int i=0;i<j;i++)
        {
            scanf("%d",&a[i]);
        }
         printf("array is a");
        for(int p=0;p<j;p++)
        {
            printf("%d  ",gretest(a,p,j));
        }
}
int gretest( int b[],int s,int k)
{
        
            for(int j=s+1;j<k;j++)
            {
                if(b[s]>b[j])
                {
                    int p=b[j];
                    b[j]=b[s];
                    b[s]=p;   
                }
            }
        return b[s];    
}*/
/*4. Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

/*#include<stdio.h>
void rotate(int[] ,int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
    rotate(a,j);

}
void rotate(int arr[],int size)
{
        printf("enter %d number",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        int rotate;
        printf(" enter rotate number");
        scanf("%d",&rotate);
        for(int p=rotate;p>=1;p--)
        {
            int k=arr[0];
            for(int j=0;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }            
            arr[size-1]=k;
        }
       for(int i=0;i<size;i++)
        {
            printf("%d  ",arr[i]);
        }


}*/
/*5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
Function has to return the value of the element.*/

/*#include<stdio.h>
int occur(int[] ,int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
   int b=occur(a,j);
   if(b==0)
        printf("there is no adjacent duplicate values in the array");
   else
     printf(" adjacent duplicate values is a %d",b);
}
int occur(int arr[],int size)
{
        printf("enter %d number",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        for (int i=0;i<size;i++)
        {
            if(arr[i]==arr[i+1])
            {
                return arr[i];
            }
        }
        return 0;
}*/


/*6. Write a function in C to read n number of values in an array and display it in reverse 
order.*/

/*#include<stdio.h>
void occur(int[] ,int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
     occur(a,j);

}
void occur(int arr[],int size)
{
        printf("enter %d number",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("reverce order value is a ");
        for(int i=size-1;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }
}*/
//7. Write a function in C to count a total number of duplicate elements in an array.

/*#include<stdio.h>
int duplicate(int[] ,int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
    printf(" duplicate  number is a %d",duplicate(a,j));

}
int duplicate(int arr[],int size)
{
    int count=0;
        printf("enter %d number",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        for (int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
}*/
//8. Write a function in C to print all unique elements in an array.
/*#include<stdio.h>
int unique(int[] ,int);
int main()
{
    int j;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
    unique(a,j);

}
int unique(int arr[],int size)
{
    
        printf("enter %d number",size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("array is a\n");
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        int j;
        int blog;
        printf("\n*************************************\n");
        printf("unique elements element is a\n");
        for (int i=0;i<size;i++)
        {
            blog=0;
            for(int j=0;j<size;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(arr[i]==arr[j])
                {
                   blog=1;
                }
            }
            if(blog==0)
            {
                printf("%d ",arr[i]);
            }
            
        }
        int temp[100];
        for(int i=0;i<100;i++)
        {
            temp[i]=0;
        }
        for(int p=0;p<size;p++)
        {
            int n=arr[p];
            temp[n]=temp[n]+1;
        }
         for(int p=0;p<size;p++)
        {
            int n=arr[p];
            if(temp[n]==1)
            {
                 printf(" %d ",arr[p]);
            }   
        }
}*/
/*9. Write a function in C to merge two arrays of the same size sorted in descending 
order.*/
/*#include<stdio.h>
void merge(int[],int[],int[] ,int,int);
int main()
{
    int arr_1[5],arr_2[5],arr[10];
   merge(arr_1,arr_2,arr,5,10);

}
void merge(int a_1[],int a_2[],int ar[],int size,int se_size)
{
     printf("enter 5 element for arry_1");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&a_1[i]);
        }
        int k=0;
        printf("enter 5 element for arry_2");
        for(int j=0;j<size;j++)
        {
            scanf("%d",&a_2[j]);
        }
        for(int i=0;i<se_size;i++)
        {
            if(i>=size)
            {
                ar[i]=a_2[k];
                k++;
            }
            else{
                 ar[i]=a_1[i];
            }
        }
       for(int i=0;i<se_size-1;i++)
        {
            for(int j=i+1;j<se_size;j++)
            {
                if(ar[i]<ar[j])
                {
                    int p=ar[j];
                    ar[j]=ar[i];
                    ar[i]=p;
                }
            }
        }
        for(int i=0;i<se_size;i++)
        {
            printf("%d  ",ar[i]);
        }
}*/

/*10. Write a function in C to count the frequency of each element of an array.*/

#include<stdio.h>
void frequency(int[],int);
int main()
{
    int arr_1[5];
   frequency(arr_1,5);

}
void frequency(int a_1[],int size)
{
     printf("enter 5 element for arry_1");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&a_1[i]);
        }
       /* for(int i=0;i<size;i++)
        {
            int fre=1;
            for(int j=0;j<size;j++)
            {
                if(i==j)
                {
                    continue;
                }
                    if(a_1[i]==a_1[j])
                    {
                        fre++;
                    }
            } 
            printf("frequence of element %d : %d",a_1[i],fre);
        }*/
        int temp[100]={0};
        for(int p=0;p<5;p++)
        {
            temp[a_1[p]]++;
        }
         for(int p=0;p<100;p++)
        {
            if(temp[p]!=0)
            {
                printf(" frequency of %d : %d \n",p,temp[p]);
            }
        }
}