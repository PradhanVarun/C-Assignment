//Write a C+ program of two concatenate the two strings using operator overloading


#include <iostream>
#include <cstring> // for strcat function
using namespace std;

class Concatenator 
{
private:
    char* result; // Resultant concatenated string

public:
    
    Concatenator(const char* str1, const char* str2) // Constructor to initialize the result string
	{
        
        result = new char[strlen(str1) + strlen(str2) + 1];  // Allocate memory for the result string

        
        strcpy(result, str1);   // Concatenate the strings using strcat function
        strcat(result, str2);
    }

    
    ~Concatenator()  // Destructor to free dynamically allocated memory
	{
        delete[] result;
    }

    
    void displayConcatenatedString()  // Function to display the concatenated string
	{
        cout << "Concatenated String: " << result << endl;
    }
};

int main() 
{
    const char* string1 = "Hello, ";
    const char* string2 = "world!";

    
    Concatenator concatenator(string1, string2);  // Create Concatenator object and concatenate the strings

    
    concatenator.displayConcatenatedString();  // Display the concatenated string

    return 0;
}

