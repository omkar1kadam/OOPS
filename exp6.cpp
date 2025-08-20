#include<iostream>
#include<iomanip>
using namespace std;

class Time {
	public:
		int hours;
		int minutes;
		
		Time(){
			hours = 0;
			minutes = 0;
		}
		
		/*void take_input(){
			cout << " Enter the hours value:: ";
			cin >> hours;
			
			cout << " Enter the minutes value:: ";
			cin >> minutes;
		}
		
		Time operator <<(int){
			Time temp2;
			cout << " Time now is:: ";
			cout << setw(2) << setfill('0') << hours;
			cout << ":";
			cout << setw(2) << setfill('0') << minutes << endl;
			return temp2;
		}
		Time operator >>(int hours1){
			Time temp;
			temp.hours = hours1;
			hours = temp.hours;
			return temp;
		}*/
		
		friend istream&operator >> (istream &in,Time &t1);
		friend ostream&operator >> (ostream &out,Time &t1);
};

istream&operator >>(istream &in, Time &t1){
	cout << " Enter the hours value:: ";
	in >> t1.hours;
	cout << " Enter the minutes value:: ";
	in >> t1.minutes;
	return in;
}

ostream&operator <<(ostream &out, Time &t1){
	if (t1.minutes >= 60){
		t1.hours = t1.hours + t1.minutes / 60;;
		t1.minutes = t1.minutes % 60;
	}
	cout << " Time now is:: ";
	out << setw(2) << setfill('0') << t1.hours;
	out << ":";
	out << setw(2) << setfill('0') << t1.minutes << endl;
	return out;
}

int main() {
	// using the friend function
	Time t1;
	cin>>t1;
	cout<<t1;
}
