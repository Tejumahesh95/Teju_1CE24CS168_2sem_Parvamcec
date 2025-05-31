#include <iostream>
using namespace std;

class Calculator {
private:
    float a, b;

public:
    void getInput() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() {
        cout << "Result: " << a + b << endl;
    }

    void sub() {
        cout << "Result: " << a - b << endl;
    }

    void mul() {
        cout << "Result: " << a * b << endl;
    }

    void div() {
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }

    void mod() {
        if ((int)b != 0)
            cout << "Result: " << (int)a % (int)b << endl;
        else
            cout << "Error: Modulo by zero!" << endl;
    }
};

int main() {
    Calculator calc;
        int choice;

    cout << "1. add\n";
    cout << "2. sub\n";
    cout << "3. mul\n";
    cout << "4. div\n";
    cout << "5. mod\n";
    cout << "6. exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5) {
        calc.getInput();
    }

    switch (choice) {
    case 1:
        calc.add();
        break;
    case 2:
        calc.sub();
        break;
    case 3:
        calc.mul();
        break;
    case 4:
        calc.div();
        break;
    case 5:
        calc.mod();
        break;
    case 6:
        cout << "Exiting..." << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
 
