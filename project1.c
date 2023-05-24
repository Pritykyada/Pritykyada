#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void show();
void game_start();
int main()
{
   /* char *p,c;
    int i,j=1;
    p=(char *)malloc(sizeof(char));
    printf("Player name:");
    for(i=0;c!='\n';i++)
    {
        c=getc(stdin);
        j++;
        p=(char *)realloc(p,j*sizeof(char));
        p[i]=c;
    }
    p[i]='\0';
    system("cls");*/

    /*show();
    getch();
    system("cls");*/
    game_start();


}
void game_start()
{
    int arr[15];
    int count;
    srand(time(0));
    for(int i=0;i<15;i++)
    {
        arr[i]=i+1;
    }
    for(int j=0;j<15;j++)
    {
        int temp=arr[j];
        int random=rand()%10;
        arr[j]=arr[random];
        arr[random]=temp;
    }
    printf("\n---------------------\n");
    int p= 0;
    while(p<15)
    {
        for(int k=0;k<4;k++)
        {
            if(k!=3 || p!=15)
            {
                    printf("|%4d",arr[p]);
                    p++;
            }
            else
                printf("|%4c",32);
        }
        printf("|");
        printf("\n");
    }
    printf("---------------------\n");

    printf("enter arrow key");
    switch (getch())
    {
        case 37:
            
            break;
        case 38:
        
            break;
        case 39:
        
            break;
        case 40:
            int a[4][4];
            for(int p=0;p<4;p++)
            {   
                for(int k=0;k<4;k++)
                {
                    if()

                }
            }
            break;
    
    default:
        printf("invalid key");
        break;
    }
}

void show()
{
        printf("                       MATRIX PUZZLE                ");
        printf("\n\n                       RULE OF THIS GAME                \n\n");

        printf("1. You can move only 1 step at a time with the arrow key\n");
        printf("            Move up:by Up arrow key               \n");
        printf("            Move Down:by Down arrow key              \n");
        printf("            Move Left:by Left arrow key               \n");
        printf("            Move Right:by Right arrow key               \n\n");
        printf("2. You can move numbers at an empty position only.\n\n");
        printf("3. For each valid move : your total number of moves will decrease by 1.\n\n");
        printf("4.Winning Situation :1. Number in a 4*4 matrix should be in order from 1 to 15");

        printf("like as\n\n");

        printf("-------------------------\n");
        int k=1;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                    if(i==3&&j==3)
                    {
                        printf("|%4c ",32);
                     break;
                    }
                    printf("|%4d ",k);
                    k++;
            }
            printf("|");
            printf("\n");
            if(i==3)
            {
                break;
            }
        }    
        printf("-------------------------\n");

        printf("5.You can exit game anytime by giving yes or no answer\n\n");
            printf("               Happy gaming,all the best!!            \n");
            printf("\n enter any key to start.....");
            
}