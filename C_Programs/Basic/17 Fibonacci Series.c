#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 1,No2= 0,No3 = 0,No = 0;

    printf("\n Enter Fibonacci Series Count => ");
    scanf("%d",&No);

    while(No > 0)
    {
        printf(" \n %d",No2);
        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;
        No--;
    }
    getch();
    return;
}
