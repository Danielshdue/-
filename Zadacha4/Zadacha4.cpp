// Zadacha4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    //Решение на ax^2+bx+c=0 при зададени a,b,c.
    double a, b, c;
    printf_s("a= ");
    scanf_s("%lf", &a);
    printf_s("b= ");
    scanf_s("%lf", &b);
    printf_s("c= ");
    scanf_s("%lf", &c);
    if (a != 0)
    {
        double D = pow(b,2) - 4 * a * c;
        if (D < 0)
            printf_s("There are no real roots.");
        else
            if (D == 0)
            {
                double x = (-1*b) / 2*a;
                printf_s("The root x= %.2lf", x);
            }
            else
            {
                double x1 = ((-1 * b) + sqrt(D)) / 2 * a;
                double x2 = ((-1 * b) - sqrt(D)) / 2 * a;
                printf_s("The roots are x1= %.2lf and x2= %.2lf", x1, x2);
            }
    }
    else
        printf_s("This is not a quadratic equation.");
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
