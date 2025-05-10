// 2ra zadacha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
int main()
{
    //Proizvedenie na proizvolno vuvedeni polojitelni chisla do vuvejdane na 0
    int sum = 1;
    int i;
    scanf_s("%d", &i);
    if(i==0)printf_s("Sum 0");
    else
    {
        while (i != 0)
        {
            sum = sum * i;
            scanf_s("%d", &i);
        }
        printf_s("Sum = %d", sum);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
