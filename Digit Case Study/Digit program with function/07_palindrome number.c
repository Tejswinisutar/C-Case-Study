#include<stdio.h>
#include<conio.h>

int Palindrome(int num);

int main()
{
  int num,Count;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Palindrome(num);\

  if(Count == num)
  {
  printf("\n Given number %d is Palindrome",num);
  }
  else
  {
  printf("\n  Given Number %d  is Not Palindrome",num);
  }

  getch();
  return 0;
}
int Palindrome(int num)
{
    int Count = 0,rem = 0;

    while(num != 0)
    {
        Count = num % 10;
        rem = (rem * 10)+ Count;
        num /= 10;
    }
    return rem;
}
