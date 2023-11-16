// Write a program of find the simple interest using construct with dynamic initialization. Make constructor like Interest(int principal, int year, int rate) Interest (int principal, int year, float rate = 2.5)



#include<iostream>
#include<string>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    
    Interest(int p, int y, int r) : principal(p), year(y), rate(static_cast<float>(r)) // Constructor with dynamic initialization using integer rate
	{	// No need for any body in the constructor
    
	}

    
    Interest(int p, int y, float r = 2.5) : principal(p), year(y), rate(r) // Constructor with dynamic initialization using default float rate
	{
        // No need for any body in the constructor
    }

    
    float calculateSimpleInterest()    // Function to calculate simple interest
	{
        return (principal * year * rate) / 100;
    }
};

int main() 
{
                              // Creating objects of Interest class with dynamic initialization
    Interest obj1(1000, 2, 5);  // Using integer rate
    Interest obj2(1500, 3);     // Using default float rate

    // Calculating and displaying simple interest for each object
    cout << "Simple Interest 1: " << obj1.calculateSimpleInterest() << endl;
    cout << "Simple Interest 2: " << obj2.calculateSimpleInterest() << endl;

    return 0;
}

