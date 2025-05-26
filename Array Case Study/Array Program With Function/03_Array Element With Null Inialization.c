#include<stdio.h>
#include<conio.h>

void Display_Array(int Arr[],int Size);

int main()
{
    int Num[4];

    Display_Array(Num,4);

    getch();
    return ;
}

void Display_Array(int Arr[],int Size)
{
    int i = 0;

    for(i = 0;i < Size;i++)
    {
        printf("\n Array Value is = %d",i+1,Arr[i]);
    }
    return;
}
