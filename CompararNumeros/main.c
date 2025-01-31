#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    comparar_numeros(num1, num2);

    return 0;
}

void comparar_numeros(int a,int b){

    if (a > b) {
        printf("%d es mayor que %d\n", a, b);
    } else if (a < b) {
        printf("%d es menor que %d\n", a, b);
    } else {
        printf("%d y %d son iguales\n", a, b);
    }
}
