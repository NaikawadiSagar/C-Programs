#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0,Cnt = 0;

    printf("\n Enter Rows And Colums => ");
    scanf("%d",&Cnt);

     for(R = 1;R <= Cnt;R++)
    {
        for(C = 1;C <= Cnt;C++)
        for(C = 1;C <= Cnt;C++)
        {
            if(R + C == Cnt + 1 || R == C)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
