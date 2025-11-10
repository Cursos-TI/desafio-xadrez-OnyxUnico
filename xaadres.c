#include <stdio.h>

int main(){
int bispo = 5, torre = 5, rainha = 8;
int contador;

printf("Movendo Torre\n");
printf("5 casas para direita\n"); 
for (contador = 1; contador <= torre; contador++){
    printf("Direita\n");
}
printf("Movendo Rainha\n");
printf("8 casas para esquerda\n");
contador = 1;
while (contador <=rainha)
{
printf("Esquerda\n");
contador++;
}

printf("Movendo Bispo\n");
printf("5 casas diagonal direita!\n");
contador = 1;
do{
printf("Cima direita\n");
contador++;
}while (contador <= bispo);

return 0;

}