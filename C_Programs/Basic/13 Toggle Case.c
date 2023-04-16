#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n Enter A Character => ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        ch = ch + 32;
        printf("\n Lower case is %c",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        ch = ch -32;
        printf("\n Upper case is %c",ch);
    }
    else
    {
        printf("\n Given Character is Neither Upper Case Or Lower Case");
    }
   // printf("\n Toggle Case is %c",ch);
    getch();
    return 0;
}
