
#include<stdio.h>
#include<conio.h>

void Accept_Element(int *Arr,int Cnt)
{
    int i = 0;
    for(i = 0;i < Cnt;i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Arr[i]);
    }

}
void Display_Element(int *No,int Cnt)
{
    int  i = 0;
    for(i = 0;i < Cnt; i++)
    {
       printf("\n %d Element is => %d",i + 1,No[i]);
    }
}
int Find_Maximum(int *No,int Cnt)
{
    int i = 0 ,Top = 0;
    for(i = 0;i < Cnt;i++)
    {
        if((i == 0)||(Top < No[i]))
        {
            Top = No[i];
        }

    }
    return Top;
}

int main()
{
    int Num[5] = { },Max = 0;

    Accept_Element(Num,5);
    Display_Element(Num,5);

    Max = Find_Maximum(Num,5);

    printf("\n\n\t Maximum Number Is %d",Max);

    getch();
    return 0;
}
