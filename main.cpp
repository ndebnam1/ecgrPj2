#include "employee.h"
#include "functions.h"
#include  <iostream>
#include <string>
#include <vector>



int main(){

int opt = 1;
Functions::generateList();
cout << "Welcome to our Employee Database how can we help you? Would you like to: " << endl;
while(opt != 0){
cout << "\t 1. Print the entire employee list" << endl << "\t 2. Caclulate the total wages of all the employees" << endl << "\t 3. Add a new employee to the Database" << endl << "\t 4. Exit the application" << endl;

cin >> opt;
while(opt > 4 || opt < 1 ){
	cout << "Oops it seems lke you entered a value that is not specified(only enter 1-4)" << endl <<  "Please enter a valid option" << endl;
	cin >> opt;

}

switch(opt){
	case 1:
		Functions::printEmployees(); 
		break;
	case 2:
		Functions::calculateTotalWages();
		break;
	case 3:
		Functions::addNewEmployee();
		break;
	case 4:
		opt = 0;
		break;





			}

	}







}
