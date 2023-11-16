//Write a C+ program of to swap the two values using templates


#include <iostream>
#include<string>
using namespace std;


template <typename T>      // Template function to swap two values
void swapValues(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    
    int num1 = 5, num2 = 10; 
    cout << "Before swapping - num1: " << num1 << ", num2: " << num2 << endl;
    swapValues(num1, num2);     // Swap integers
    cout << "After swapping - num1: " << num1 << ", num2: " << num2 << endl;

    
    double double1 = 3.14, double2 = 6.28;
    cout << "\nBefore swapping - double1: " << double1 << ", double2: " << double2 << endl;
    swapValues(double1, double2);     // Swap double values
    cout << "After swapping - double1: " << double1 << ", double2: " << double2 << endl;

    
    char char1 = 'A', char2 = 'B';
    cout << "\nBefore swapping - char1: " << char1 << ", char2: " << char2 << endl;
    swapValues(char1, char2);     // Swap characters
    cout << "After swapping - char1: " << char1 << ", char2: " << char2 << endl;

    return 0;
}

