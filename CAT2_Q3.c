#include <stdio.h>

double calculatePay(double hoursWorked, double hourlyWage, double *taxes);

int main() {
    double hoursWorked, hourlyWage, grossPay, taxes, netPay;

    // Get user input
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%lf", &hourlyWage);

    // Calculate gross pay, taxes, and net pay
    grossPay = calculatePay(hoursWorked, hourlyWage, &taxes);
    netPay = grossPay - taxes;

    // Display results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}

double calculatePay(double hoursWorked, double hourlyWage, double *taxes) {
    double regularHours = hoursWorked > 40 ? 40 : hoursWorked;
    double overtimeHours = hoursWorked > 40 ? hoursWorked - 40 : 0;
    double regularPay = regularHours * hourlyWage;
    double overtimePay = overtimeHours * hourlyWage * 1.5;
    double grossPay = regularPay + overtimePay;

    // Calculate taxes based on gross pay
    if (grossPay <= 600) {
        *taxes = grossPay * 0.15;
    } else {
        *taxes = 600 * 0.15 + (grossPay - 600) * 0.2;
    }

    return grossPay;
}