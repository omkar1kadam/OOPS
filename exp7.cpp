// Implement a template function sortArray() to sort an array of any data type (integers, floats, or characters).
#include<iostream>
using namespace std;

template<typename T>
void sortArray(T arr[], int size){
	for (int i =0 ;i <size; i++){
		for (int j=0; j<size-1; j++){
			if (arr[i] <= arr[j]){
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
 
template<typename T>
void printArray(T arr[], int size){
	for(int i=0;i<size; i++){
		cout << arr[i] <<" ";
	}
}


int main () {
	// for integer
	cout << "Integers :";
	int arr1[10] = {5,6,4,8,2,3,4,1,0,5};
	sortArray(arr1,10);
	printArray(arr1,10);
	cout << " " << endl;
	
	
	cout << "FLoat :";
	// for float 
	float arr2[10] = {5.1,6.2,8.9,6.4,1.0,7.5,2.3,6.1,9.1,0.1};
	sortArray(arr2,10);
	printArray(arr2,10);
	
	cout << " " << endl;
	cout << "char :";
	// for char
	char arr3[10] = {'g','f','h','u','c','e','k','s','h','z'};
	sortArray(arr3,10);
	printArray(arr3,10);
	
	cout << " " << endl; 
	

	return 0;
}
