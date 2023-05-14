#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[3] = { }, i = 0,sum = 0;

    for(i = 0;i < 3;i++)
    {
        printf("\n Enter %d Elements => ",i + 1);
        scanf("%d",&Arr[i]);

        sum = sum + Arr[i];
    }

    for(i = 0;i < 3;i++)
    {
        printf("\n %d Elements Are %d",i + 1,Arr[i]);
    }
    printf("\n\n Summation of All Element is %d",sum);

    getch();
    return 0;
}
