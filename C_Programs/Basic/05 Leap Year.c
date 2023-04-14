#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n Enter The year => ");
    scanf("%d",&Year);

    if(Year % 4 == 0)
    {
        printf("\n %d is Leap Year",Year);

    }
    else
    {
        printf("\n %d is Not Leap Year",Year);
    }
    getch();
    return 0;
}
