#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int marks;
    
        Student(string n, int m){
            name = n;
            marks = m;
        }
        
        void display() const {
            cout << name <<"-" << marks << endl;
        }
};

bool sortByName(const Student &s1,const Student &s2){
    return s1.name < s2.name;
}
bool sortByMarks(const Student &s1, const Student &s2){
    return s1.marks > s2.marks;
}

int main(){
    vector<Student> class1;
    class1.push_back(Student("omkar",19));
    class1.push_back(Student("siddhi",24));
    class1.push_back(Student("idk",99));
    class1.push_back(Student("really_idk",69));
    
    for (const auto &obj : class1) obj.display();
    
    sort(class1.begin(),class1.end(),sortByName);
    for(const auto &obj1 : class1) obj1.display();
    
    sort(class1.begin(),class1.end(),sortByMarks);
    for(const auto &obj2 : class1) obj2.display();
    
    
    cout << "Code Execution Successful" << endl;
    return 0;
}
