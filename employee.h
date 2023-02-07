#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <vector>
using namespace std;

class Employee{

	public:
		Employee();
		Employee(string name,string jobTitle,double wage);
	string getName();
	string getJobTitle();
	double getWage();
	void setName();
	void setWage();
	double calculateWage(double hours);
	void setJobTitle();

	private:
		string name;
		string jobTitle;
		double wage;
	

};



#endif

