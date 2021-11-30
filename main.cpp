/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nikolai Coletta
 */

#include "std_lib_facilities.h"

void printRoots(double A, double B, double C);
bool hasRoots(double A, double B, double C);

int main() {
    double A, B, C;

    cout << "Please type a, b, and c from the form a*x^2 + b*x + c = 0, separated by a space:" << endl;
    cin >> A >> B >> C;

    printRoots(A, B, C);

    return 0;
}

void printRoots(double A, double B, double C) {
    if (hasRoots(A, B, C)) {
        double root1, root2;
        root1 = (-1 * B + sqrt(B*B - 4 * A * C)) / (2 * A);
        root2 = (-1 * B - sqrt(B*B - 4 * A * C)) / (2 * A);
        cout << "The roots are: " << root1 << " and " << root2;
    }
    else {
        cout << "The are no real roots for the given input.";
    }
}

bool hasRoots(double A, double B, double C) {
    if(B * B - 4 * A * C < 0)
        return false;
    return true;
}