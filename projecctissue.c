#include<stdio.h>
#include<conio.h>
#include<unistd.h>
void display(int[]);
int main()
{
  int a[4][4],count=0;
  int  arr[16]={1,3,4,6,
                7,8,4,5,
                6,7,8,3,
                5,6,2, };
  display(arr);
  printf("\n");
  int space=15;
  printf("enter chacter\n");
  getch();
  switch (getch())
  {
        case 80:
        {
                int unum_index;
                unum_index=space-4;
                int temp=arr[space];
                arr[space]=arr[unum_index];
                arr[unum_index]=temp;
                space=unum_index;
                display(arr);

        }
            break;
        
        default:
            break;
  }

}
void display(int arr[])
{
    int a[4][4],count=0;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      a[i][j]=arr[count];
      count++;
    }
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
          printf("|%4d ",a[i][j]);
    }
    printf("|");
    printf("\n");
  }
}

