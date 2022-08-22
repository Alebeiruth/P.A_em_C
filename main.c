#include <stdio.h>

int main() {
  // variaveis
    int a1, razao, num;
    int an;
  // usuario e programa em execução
    printf("Digite seu primeiro indice, razão e número em seguida:\n");
    scanf("%i %i %i", &a1, &razao, &num);
    an = a1 + (num -1) * razao;
    printf("Resultado do n-ésimo termo da P.A é %i.", an);
    }

