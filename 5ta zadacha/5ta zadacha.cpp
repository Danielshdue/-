﻿// 5ta zadacha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
int main()
{ //po hubav 3-ugulnik pri vuvedeno n
    int n;
    scanf_s("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = n; j > i; j--)
            {
                printf_s(" ");
            }
            for (int j = i; j > 0; j--)
            {
                printf_s("%d",j);
            }
            for (int j = 0; j <= i; j++)
            {
                printf_s("%d", j);
            }
            printf_s("\n");
        }
    }
    else
        printf_s("Use a valid value.");
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
