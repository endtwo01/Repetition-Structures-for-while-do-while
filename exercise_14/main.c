#include <stdio.h>
#include <stdlib.h>

/*

Portuguese:Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.

English: Create a program that calculates the average salary of a company, asking the user for
number of employees and the salary of each employee. At the end, the program should print the
average of the salaries entered, the highest salary and the lowest salary.

*/

int main()
{
    int quantility, i;
    float salary, totalSalary = 0, salaryLarger = 0, salaryLower = 99999;
    do
    {
        printf("how many employees does the company have? ");
        scanf("%d", &quantility);
    }while(quantility < 0);

    for(i = 1; i <= quantility; i++){
        printf("%d salary: ", i);
        scanf("%f", &salary);
        totalSalary += salary;
        if(salaryLower > salary)
            salaryLower = salary;
        if(salaryLarger < salary)
            salaryLarger = salary;
    }
    printf("Salary medium: $%.2f\n", totalSalary/quantility);
    printf("Large Salary: $%.2f\n", salaryLarger);
    printf("Lower Salary: $%.2f\n", salaryLower);

    return 0;
}
