#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	
	char lengthType; // declare variables
	double length, meter, feet;
	
	cout << "Enter length to be converted: "; //ask user for length
	cin >> length;
	cout << "What is the unit? Type M for meter or F for feet: "; //ask user for unit
	cin >> lengthType;
	
	if(lengthType == 'M') { //if user specified M for meter, convert length to feet
		feet = length * 3.2808;
		cout << feet << " feet"; //write the answer to the console
	}
	else {
		meter = length /  3.2808; //otherwise convert length to meters
		cout << meter << " meters"; //write the anseer to the console
	}
		
	return 0;		
		
	
}