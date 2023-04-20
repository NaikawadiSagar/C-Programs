#include<stdio.h>
#include<conio.h>

int main()
{
    int Dcnt = 0,No = 0;

    printf("\n Enter Any Positive Integer Number => ");
    scanf("%d",&No);

    while(No > 0)
    {
        Dcnt++;
        No = No / 10;
    }
    printf("\n Digit in Given Number is %d ",Dcnt);
    getch();
    return 0;
}
