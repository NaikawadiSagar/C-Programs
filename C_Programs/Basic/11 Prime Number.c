#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,i = 0;

    printf("\n Enter Any Positive Integer Number => ");
    scanf("%d",&No);

    for(i = 2 ;i <= No;i++)
    {
        if(No % i == 0)
        {
            break;
        }
    }
    if(No == i)
    {
        printf("\n Given Number Is a Prime Number");
    }
    else
    {
        printf("\n Given Number is Not Prime Number ");
    }
    getch();
    return 0;
}
