#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Cube = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&No);

    Cube = No * No * No;

    printf("\n Cube of Given Number is = %d",Cube);

    getch();
    return 0;
}
