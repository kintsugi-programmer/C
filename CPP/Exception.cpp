#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static int divide(int a, int b) {
        if (b == 0) {
            throw runtime_error("Cannot divide by zero!");
        }
        return a / b;
    }
};

int main() {
    try {
        // User input
        int num1, num2;
        char operation;

        // Get user input
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        // Perform the selected operation
        int result;
        switch (operation) {
            case '+':
                result = Calculator::add(num1, num2);
                break;
            case '-':
                result = Calculator::subtract(num1, num2);
                break;
            case '*':
                result = Calculator::multiply(num1, num2);
                break;
            case '/':
                result = Calculator::divide(num1, num2);
                break;
            default:
                throw invalid_argument("Invalid operation!");
        }

        // Display the result
        cout << "Result: " << result << endl;

    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cout << "Invalid argument: " << e.what() << endl;
    } catch (...) {
        cout << "Unknown error occurred!" << endl;
    }

    return 0;
}
