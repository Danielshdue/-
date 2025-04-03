// Zadacha6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf_s("a= ");
    scanf_s("%lf", &a);
    printf_s("b= ");
    scanf_s("%lf", &b);
    printf_s("c= ");
    scanf_s("%lf", &c);
    int k;
    printf_s("k= ");
    scanf_s("%d", &k);
    switch (k)
    {
    case 1:
        printf_s("Triangle");
        if (a + b > c && a + c > b && b + c > a)
        {
            double p = (a + b + c) / 2;
            double area = sqrt(p * (p - a) * (p - b) * (p - c));
            printf_s("The area of the triangle is %.2lf", area);
        }
        else
            printf_s("a, b and c don't form a triangle.");
        break;
    case 2:
        printf_s("Square");
        double areas = a * a;
        printf_s("The area of the square is %lf", areas);
        break;
    case 3:
        printf_s("Rectangle");
        double arear = a * b;
        printf_s("The area of the rectangle is %lf", arear);
        break;
    case 4:
        printf_s("Circle");
        double areac = a * a*3.14;
        printf_s("The area of the circle is %lf", areac);
        break;
    default:printf_s("Invalid value of k");
        break;


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
