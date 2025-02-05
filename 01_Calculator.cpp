// a calculator to perform opeartion between two numbers
// @author: Sajag Subedi

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, choice;
    double result;
    cout << "Welcome to Calculator" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4.Division\n5.Exit" << endl;
    cin >> choice;
    cout << "Enter two numbers to perform operations? ";
    cin >> num1 >> num2;
    switch (choice)
    {
    case 1:
        cout << "Sum is : " << num1 + num2;
        break;
    case 2:
        cout << "Difference is : " << num1 - num2;
        break;
    case 3:
        cout << "Product is : " << num1 * num2;
        break;
    case 4:
        cout << "Quotient is : " << num1 / (float)num2;
        break;
    default:
        break;
    }

    return 0;
}