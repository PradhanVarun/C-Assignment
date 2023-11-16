//Write a C+ program to read and write data into file


#include <iostream>
#include <fstream> // Required for file operations
#include <string>
using namespace std;

int main() 
{
    string data;

    
    cout << "Enter data to write to file: ";    // Get data from the user
    getline(cin, data);

    
    ofstream outFile("output.txt");   // Open a file for writing

    
    if (outFile.is_open())     // Check if the file is open
	{
        
        outFile << data << endl;    // Write data to the file

       
        outFile.close();     // Close the file

        cout << "Data has been written to the file." << endl;
    } else 
	{
        cout << "Error opening the file for writing." << endl;
        return 1;
    }

    
    ifstream inFile("output.txt");    // Open the file for reading

    
    if (inFile.is_open())     // Check if the file is open
	{
        string readData;

        
        getline(inFile, readData);    // Read data from the file

        
        inFile.close();     // Close the file

        cout << "Data read from the file: " << readData << endl;
    } else 
	{
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    return 0;
}

