#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0,i = 0,j = 0;

    printf("\n Enter Rows Count => ");
    scanf("%d",&R);

    printf("\n Enter Colums Count => ");
    scanf("%d",&C);

    for(i = 1;i <= R;i++)
    {
        for(j = 1;j <= C;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
