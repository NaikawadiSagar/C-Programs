#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Ocnt = 0,Dig = 0;

    printf("\n Enter Any Positive Integer Number => ");
    scanf("%d",&No);

    while(No > 0)
    {
        Dig = No % 10;
        if(Dig % 2 == 1)
        {
            Ocnt++;
        }
        No = No / 10;
    }
    printf("\n Even Count In Given Number is %d",Ocnt);
    getch();
    return 0;
}
