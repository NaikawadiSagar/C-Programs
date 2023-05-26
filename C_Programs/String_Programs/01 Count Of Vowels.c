#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[80] = {'\0'};
    int Cnt = 0,i = 0;

    printf("\n Enter a String => ");
    gets(cSrc);

    while(cSrc[i]!= '\0')
    {
        if(cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U' || cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u')
        {
            Cnt++;
        }
        i++;
    }
    printf("\n Vowel Count is %d",Cnt);

    getch();
    return 0;
}
