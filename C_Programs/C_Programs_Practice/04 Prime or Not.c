#include<stdio.h>
#include<conio.h>

int main()
{
    int no = 0,i = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&no);

    for(i = 2;i < no;i++)
    {
        if(no % i == 0)
        {
            break;
        }
    }

    if(no == i)
    {
        printf("\n prime");
    }
    else
    {
        printf("\n not prime");
    }
    getch();
    return 0;
}
