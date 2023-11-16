// Write a C+ program to find the multiplication values and the cubic values using inline function


#include<iostream>
#include<string>
using namespace std;


inline int multiply(int a, int b) // Inline function to calculate multiplication
{
    return a * b;
}


inline int cube(int x) // Inline function to calculate cubic value
{
    return x * x * x;
}

int main() {
    int num1, num2;

    
    cout << "Enter first number: ";   // Input two numbers from the user
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl; // Calculate and display multiplication using inline function

    
    cout << "Cubic value of " << num1 << " is: " << cube(num1) << endl;    // Calculate and display cubic values using inline function
    cout << "Cubic value of " << num2 << " is: " << cube(num2) << endl;

    return 0;
}

