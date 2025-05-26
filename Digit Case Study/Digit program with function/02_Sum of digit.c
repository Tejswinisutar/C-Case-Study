#include<stdio.h>
#include<conio.h>

int Scnt(int num);

int main()
{
  int num,Sum;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Sum = Scnt(num);

  printf("\n Sum of Digit Number = %d",Sum);

  getch();
  return 0;
}
int Scnt(int num)
{
    int Sum = 0, rem;

    while(num != 0)
    {
        rem = num%10;
        num /= 10;
        Sum += rem;
    }
    return Sum;
}

