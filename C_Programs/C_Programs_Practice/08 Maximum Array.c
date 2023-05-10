#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = {34,56,89,45,32},Max = 0,i = 0;

    for( i = 0;i < 5;i++)
    {
        if(i == 0 || Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    printf("\n The Maximum Array Element is = %d",Max);

    getch();
    return 0;
}
