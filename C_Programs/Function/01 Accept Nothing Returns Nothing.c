#include<stdio.h>
#include<conio.h>

void Add()
{
    int No1 = 0,No2 = 0,Sum = 0;

    printf("\n Enter 1st Number => ");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number => ");
    scanf("%d",&No2);

    Sum = No1 + No2;

    printf("\n Addition Of %d And %d = %d.",No1,No2,Sum);

    return;
}
int main()
{

    printf("\n Welcome To THe Main Function\n");

    Add();
    printf("\n Thanks");

    getch();
    return 0;
}
