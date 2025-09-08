#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;
        
    public:
        Rectangle(){
            length = 0;
            width = 0;
        }
        Rectangle(int l, int w){
            length = l;
            width = w;
        }
        
        void calcArea(){
            cout << length*width;
        }
};

int main(){
    Rectangle r1;
    r1.calcArea();
    cout << endl;
    
    Rectangle r2(10,5);
    r2.calcArea();
    cout << endl;
    
    cout << "Code Execution Successful" << endl;
    return 0;
}
