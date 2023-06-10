
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct product
{
    int P_id;
    char P_Name[50];
    float P_price;
    float S_price;
};
int main()
{
    struct product obj1,obj2 = {24,"Bulb",70.80,120.00};

    obj1.P_id = 17;
    strcpy(obj1.P_Name,"fan");
    obj1.P_price = 600.00;
    obj1.S_price = 800.70;

    printf("\n\n 1st Product Details Are =>");

    printf("\n\n product id =   %d",obj1.P_id);
    printf("\n Product Name = %s",obj1.P_Name);
    printf("\n Product purchase price = %0.2f",obj1.P_price);
    printf("\n Product Selling price  = %0.2f",obj1.S_price);

    printf("\n\n ****** Press Any Key To Continue ******");
    getch();
    
    printf("\n\n 2nd Product Details Are =>");

    printf("\n\n product id =   %d",obj2.P_id);
    printf("\n Product Name = %s",obj2.P_Name);
    printf("\n Product purchase price = %0.2f",obj2.P_price);
    printf("\n Product Selling price  = %0.2f",obj2.S_price);

    getch();
    return 0;
}
