#include "employee.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <vector>



Employee::Employee(){

};
Employee::Employee(string name, string jobTitle, double wage){
	this->name = name;
	this->jobTitle = jobTitle;
	this->wage = wage;

};

string Employee::getName(){
	return name;
}

string Employee::getJobTitle(){
	return jobTitle;
}

double Employee::getWage(){
	return this->wage;

}

double Employee::calculateWage(double hours){
	return hours * this->getWage();
}

