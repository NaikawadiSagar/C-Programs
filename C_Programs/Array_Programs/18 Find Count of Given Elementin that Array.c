#include<stdio.h>>
#include<conio.h>

int main()
{
    int Arr[4] = { },i = 0,E_Cnt = 0;

    for(i = 0;i < 4;i++)
    {
      printf("\n Enter %d Element => ",i + 1);
      scanf("%d",&Arr[i]);
    }
    for(i = 0;i < 4;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            E_Cnt++;
        }
    }
    printf("\n Event Count in Given Array is %d",E_Cnt);

    getch();
    return 0;
}
