#import "Calculadora.h"

int soma(int operadorA, int operadorB) {
    return operadorA + operadorB;
}

int subtracao(int minuendo, int subtraendo) {
    return minuendo - subtraendo;
}

float divisao(int numerador, int denominador) {
    return numerador/denominador;
}

int multiplicacao(int operadorA, int operadorB) {
    return operadorA*operadorB;
}

int potenciacao(int base, int potencia) {
    int resultado = base;

    for (int i=0; i<potencia-1; i++)
        resultado *= base;

    return resultado;
}
