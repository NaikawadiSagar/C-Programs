#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter Two Number => ");
    scanf("%d%d",&No1,&No2);

    if(No1 > No2)
    {
        printf("\n %d is grater Number",No1);
    }
    else
    {
        printf("\n %d is Grater Number",No2);
    }

    getch();
    return 0;


}
