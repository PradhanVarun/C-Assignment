/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. 
Total runs, Average runs, and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)*/


#include <iostream>
#include <cstring>

using namespace std;


class Cricketer   // Base class
{
protected:
    char name[50];
    int age;

public:
    
    void inputData()  // Function to input data for the cricketer
	{
        cout << "Enter cricketer's name: ";
        cin.getline(name, 50);

        cout << "Enter cricketer's age: ";
        cin >> age;
        cin.ignore(); // Clear the newline character from the input buffer
    }

   
    void displayData()  // Function to display data for the cricketer
	{
        cout << "Cricketer's Name: " << name << endl;
        cout << "Cricketer's Age: " << age << endl;
    }
};


class Batsman : public Cricketer   // Derived class
{
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    
    void inputBatsmanData()  // Function to input data for the batsman (derived class)
	{
        
        inputData();   // Call the input function of the base class

        cout << "Enter total runs scored by the batsman: ";
        cin >> totalRuns;

        cout << "Enter average runs scored by the batsman: ";
        cin >> averageRuns;

        cout << "Enter best performance of the batsman: ";
        cin >> bestPerformance;
    }

    
    void calculateAverageRuns()  // Function to calculate average runs
	{
        averageRuns = totalRuns / 5.0; // Assuming the batsman played 5 innings
    }

    
    void displayBatsmanData()   // Function to display data for the batsman
	{
        
        displayData();   // Call the display function of the base class

        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    
    Batsman batsman;   // Create an object of the derived class

   
    batsman.inputBatsmanData();   // Input data for the batsman

    
    batsman.calculateAverageRuns();   // Calculate average runs

   
    batsman.displayBatsmanData();    // Display data for the batsman

    return 0;
}

