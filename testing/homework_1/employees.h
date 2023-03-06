#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declare employee struct
struct employee 
{
	char name[15];
	double wage;
	double hours;
};

// Struct instance
struct employee *current_emps;
struct employee *emps;
struct employee *previous_emps;

// Functions prototype
void addEmployee(char *employee_name, double wage, double hours);
void calcPaychecks();


#endif