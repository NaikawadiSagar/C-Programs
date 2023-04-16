#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,No3 = 0;

    printf("\n Enter Three Number => ");
    scanf("%d%d%d",&No1,&No2,&No3);

    if(No1 > No2)
    {
        printf("\n %d is grater Number",No1);
    }
    else if(No2 > No3)
    {
        printf("\n %d is Grater Number",No2);
    }
    else if(No3 > No1)
    {
        printf("\n %d is Greater Number",No3);
    }

    getch();
    return 0;


}
