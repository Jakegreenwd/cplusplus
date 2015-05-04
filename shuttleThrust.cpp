#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	double srbThrust,ssmeThrust, totalThrust; //declare variables
	
	cout << "Enter SSME thrust in kN: "; //ask user for number
	cin >> ssmeThrust; //put number in ssmeThrust variable
	cout << "Enter SRB thrust in kN: "; //ask user for number
	cin >> srbThrust; //put number in srbThrust varible
	
	ssmeThrust = ssmeThrust * 3; //triple the number in ssmeThrust (3 main engines)
	srbThrust = srbThrust * 2; //double the number in srbThrust (2 solid rockets)
	
	totalThrust = ssmeThrust + srbThrust; //add both figures together for total
	
	cout << "Total thrust of Space Shuttle at liftoff was: " << totalThrust << "kN "<<"\n"; //print out total with formatting
	
	return 0;
	
	}