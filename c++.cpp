
#include <iostream>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
        return 0; 
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operacion;

    
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    
    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;

    
    if (operacion == '+') {
        cout << "Resultado: " << suma(num1, num2) << endl;
    } else if (operacion == '-') {
        cout << "Resultado: " << resta(num1, num2) << endl;
    } else if (operacion == '*') {
        cout << "Resultado: " << multiplicacion(num1, num2) << endl;
    } else if (operacion == '/') {
        cout << "Resultado: " << division(num1, num2) << endl;
    } else {
        cout << "Operación no válida." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double numero, porcentaje, resultado;

    
    cout << "Ingrese el número: ";
    cin >> numero;

    cout << "Ingrese el porcentaje (0-100): ";
    cin >> porcentaje;

    
    if (porcentaje < 0 || porcentaje > 100) {
        cout << "Error: El porcentaje debe estar entre 0 y 100." << endl;
    } else {
        
        resultado = numero * (porcentaje / 100);

        
        cout << "El " << porcentaje << "% de " << numero << " es: " << resultado << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    double numero;

    
    cout << "Ingrese un número: ";
    cin >> numero;

   
    numero = numero + 5;  // Sumar 5
    numero = numero - 3;  // Restar 3
    numero = numero * 2;  // Multiplicar por 2
    numero = numero / 4;  // Dividir por 4

    
    cout << "El resultado después de las operaciones es: " << numero << endl;

    return 0;
}