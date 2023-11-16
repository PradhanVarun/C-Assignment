//Write a C+ program to swap the two numbers using friend function



#include <iostream>
#include<string>
using namespace std;


class NumberSwap;    // Forward declaration of the class


void swapNumbers(NumberSwap& num1, NumberSwap& num2);    // Friend function to swap two numbers


class NumberSwap    // Class definition
{
private:
    int num;

public:
    
    NumberSwap(int n) : num(n)    // Constructor to initialize the number 
	{
	}

    
    void displayNumber() const     // Function to display the number
	{
        cout << "Number: " << num << endl;
    }

    
    friend void swapNumbers(NumberSwap& num1, NumberSwap& num2);    // Friend function declaration
};


void swapNumbers(NumberSwap& num1, NumberSwap& num2)    // Friend function definition
{
   
    int temp = num1.num;      // Swapping the numbers
    num1.num = num2.num;
    num2.num = temp;
}

int main() 
{
    
    NumberSwap number1(5);    // Create two NumberSwap objects
    NumberSwap number2(10);

    
    cout << "Before swapping:" << endl;    // Display the numbers before swapping
    number1.displayNumber();
    number2.displayNumber();
    cout << endl;

   
    swapNumbers(number1, number2);    // Swap the numbers using the friend function

   
    cout << "After swapping:" << endl;     // Display the numbers after swapping
    number1.displayNumber();
    number2.displayNumber();

    return 0;
}

