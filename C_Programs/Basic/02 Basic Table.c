#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,R = 0;

    printf("\n Enter Any number => ");
    scanf("%d",&No);

    for(R = 1;R<=10;R++)
    {
       printf("\n %d",(No*R));
    }


    getch();
    return 0;
}
