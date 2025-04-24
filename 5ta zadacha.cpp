// 5ta zadacha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
int main()
{
    //dvumerna matrica i suma na vseki red
    const int n = 3, m = 4;
    int matrica[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf_s("%d", &matrica[i][j]);
        }
    }
    int sumi[n];
    for (int i = 0; i < n; i++)
    {
        int suma = 0;
        for (int j = 0; j < m; j++)
        {
            suma += matrica[i][j];
        }
        sumi[i] = suma;
    }
    
    for (int i = 0; i < n; i++)
    {
        int red = i+1;
        printf("The sum of row %d is %d\n", red, sumi[i]);
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
