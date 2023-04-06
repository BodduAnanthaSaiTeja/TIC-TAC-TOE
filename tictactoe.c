#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i=0,j=0,n,n1;
    printf("**** FOR REFERENCE PURPOSE ****\n");
    printf("the board positions are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    printf("*********************************\n");
    printf("the initial board is empty:\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
          printf("%c",a[i][j]);
      printf("\n");
    }
    printf("X --> player 1  and O --> player2\n");
    while(1)
    {
        hlo: printf("\nenter player 1 position X:");
        scanf("%d",&n);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(n>9||n<=0)
                {
                    printf("\ninvalid position");
                    goto hlo;
                }
                if(x[i][j]==n)
                {
                    if(a[i][j]==' ')
                    {
                        a[i][j]='X';
                        printf("\n");
                        for(i=0;i<3;i++)
                        {
                            for(j=0;j<3;j++)
                            {
                                printf("%c ",a[i][j]);
                            }
                            printf("\n");
                        }
                       if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') 
                       {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
                        {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
                       {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[1][0]=='X' && a[2][0]=='X' && a[0][0]=='X')
                        {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
                        {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
                        {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
                        {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
                        {
                          printf("PLAYER 1 WINNER\nCongratulations ");
                          exit(0);
                       }
                    }
                    else
                    {
                        printf("that position already filled");
                        goto  hlo;
                    }
                 
                }
            }
        }
        hlo2: printf("\nenter player 2 position O:");
        scanf("%d",&n1);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(n>9||n<=0)
                {
                    printf("\ninvalid position");
                    goto hlo2;
                }
                if(x[i][j]==n1)
                {
                    if(a[i][j]==' ')
                    {
                        a[i][j]='O';
                        printf("\n");
                        for(i=0;i<3;i++)
                        {
                            for(j=0;j<3;j++)
                            {
                                printf("%c ",a[i][j]);
                            }
                            printf("\n");
                        }
                       if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') 
                       {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                       else if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
                        {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                       else if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')
                       {
                          printf("PLAYER 2 WINNER\nCongratulations ");
                          exit(0);
                       }
                       else if(a[1][0]=='O' && a[2][0]=='O' && a[0][0]=='O')
                        {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                       else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
                        {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                       else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
                        {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                       else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
                        {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                       else if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')
                        {
                          printf("PLAYER 2 WINNER\nCongratulations");
                          exit(0);
                       }
                    }
                    else
                    {
                        printf("that position already filled");
                        goto  hlo2;
                    }
                 
                }
            }
        }
    }
}