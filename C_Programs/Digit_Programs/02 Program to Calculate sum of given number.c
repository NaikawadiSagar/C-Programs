#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Sum = 0,Dig = 0;

    printf("\n Enter any Positive Number => ");
    scanf("%d",&No);

    while(No > 0)
    {
        Dig = No % 10;
        Sum = Sum + Dig;
        No = No / 10;
    }

    printf("\n Sum of Given Number %d",Sum);

    getch();
    return 0;
}
