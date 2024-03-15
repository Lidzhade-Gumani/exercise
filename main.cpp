#include <iostream>
using namespace std;

double calculateMarkup(double merchandiseCost, double employeesSalary, double yearlyRent, double electricityCost, double desiredProfit) {
    double totalExpenses = merchandiseCost + employeesSalary + yearlyRent + electricityCost;
    double grossProfit = totalExpenses / (1 - desiredProfit);
    double markupPercentage = grossProfit / merchandiseCost;
    return markupPercentage;
}

int main() {
    double merchandiseCost, employeesSalary, yearlyRent, electricityCost, desiredProfit;

    cout << "Enter the total cost of merchandise: ";
    cin >> merchandiseCost;
    cout << "Enter the total salary of employees (including your own salary): ";
    cin >> employeesSalary;
    cout << "Enter the yearly rent: ";
    cin >> yearlyRent;
    cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;

    desiredProfit = 0.10; 

    double markupPercentage = calculateMarkup(merchandiseCost, employeesSalary, yearlyRent, electricityCost, desiredProfit);
    double saleMarkupPercentage = markupPercentage / 0.85;

    cout << "To achieve a net profit of approximately 10% after expenses and a 15% sale, markup the merchandise by " << (saleMarkupPercentage * 100) << "%." << endl;

    return 0;
}
