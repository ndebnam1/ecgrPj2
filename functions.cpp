#include "functions.h"
#include "employee.h"
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

vector<Employee> employeeList;

void Functions::generateList(){
	Employee e1("Niles", "Manager", 25.50);
	Employee e2("John", "Temp", 7.75);
	Employee e3("Dylan", "Temp", 8.00);
	Employee e4("Josh", "Temp", 7.25);
	Employee e5("Mary", "Temp", 8.50);
	employeeList.insert(employeeList.end(),
			{e1,e2,e3,e4,e5});
	
}
void Functions::printEmployees(){
	for(int i = 0; i < employeeList.size(); i ++){
		cout << "Name:" <<   employeeList[i].getName() <<endl <<  "Title:" << employeeList[i].getJobTitle() << endl << "Wage:" << employeeList[i].getWage() << endl<< "------------" << endl;
	}
}

void Functions::calculateTotalWages(){
	double hours;
	for( int i = 0; i < employeeList.size(); i++ ){
	
	cout << "Please enter how many hours " << employeeList[i].getName() << " has worked this pay period: ";
	cin >>  hours;
	employeeList[i].calculateWage(hours);
	}
	cout << "------------" << endl;
	cout << "--This periods timesheet--" << endl;
	for(int i = 0; i < employeeList.size(); i++)
		cout << "Name:" << employeeList[i].getName() << endl <<  "Title:" << employeeList[i].getJobTitle() << endl <<  "Check:" << employeeList[i].getWage() * hours  <<"$" << endl << "------------" << endl;

}

void Functions::addNewEmployee(){
	string name;
	string jobTitle;
	double wage;
	cout << "Please enter the name of the employee you would like to add to the Database: ";
	cin >> name;
	cout << "Please enter " << name << "'s" << " job title: ";
	cin >> jobTitle;
	cout << "Please enter " << name << "'s" << " wage: ";
	cin >> wage;
	Employee ee(name,jobTitle,wage);
	employeeList.push_back(ee);
	cout << "--Employee Added--" << endl;
	cout << "Name:" << name << endl << "Title: " << jobTitle << endl << "Wage: " << wage << endl << "-------------";
}







