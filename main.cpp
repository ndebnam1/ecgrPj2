#include "employee.h"
#include "functions.h"
#include  <iostream>
#include <string>
#include <vector>



int main(){

cout << "Welcome to our Employee Database how can we help you? Would you like to: " << endl;

cout << "\t 1. Print the entire employee list" << endl << "\t 2. Caclulate the total wages of all the employees" << endl << "\t 3. Add a new employee to the Database" << endl << "\t 4. Exit the application" << endl;
int opt;
cin >> opt;
while((opt > 4 || opt < 1 )|| (!cin >> opt)){
	cout << "Oops it seems lke you entered a value that is not specified(only enter 1-4)" << endl <<  "Please enter a valid option" << endl;
	cin >> opt;
}


 










	return 0;
}
