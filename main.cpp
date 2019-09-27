#import "Calculadora.h"
#include <iostream>

using namespace std;

int main() {
    int a, b;
    float resultado;

    cin >> a >> b;

    resultado = soma(a, b);
    cout << "SOMA: " << resultado << "\n";

    resultado = subtracao(a, b);
    cout << "SUBTRACAO: " << resultado << "\n";

    resultado = divisao(a, b);
    cout << "DIVISAO: " << resultado << "\n";

    resultado = multiplicacao(a, b);
    cout << "MULTIPLICACAO: " << resultado << "\n";

    resultado = potenciacao(a, b);
    cout << "POTENCIACAO: " << resultado << "\n";

    return 0;
}
