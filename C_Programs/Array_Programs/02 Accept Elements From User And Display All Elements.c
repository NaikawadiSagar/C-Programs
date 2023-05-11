#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = { };

    printf("\n Enter 1st Element => ");
    scanf("%d",&Arr[0]);

    printf("\n Enter 2nd Element => ");
    scanf("%d",&Arr[1]);

    printf("\n Enter 3rd Element => ");
    scanf("%d",&Arr[2]);

    printf("\n Enter 4th Element => ");
    scanf("%d",&Arr[3]);

    printf("\n Enter 5th Element => ");
    scanf("%d",&Arr[4]);

    printf("\n First Element is  = %d",Arr[0]);
    printf("\n Second Element is = %d",Arr[1]);
    printf("\n Third Element is  = %d",Arr[2]);
    printf("\n Fourth Element is = %d",Arr[3]);
    printf("\n Fifth Element is  = %d",Arr[4]);

    getch();
    return 0;
}
