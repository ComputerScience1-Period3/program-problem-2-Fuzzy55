/*

Steve Wang 27/9/17

Assignment Name : Take In Data

Takes in and does something with data

*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <cmath>
#include <complex>
#include <vector>
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std; //*

					 // Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {

	cout << "What is your grade in CompSci?" << endl;
	vector<int> grades;
	int p;
	cin >> p;
	grades.push_back(p);
	cout << "What is your grade in your math class" << endl;
	cin >> p;
	grades.push_back(p);
	cout << "Your average grade for those classes is " << (grades[0] + grades[1]) / 2 << endl;
	cout << "Type in all the digits of pi you know" << endl;
	unsigned long int pi;
	cin >> pi;
	unsigned long int numDigits = ceil(log10(pi));
	cout << "You know " << numDigits << " digits of pi" << endl;
	cout << "What lunch do you have?" << endl;
	char lunch;
	cin >> lunch;
	cout << "You have " << lunch << " lunch" << endl;
	cout << "Do you like this?(1/0)" << endl;
	bool liked;
	cin >> liked;
	cout << boolalpha << "It is " << liked << " that you like this" << endl;

	pause(); // pauses to see the displayed text
}