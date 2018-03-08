#include<fstream> //this makes a new type called off stream (ofstream) and ifstream, they're like char or bool
#include<iostream>
using namespace std;


int main() { // create a program to create/write to a file
	int number;
	ofstream out_a; //this is used to output to a file
	char cont = 'y';

	out_a.open("numbers.dat"); //this .open is calling a function inside of out_a (this command also creates the file numbers.dat)
	if (out_a.fail()) {
		cout << "Unable to open the file numbers.dat" << endl;
		exit (1);
	}

	while (cont == 'y') {
		cout << "Type a number to save to the file: ";
		cin >> number;

		out_a << number; //this outputs our "number" to the numbers.dat file

		cout << "Type another number (y/n): ";
		cin >> cont;
	}

	return 0;
}

int secondMain() { //create a program to read from a file (pretend this is in a differnt .cpp file)
	int number = 0;
	ifstream in_a; 

	in_a.open("numbers.dat"); // this is to open the file so we can start reading from
	if (in_a.fail()) {
		cout << "Unable to read file numbers.dat" << endl;
		exit(1);
	}
	int one, two, three;

	in_a >> one >> two >> three; // this sets the variables one two and three to match up with blocks of text in the file

	cout << "Our previous numbers are " << one << " " << two << " " << three << " ";

	in_a.close(); //always close it when you are done reading the file, prevent file corruption

	char keepAlive = 'y';
	cin >> keepAlive;
	return 0;
}

int thirdMain() { //create a program introducing arrays


	int numbers[10]; //array of 10 numbers, 0 through 9

	for (int i = 0; i < 10; i++) {
		cout << "Enter number " << i << ": ";
		cin >> numbers[i]; }

//find average
	int total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + numbers[i];
	}
	cout << "Our total is: " << total << endl;
	cout << "Our average is: " << total / 10 << endl;

	char keepAlive = 'y';
	cin >> keepAlive;
	return 0;
}



/*
#include<iostream>
using namespace std;

int main() {

	return 0;
}
*/
