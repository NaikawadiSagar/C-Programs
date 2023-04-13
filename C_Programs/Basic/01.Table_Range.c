#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,S_No = 0,C = 5,E_Num = 0;

      printf("\n Enter Starting Number ");
      scanf("%d",&S_No);

      printf("\n Enter Ending Number ");
      scanf("%d",&E_Num);

    for(R = 1;R<=10;R++)
    {
        for(C = S_No; C<=E_Num;C++)
        {
            printf(" %3d",R*C);
        }
        printf(" \n ");
    }

    getch();
    return 0;
}
