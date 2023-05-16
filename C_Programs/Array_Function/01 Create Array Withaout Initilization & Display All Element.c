#include<stdio.h>
#include<conio.h>

void Accept_Element(int *Num,int Cnt)
{
    int i = 0;

    for(i = 0;i < Cnt;i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Num[i]);
    }
}
void Display_Element(int *No,int Tmp)
{
    int i = 0;

    for( i = 0;i < Tmp;i++)
    {
        printf("\n\t %d Element Is => %d",i +1,No[i]);
    }
}

int main()
{
    int Arr[6]= { };

    Accept_Element(Arr,6);
    Display_Element(Arr,6);
    getch();
}
