#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Assingment 1" << endl;
	cout << "Convert Arabic numerals to Roman Numerals" << endl;
	cout << "by Jhonil Ducusin" << endl;
	cout << "2021-10-1" << endl;
	cout << " " << endl;

	string roman; // empty roman 
	int arabicNumber; // the number that is typed in
	int placevalue;   // in what place of the number they typed in for example 1200 the 1 in 1200 is a thousand value
	char again = 'Y';

	while (again == 'y' || again == 'Y')
	 {
	
		cout << "Enter a value in the range 1 through 3999:";
		cin >> arabicNumber;

		if ((arabicNumber >= 4000) || (arabicNumber <= 0)) { // if the number is greater that 4000 or 0 the number is out of range
			cout << endl << "That number is out of range" << endl;
		}
		else {


			if (arabicNumber >= 1000) {
				placevalue = (arabicNumber / 1000); // gives how many thousands there are

				for (int i = 0; i < placevalue; i++) { // if  the number entered in the program is lower than a thousand M is not going to show up

					roman += 'M';

				}
				arabicNumber %= 1000; // turn the remainder of a thousandtwohundred (1222) to 222  

			}
			if (arabicNumber >= 100) {
				placevalue = (arabicNumber / 100);

				if (placevalue == 9) { // 100 take away from the thousand = 900
					roman += "CM";
				}
				else if (placevalue >= 5) { 
					roman += 'D';

					for (int i = 0; i < placevalue - 5; i++) { // this checks to see for every number higher than M
						roman += 'C';
					}
				}
				else if (placevalue == 4) {
					roman += "CD"; // 100 take away from 500 = 400
				}
				else if (placevalue >= 1) {

					for (int i = 0; i < placevalue; i++) { 
						roman += 'C';
					}
				}
				arabicNumber %= 100; // turn the remainder hundred of a 222, left is 22 

			}

			if (arabicNumber >= 10) { 
				placevalue = (arabicNumber / 10); 

				if (placevalue == 9) { // take away 10 of 100 = 90
					roman += "XC";
				}
				else if (placevalue >= 5) {
					roman += 'L';

					for (int i = 0; i < placevalue - 5; i++) { 
						roman += 'X';
					}

				}
				else if (placevalue == 4) { // take away ten of 50 = 40
					roman += "XL"; 

				}
				else if (placevalue >= 1) {

					for (int i = 0; i < placevalue; i++) {
						roman += 'X';
					}

				}
				arabicNumber %= 10; // turn the remainder of 10 to a single digit which is ones 


			}

			if (arabicNumber >= 1) {
				placevalue = arabicNumber;

				if (placevalue == 9) {
					roman += "IX";
				}
				else if (placevalue >= 5) {
					roman += "V";


					for (int i = 0; i < placevalue - 5; i++) {
						roman += 'I';
					}
				}
				else if (placevalue == 4) {
					roman += "IV";

				}
				else if (placevalue >= 1) {

					for (int i = 0; i < placevalue; i++) {
						roman += 'I';

					}
				}
			}

		}
		cout << roman << endl; 
		cout << "Would you like to convert another number (y/n)"; 
		cin >> again;
	}
	return 0;
}