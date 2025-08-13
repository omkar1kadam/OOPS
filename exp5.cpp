#include<iostream>
using namespace std;

class Number {
	private:
		int value;
		int custom_increment;
		
	public:
		
		// Set value 
		Number(int v,int inc){
			value = v;
			custom_increment = inc;
		}
		
		// Display value
		void display_value(){
			cout << "Value is : " << value << endl;
			cout << "Increment is : " << custom_increment << endl;
		}
		
		
		// member function
		Number operator++(){
			//Number temp = this;
			value = value + custom_increment;
			return *this;
		}
		
		// friend fucntion
		friend Number operator++(Number &obj,int);
	
};

// Friend function
Number operator++(Number &obj,int){
	Number temp = obj;
	obj.value = obj.value + obj.custom_increment;
	return temp;
}

int main() {
 
    cout << "Creating obj1" << endl;
    cout << "Enter the value you want to increment with member function: ";
    int value1;
    cin >> value1;
    cout << "Enter the value of increment: ";
    int inc1;
    cin >> inc1;
    
   
    Number obj1(value1, inc1);  
    obj1.display_value();
    
    obj1++;
    obj1.display_value(); 

    
    cout << "Creating obj2" << endl;
    cout << "Enter the value you want to increment with friend function: ";
    int value2;
    cin >> value2;
    cout << "Enter the value of increment: ";
    int inc2;
    cin >> inc2;

    
    Number obj2(value2, inc2);  
    obj2.display_value();
    
    ++obj2;
    obj2.display_value();

    return 0;
}
