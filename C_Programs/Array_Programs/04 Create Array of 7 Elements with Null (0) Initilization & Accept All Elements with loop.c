#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {},i = 0;

    for(i = 0;i <= 6;i++)
    {
        printf("\n Enter %d Element => ",i +1);
        scanf("%d",&Arr[i]);
    }

    printf("\n\n **** DISPLAY ALL ELEMENTS ****");

    for(i = 0;i <= 6;i++)
    {
        printf("\n\t %d Element is %d",Arr[i],i +1);

    }

    getch();
    return 0;


}
