#include "functions.h"
#include "employee.h"
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

vector<Employee> employeeList;

void Functions::generateList(){
	Employee e1("Niles", "Manager", 35.5);
	Employee e2("John", "Temp", 35.5);
	Employee e3("Dylan", "Temp", 35.5);
	Employee e4("Josh", "Temp", 44.4);
	Employee e5("Mary", "Temp", 44.4);
	employeeList.insert(employeeList.end(),
			{e1,e2,e3,e4,e5});
	
}
void Functions::printEmployees(){
	for(int i = 0; i < employeeList.size(); i ++){
		cout << "Name: " << " " <<  employeeList[i].getName() << "Job Title: " << employeeList[i].getJobTitle() << " " << "Wage: " << employeeList[i].getWage() << endl;
	}
}

void Functions::calculateTotalWages(){
	for( int i = 0; i < employeeList.size(); i++ ){

		
	}
}
