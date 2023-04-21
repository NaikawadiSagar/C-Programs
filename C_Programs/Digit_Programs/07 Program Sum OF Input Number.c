#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0,Cnt = 5,i = 0,Sum =0;

    for(i = 1;i <= Cnt;i++)
    {
        printf("\n Enter  %d Bill Count ",i);
        scanf("%d",&Bill);

        Sum = Sum + Bill;
    }
    printf("\n Addition is %d",Sum);

    getch();
    return 0;
}
