#include <stdio.h>

int main() {

int numeros[10];
int c, valor = 0, encontrado = 67;

for(c = 0; c < 10; c++){
    printf("Digite o Número da Posição %d: ", c);
    scanf("%f", &numeros[c]);
   
}
    
if(valor == encontrado){
    printf("Valor Encontrado!");
}
else{
    printf("Valor não Encontrado!");
}
   
   
    return 0;
}
