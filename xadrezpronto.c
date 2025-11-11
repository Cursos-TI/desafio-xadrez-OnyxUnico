#include <stdio.h>

void movtorre(int casas){
    if (casas > 0){
    printf("Direita \n");
    movtorre(casas - 1);
    }
}
void movrainha(int casas){
    if (casas > 0){
    printf("Esquerda \n");
    movrainha(casas - 1);
    }
}
void movbispo(int casas){
    if (casas > 0){
    for(int vertical = 0; vertical < 1; vertical++){
        for(int horizontal = 0; horizontal < 1; horizontal++){
                printf("Cima\n");
                printf("Direita\n");
            }
        }
        movbispo(casas - 1); 
    }
}
void movcavalo(int movimentos){
    int movcompleto = 0;
    
    for(movcompleto = 0; movcompleto < movimentos; movcompleto++){
        int verticais = 0;
        
        for(verticais = 0; verticais < 2; verticais++){
            printf("Cima\n");
            
            if(verticais == 1){
                break;
            }
            printf("Cima\n");
            verticais++;
        }
        
        int horizontais = 0;
        while(horizontais < 1){
            printf("Direita\n");
            horizontais++;
            
            if(horizontais >= 1){
                continue;
            }
        }
    }
}

int main(){
int bispo = 5, torre = 5, rainha = 8;
int cavalo = 1;

printf("Movendo Torre\n");
printf("5 casas para direita\n"); 
movtorre(torre);

printf("Movendo Rainha\n");
printf("8 casas para esquerda\n");
movrainha(rainha);

printf("Movendo Bispo\n");
printf("5 casas diagonal direita!\n");
movbispo(bispo);


printf("Movendo Cavalo\n");
printf("2 casas baixo 1 Direta\n");
movcavalo(cavalo);


return 0;
//peguei e adicionei oque lembrava

}