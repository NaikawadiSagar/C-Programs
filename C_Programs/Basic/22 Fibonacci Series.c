#include<stdio.h>
#include<conio.h>

int main()
{

    int No1 = 1,No2 = 0,No3 = 0,No = 0;

    printf("Enter Fibonacci Series => ");
    scanf("%d",&No);

    while(No > 0)
    {
        printf("%d",No3);

        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;

        No--;
    }
    getch();
    return 0;
}
