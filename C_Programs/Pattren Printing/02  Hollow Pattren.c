#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0,i = 0,j = 0,N = 0;

    printf("\n Enter Rows Count => ");
    scanf("%d",&N);

   // printf("\n Enter Colums Count => ");
   // scanf("%d",&C);

    for(R = 1;R <= N;R++)
    {
        for(C = 1;C <= N;C++)
        {
            if(R == 1 || C == 1 || R == N || C == N)
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
    getch();
    return 0;
}
