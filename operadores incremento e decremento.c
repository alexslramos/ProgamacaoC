#include <stdio.h>

int main(){
/*
Incremento (++)
Pré-incremento ++a
Pós-incremento a++
Decremento (--)
Pré-decremento --a
Pós-ecremento a--
*/

    int numero1=1;
    printf("Antes incremento: %d\n", numero1);
    // a mesma ideia que: numero1= numero1 + 1;
    numero1++;
    printf("Após incremento:%d\n", numero1);

    // a mesma ideia que: numero1= numero1 - 1;
    numero1--;
    printf("Após decremento:%d\n", numero1);

    return 0;
}