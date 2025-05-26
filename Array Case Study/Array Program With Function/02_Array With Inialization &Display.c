#include<stdio.h>
#include<conio.h>

void Display_Array(int Arr[],int Size);

int main()
{
    int Num[5] = {};

    Display_Array(Num,5);

    getch();
    return 0;
}

void Display_Array(int Arr[],int Size)
{
    int i = 0;

    for(i = 0;i < Size;i++)
    {
        printf("\n Value of Array is =%d.",Arr[i]);
    }
    return ;
}
