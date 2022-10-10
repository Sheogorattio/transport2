#include <iostream>
#include"transport.h"
#include "plane.h"
#include "cycle.h"
#include "jeep.h"
#include "lorry.h"
#include "ship.h"

using namespace std;

int main() {
	transport* ptr1 = new plane();
	transport* ptr2 = new cycle();
	transport* ptr3 = new jeep();
	transport* ptr4 = new lorry();
	transport* ptr5 = new ship();
	ptr1->input();
	cout << "\n------------------------------------------------------\n";
	ptr2->input();
	cout << "\n------------------------------------------------------\n";
	ptr3->input();
	cout << "\n------------------------------------------------------\n";
	ptr4->input();
	cout << "\n------------------------------------------------------\n";
	ptr5->input();
	cout << "\n------------------------------------------------------\n";
	system("cls");
	ptr1->output();
	cout << "\n------------------------------------------------------\n";
	ptr2->output();
	cout << "\n------------------------------------------------------\n";
	ptr3->output();
	cout << "\n------------------------------------------------------\n";
	ptr4->output();
	cout << "\n------------------------------------------------------\n";
	ptr5->output();
	cout << "\n------------------------------------------------------\n";
}