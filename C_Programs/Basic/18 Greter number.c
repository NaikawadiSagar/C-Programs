#include<stdio.h>
#include<conio.h>

int greater_Number(int *Num1,int *Num2)
{
  if(*Num1 >= *Num2)
  {
      printf("\n Number %d is Greater",*Num1);
  }
  else
  {
      printf("\n Number %d is Greater",*Num2);
  }
}

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter Two Number => ");
    scanf("%d%d",&No1,&No2);

    greater_Number(&No1,&No2);

    getch();
    return 0;


}
