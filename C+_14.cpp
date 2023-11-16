//Write a C+ program of to sort the array using templates


#include <iostream>
#include<string>
using namespace std;


template <typename T>     // Template function for sorting an array
void bubbleSort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
	{
        for (int j = 0; j < size - i - 1; ++j) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                
                T temp = arr[j];     // Swap elements if they are in the wrong order
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


template <typename T>     // Template function for displaying an array
void displayArray(T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    
    int intArray[] = {5, 2, 9, 1, 5, 6};    // Sorting an array of integers
    int intSize = sizeof(intArray) / sizeof(int);
    
    cout << "Original array of integers:" << endl;
    displayArray(intArray, intSize);

    bubbleSort(intArray, intSize);

    cout << "Sorted array of integers:" << endl;
    displayArray(intArray, intSize);

    
    double doubleArray[] = {3.14, 1.1, 6.66, 2.22, 5.55};    // Sorting an array of doubles
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    
    cout << "\nOriginal array of doubles:" << endl;
    displayArray(doubleArray, doubleSize);

    bubbleSort(doubleArray, doubleSize);

    cout << "Sorted array of doubles:" << endl;
    displayArray(doubleArray, doubleSize);

    return 0;
}

