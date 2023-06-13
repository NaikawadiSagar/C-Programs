#include<stdio.h>
#include<conio.h>

int Pcount = 3;

struct product
{
    int P_Id;
    char P_Name[50];
    float P_price;
    float S_price;
};

int main()
{
    int i = 0;
    struct product Pobj[Pcount];

    printf("\n Accepting Student Details => ");

    for(i = 0;i < Pcount;i++)
    {
        printf("\n Enter Product Id ->");
        scanf("%d",&Pobj[i].P_Id);

        fflush(stdin);

        printf("\n Enter Product Name =>");
        gets(Pobj[i].P_Name);

        printf("\n Enter Product purchase price => ");
        scanf("%f",&Pobj[i].P_price);

        printf("\n Enter product Selling Price => ");
        scanf("%f",&Pobj[i].S_price);
    }
    getch();
    system("cls");

    for(i = 0;i < Pcount;i++)
    {
        printf("\n %d Accepting Student Details",i+1);

        printf("\n\n Product Id = %d",Pobj[i].P_Id);
        printf("\n Product Name = %s",Pobj[i].P_Name);
        printf("\n Product Purchase Price = %0.2f",Pobj[i].P_price);
        printf("\n Product Selling Price = %0.2f",Pobj[i].S_price);

        printf("\n\n ==========*******==========");
    }
    getch();
    return 0;
}
