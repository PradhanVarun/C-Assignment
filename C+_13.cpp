//Create an example of use delete and new operator.


#include <iostream>
using namespace std;

int main() 
{
   
    int* dynamicInt = new int;       // Dynamic memory allocation using 'new'  // Allocating memory for an integer

    
    *dynamicInt = 42;    // Assigning a value to the dynamically allocated memory

    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;

    
    int* dynamicArray = new int[5]; // Dynamic memory allocation for an array using 'new'    // Allocating memory for an array of integers

    
    for (int i = 0; i < 5; ++i)     // Assigning values to the dynamically allocated array
	{
        dynamicArray[i] = i * 10;
    }

    cout << "Dynamically allocated array values:" << endl;
    for (int i = 0; i < 5; ++i) 
	{
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    
    delete dynamicInt;     // Deallocating memory using 'delete' for a single variable

    
    delete[] dynamicArray;    // Deallocating memory using 'delete[]' for an array

    return 0;
}

