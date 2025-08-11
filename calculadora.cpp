// calculadora.cpp (Versión con función de raíz cuadrada)
#include <iostream>
#include <cmath>
using namespace std;

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 0;
    }
    return a / b;
}

double raizCuadrada(double a) {
    if (a < 0) {
        cout << "Error: Raíz cuadrada de número negativo no permitida." << endl;
        return 0;
    }
    return sqrt(a);
}

int main() {
    double num1, num2;
    char operacion;
    cout << "Ingrese un número (para raíz cuadrada) o dos números (para otras operaciones): ";
    cin >> num1;
    if (cin.peek() != '\n') {
        cin >> num2;
    }
    cout << "Ingrese operación (+, -, *, /, r): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        case 'r':
            cout << "Resultado: " << raizCuadrada(num1) << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }
    return 0;
}
  