// 2ra zadacha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
int main()
{
    //suma i sredno aritmetichno na 10 chisla tip double
    double masiv[10];
    double sum=0;
    double sredno = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf_s("%lf", &masiv[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += masiv[i];
    }
    sredno = sum / 10;
    printf("The sum equals %lf\n", sum);
    printf("The average equals %lf", sredno);
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
