#include<stdio.h>
#include<conio.h>

int main()
{
    int Age = 0;
    Up:
    printf("\n Enter The Age => ");
    scanf("%d",&Age);

    if(Age < 0)
    {
        printf("\n Invalid Input");
        goto Up;
    }

    if(Age > 18)                                                                                                                                                                                                                   
    {
        printf("\n Eligible For Voting");
    }
    else
    {
        printf("\n Neither Eligible For Voting");
    }

    getch();
    return 0;
}
