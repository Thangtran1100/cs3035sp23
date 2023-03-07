#include "employees.h"

// Declare counter
int index;

// This function will add employee name, wage and hours
void addEmployee(char *employee_name, double wage, double hours) 
{
	current_emps = emps + index;

	strcpy(current_emps->name, employee_name);

    current_emps->wage = wage;

	current_emps->hours = hours;

	index++;

    return;
}

// Print out employees salary information and calculate total pay and average pay
void calcPaychecks() 
{
	current_emps = emps;

	double wage_avg;

    for(current_emps; current_emps <= previous_emps; current_emps++)
    {
        wage_avg += current_emps->wage * current_emps->hours;

		printf("%s, wage %.2f, hours %.f, total pay: $%.2f\n", current_emps -> name, current_emps->wage, current_emps->hours, current_emps->wage * current_emps->hours); 
    }
	
	wage_avg /= (double)index;

	printf("Average wage: $%.2f\n", wage_avg);

    return;
}

// Driver
void main()
{
    const int EMPLOYEE_NUMBER = 4;	
	
	emps = (struct employee *) malloc(EMPLOYEE_NUMBER * sizeof(struct employee));
	previous_emps = emps + (EMPLOYEE_NUMBER -1);
	
	addEmployee("Bob Smith", 21, 21);
	addEmployee("Sue Jones", 22.3, 12);
	addEmployee("Carlos Suarez", 21.55, 15);
    addEmployee("Marry Jane", 25, 18);

	calcPaychecks();
}