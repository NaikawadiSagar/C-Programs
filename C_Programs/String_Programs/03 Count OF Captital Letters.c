#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[40] = {};
    int Count = 0,i = 0;

    printf("\n Enter A String => ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            Count++;
        }
        i++;
    }
    printf("\n Count Of Capital Letters is %d",Count);

    getch();
    return 0;
}
