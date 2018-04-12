#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;
// Studies Problem Solving with C++ (Course Book)
// Some online C++ books for example: Chegg (computer science learning materials)
class Car {

public:

	string color = "n/a";
	int g_doors = 0;
	int year = 0;
	int doors = 0;
	int windows = 0;

	void print() {
		int value = 1000 * g_doors + year + 500 * doors + 750 * windows + 5000;
		
		cout << "The value of your " << color << " car is: " << value << " $$$ " << endl;
		
	}

	void set_g_doors() {

		cout << "number of garage doors : " << endl;
		cin >> g_doors;

	}
	void set_doors() {

		cout << "number of doors in your car : " << endl;
		cin >> doors;

	}
	void set_color() {

		cout << "number of cars : " << endl;
		cin >> color;

	}
	void set_year() {

		cout << "year of your car : " << endl;
		cin >> year;

	}

	void set_windows() {

		cout << "number of windows in your car : " << endl;
		cin >> windows;

	}
};

int main() {

	char c, y, p, g, d, w;
	
	char choice;
	Car car;

	cout << endl;
	
	cout << endl;
	cout << " " << endl;
	cout << "Car's color  " << endl;
	cout << "Car's year  " << endl;
	cout << "number of garage doors in your house  " << endl;
	cout << "number of doors in your car " << endl;
	cout << "number of windows in your car " << endl;

	cout << "Print your Car's value " << endl;
	cout << endl;
	cout << " " << endl;

	car.set_color();
	car.set_year();
	car.set_g_doors();
	car.set_doors();
	car.set_windows();

	car.print();

	do {
		cout << " " << endl;
		cout << "Select an action: " << endl;
		cout << " " << endl;
		cout << "your Car's color (c)  " << endl;
		cout << "your Car's year (y)  " << endl;
		cout << "number of garage doors  (g)  " << endl;
		cout << "number of doors in your car (d) " << endl;
		cout << "number of windows in your car (w) " << endl;

		cout << "Print your Car's value (p) " << endl;
		cout << endl;
		

		cout << "Your choice is : ";
		cin >> choice;
		switch (choice)
		{
		case 'c':
			car.set_color();
			break;
		case 'y':
			car.set_year();
			break;
		case 'p':
			car.print();
			break;
		case 'g':
			car.set_g_doors();
			break;
		case 'd':
			car.set_doors();
			break;
		case 'w':
			car.set_windows();
			break;

		default:
			cout << "Illegal value.";
		}
	} while (1);

	return 0;
}