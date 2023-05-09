#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[60] = "";
    int S_Cnt = 0,i= 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i] == ' ' || cSrc[i] <= '\t')
        {
            S_Cnt++;
        }
        i++;
    }
    printf("\n White Spaces is = %d",S_Cnt);

    getch();
    return 0;
}
