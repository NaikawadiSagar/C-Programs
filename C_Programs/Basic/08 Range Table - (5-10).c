#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,R,C;

    for(R = 1;R<=10;R++)
    {
        for(C = 5;C<=10;C++)
        {
            printf("\t %d",R*C);
        }
        printf("\n");
    }


    getch();
    return 0;
}
