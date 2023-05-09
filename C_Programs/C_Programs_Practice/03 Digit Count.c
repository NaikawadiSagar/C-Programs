#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Dig = 0,DCnt = 0;

    printf("\n Enter Any Positive Integer Number => ");
    scanf("%d",&No);

    while(No > 0)
    {
        DCnt++;
        No = No / 10;
    }
    printf("\n Digit Count is %d",DCnt);
    getch();
    return 0;
}
