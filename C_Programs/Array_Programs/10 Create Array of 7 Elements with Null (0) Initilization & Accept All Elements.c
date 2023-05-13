#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};

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

    printf("\n Enter 6th Element => ");
    scanf("%d",&Arr[5]);

    printf("\n Enter 7th Element => ");
    scanf("%d",&Arr[6]);

    printf("\n\n **** DISPLAY ALL ELEMENTS ****");

    printf("\n\t 1st Element is %d",Arr[0]);
    printf("\n\t 2nd Element is %d",Arr[1]);
    printf("\n\t 3rd Element is %d",Arr[2]);
    printf("\n\t 4th Element is %d",Arr[3]);
    printf("\n\t 5th Element is %d",Arr[4]);
    printf("\n\t 6th Element is %d",Arr[5]);
    printf("\n\t 7th Element is %d",Arr[6]);

    getch();
    return 0;


}
