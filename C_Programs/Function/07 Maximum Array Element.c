#include<stdio.h>
#include<conio.h>

void Accept_Array_Element(int *Ptr,int Tmp)
{
    int i = 0;

    for(i = 0;i < Tmp;i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Ptr[i]);
    }
}

int Calculate_Maximum_Array(int *Num,int Cnt)
{
    int Top = 0,i = 0;

    for(i= 0;i < Cnt;i++)
    {
        if(i == 0 || Num[i] > Top)
        {
            Top = Num[i];
        }
    }
    return Top;
}

int main()
{
    int Arr[5] = { },Max = 0;

    Accept_Array_Element(Arr,5);

    Max = Calculate_Maximum_Array(Arr,5);

    printf("\n Maximum Array Element is  = %d",Max);

    getch();
    return 0;
}
