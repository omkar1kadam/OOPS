#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
    
    public:
        void getPersonDetails(){
            cout << "Enter Name :";
            getline(cin,name);
            cout << "Enter Age:";
            cin>>age;
        }
        void displayPersonDetails(){
            cout << "Name: " << name;
            cout << "Age: " << age;
        }
};

class Acedemic{
    protected:
        int rollNumber;
        int marks[3];
    
    public:
        void getAcedemicDetails(){
            cout << "Enter rollNumber :";
            cin>>rollNumber;
            cout << "Enter Marks:";
            for (int i=0;i<3;i++){
                cin>>marks[i];
            }
        }
        void displayAcedemicDetails(){
            cout << "rollNumber: " << rollNumber;
            cout << "marks: ";
            for (int i=0;i<3;i++){
                cout << marks[i];
            }
        }
};

class Student : public Person, public Acedemic{
    private:
        float totalMarks;
        float percentage;
    
    public:
        void calculateResult(){
            totalMarks = marks[0] + marks[1] + marks[2];
            percentage = totalMarks/3.0;
        }
        
        void displayResult(){
            cout << "Percentage: " << percentage << endl;
        }
};


int main(){
    Student omkar;
    omkar.getPersonDetails();
    omkar.displayPersonDetails();
    
    omkar.getAcedemicDetails();
    omkar.displayAcedemicDetails();
    
    omkar.calculateResult();
    omkar.displayResult();
    
    cout << "Code Execution Successful" << endl;
    return 0;
}
