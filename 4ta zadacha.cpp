// 4ta zadacha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
int main()
{
    //naj malko chislo v masiv i nomer na naj golqmoto
    const int n = 8;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        scanf_s("%lf", &a[i]);
    }
    double min = DBL_MAX_10_EXP;
    double max = DBL_MIN_10_EXP;
    int poziciqmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            poziciqmax = 0;
            poziciqmax = i + 1;
        }
        if (a[i] <min)
        {
            min = a[i];

        }
    }
    printf("The smallest number is %.2lf\n", min);
    printf("The largest number is %.2lf in position %d", max,poziciqmax);
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
