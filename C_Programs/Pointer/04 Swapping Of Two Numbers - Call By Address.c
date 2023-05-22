#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter Two Numbers For Swapping => ");
    scanf("%d%d",&No1,&No2);

    printf("\n\n Before Swapping Value %d & %d",No1,No2);

    Swap(&No1,&No2);

    printf("\n After Swapping Value %d & %d",No1,No2);
}
void Swap(int *N1,int *N2)
{
   int Temp = 0;

   Temp = *N1;
   *N1 = *N2;
   *N2 = Temp;

   getch();
   return;
}






















