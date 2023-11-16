//Write a program of two 1D Matrix Addition using Operator Overloading



#include<iostream>
#include<string>
using namespace std;

class Matrix {
private:
    int *arr;
    int size;

public:
    
    Matrix(int s) : size(s) // Constructor to initialize the matrix with given size
	{
        arr = new int[size];
    }

    
    Matrix operator+(const Matrix& other) const // Overloading + operator to perform matrix addition
	{
        Matrix result(size);

        for (int i = 0; i < size; ++i) 
		{
            result.arr[i] = arr[i] + other.arr[i];
        }

        return result;
    }

    
    void inputMatrix() // Function to input matrix elements
	{
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < size; ++i) 
		{
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    
    void displayMatrix() const // Function to display matrix elements
	{
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < size; ++i) 
		{
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    ~Matrix() // Destructor to free allocated memory
	{
        delete[] arr;
    }
};

int main() 
{
    int size;

    
    cout << "Enter the size of the matrices: ";  // Input the size of the matrices
    cin >> size;

    
    Matrix matrix1(size);    // Create two Matrix objects
    Matrix matrix2(size);

    
    cout << "For Matrix 1:" << endl;   // Input elements for the matrices
    matrix1.inputMatrix();
    cout << "For Matrix 2:" << endl;
    matrix2.inputMatrix();

    
    Matrix result = matrix1 + matrix2;   // Perform matrix addition using operator overloading

    
    cout << "Resultant Matrix after addition:" << endl;   // Display the result matrix
    result.displayMatrix();

    return 0;
}

