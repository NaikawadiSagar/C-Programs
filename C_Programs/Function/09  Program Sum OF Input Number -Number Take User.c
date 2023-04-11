#include<stdio.h>
#include<conio.h>

int Calculate_Sum(int);

int Calculate_Sum(int Num)
{
    int i = 0,Bill = 0,Sum = 0;;


    for(i = 1;i <= Num;i++)
    {
        printf("\n Enter  %d Bill Count = >",i);
        scanf("%d",&Bill);

        if(Bill > 0)
        {
            Sum = Sum + Bill;
        }
    }
    return Sum;
}

int main()
{
    int Bill = 0,Cnt = 0,i = 0,Ans =0;

    printf("\n Enter Todays Bill Count => ");
    scanf("%d",&Cnt);

    Ans = Calculate_Sum(Cnt);
    printf("\n Todays Income is %d",Ans);

    getch();
    return 0;
}
