#include <stdio.h>

    int main(){ 

    int a = 10;

    int b = 3;

    float quociente = (float) a / b; // 'a' explicitamente convertido para Float.
      // Se tira o (Float) ele vai dividir somente por inteire com o  (Float) e um casting) = estou forçando  a / b a me dar um resultado com casa decimal.

    printf("Quociente: %.2f\n",quociente);


    return 0;

}