/*Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. 
Write necessary member function to initialize, read, and write data. Write also main function(Multiple Inheritance)*/


#include <iostream>
#include <cstring>

using namespace std;


class Person // Base class
{
protected:
    char name[50];
    int age;

public:
   
    void initializePerson(const char* n, int a)  // Function to initialize data
	{
        strncpy(name, n, sizeof(name));
        age = a;
    }

    
    void readPersonData()  // Function to read data
	{
        cout << "Enter person's name: ";
        cin.getline(name, 50);

        cout << "Enter person's age: ";
        cin >> age;
        cin.ignore(); // Clear the newline character from the input buffer
    }

    
    void displayPersonData()  // Function to display data
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person  // Derived class 1
{
private:
    float percentage;

public:
    
    void initializeStudent(float p)  // Function to initialize data for student
	{
        percentage = p;
    }

    
    void readStudentData()  // Function to read data for student
	{
        
        readPersonData();   // Call the read function of the base class

        cout << "Enter student's percentage: ";
        cin >> percentage;
    }

    
    void displayStudentData()   // Function to display data for student
	{
        
        displayPersonData();   // Call the display function of the base class

        cout << "Percentage: " << percentage << "%" << endl;
    }
};


class Teacher : public Person    // Derived class 2
{
private:
    float salary;

public:
    
    void initializeTeacher(float s)  // Function to initialize data for teacher
	{
        salary = s;
    }

    
    void readTeacherData()   // Function to read data for teacher
	{
        
        readPersonData();   // Call the read function of the base class

        cout << "Enter teacher's salary: ";
        cin >> salary;
    }

    
    void displayTeacherData()   // Function to display data for teacher
	{
       
        displayPersonData();    // Call the display function of the base class

        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Student student;   // Create objects of the derived classes
    Teacher teacher;

    
    cout << "Enter data for student:" << endl;    // Input data for student and teacher
    student.readStudentData();

    cout << "\nEnter data for teacher:" << endl;
    teacher.readTeacherData();

   
    cout << "\nStudent Details:" << endl;     // Display data for student and teacher
    student.displayStudentData();

    cout << "\nTeacher Details:" << endl;
    teacher.displayTeacherData();

    return 0;
}

