#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = { },i = 0,Src = 0;

    for(i = 0;i < 5;i++)
    {
        printf("\n Enter %d Elements = > ",i + 1);
        scanf("%d",&Arr[i]);
    }
    printf("\n Enter the Searching Number => ");
    scanf("%d",&Src);

    for(i = 0;i < 5;i++)
    {
        if(Arr[i] == Src)
        {
            break;
        }
    }
    if(i < 5)
    {
        printf("\n Element is Found on index %d",i + 1);
    }
    else
    {
        printf("\n Element is Not Found ");
    }
    getch();
    return 0;

}
