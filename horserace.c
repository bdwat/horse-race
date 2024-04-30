#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* cavalos() {
    srand(time(NULL));
    char cavalos[] = {'R', 'B', 'V', 'S', 'L'};
    int cavaloSelector = rand() % 5; 
    static char cavaloVencedor[20];

    switch (cavalos[cavaloSelector]) { 
        case 'R':
            strcpy(cavaloVencedor, "Relâmpago"); 
            break;
        case 'B':
            strcpy(cavaloVencedor, "Bolt");
            break;
        case 'V':
            strcpy(cavaloVencedor, "Verstappen");
            break;
        case 'S':
            strcpy(cavaloVencedor, "Senna");
            break;
        case 'L':
            strcpy(cavaloVencedor, "Lewis");
            break;
        default:
            break;
    }
    
    return cavaloVencedor;
}

void jogarCorridaCavalos() {
    int dinheiro = 500, aposta, decisao;
    char* cavaloVencedor;
    do {
        printf("Faça a sua aposta (mínimo $150)\n");
        printf("Saldo disponível: %d\n", dinheiro);
        scanf("%d", &aposta);
        if (aposta < 150) {
            printf("A aposta mínima é de $150, tente novamente.\n\n");
            continue;
        } else if (aposta > dinheiro) {
            printf("Saldo não disponível.\n\n");
            continue;
        } else {
            dinheiro -= aposta;
            while (1) {
                printf("Escolha a sua aposta:\n");
                printf("1.Relâmpago   2.Bolt   3.Verstappen   4.Senna   5.Lewis  6.Cancelar\n");
                scanf("%d", &decisao);
                cavaloVencedor = cavalos();

                if (decisao == 1)
                {
                    if(strcmp(cavaloVencedor, "Relâmpago") == 0){
                        printf("Você venceu!\n");
                        dinheiro += 3 * aposta;
                        break;
                    }else{
                        printf("Você perdeu! O cavalo vencedor foi: %s\n", cavaloVencedor);
                        break;
                    }
                }else if (decisao == 2){
                    if(strcmp(cavaloVencedor, "Bolt") == 0){
                        printf("Você venceu!\n");
                        dinheiro += 3 * aposta;
                        break;
                    }else{
                        printf("Você perdeu! O cavalo vencedor foi: %s\n", cavaloVencedor);
                        break;
                    }
                }else if (decisao == 3){
                    if(strcmp(cavaloVencedor, "Verstappen") == 0){
                        printf("Você venceu!\n");
                        dinheiro += 3 * aposta;
                        break;
                    }else{
                        printf("Você perdeu! O cavalo vencedor foi: %s\n", cavaloVencedor);
                        break;
                    }
                }else if (decisao == 4){
                    if(strcmp(cavaloVencedor, "Senna") == 0){
                        printf("Você venceu!\n");
                        dinheiro += 3 * aposta;
                        break;
                    }else{
                        printf("Você perdeu! O cavalo vencedor foi: %s\n", cavaloVencedor);
                        break;
                    }
                }else if (decisao == 5){
                    if(strcmp(cavaloVencedor, "Lewis") == 0){
                        printf("Você venceu!\n");
                        dinheiro += 3 * aposta;
                        break;
                    }else{
                        printf("Você perdeu! O cavalo vencedor foi: %s\n", cavaloVencedor);
                        break;
                    }
                }else{
                    printf("Você desistiu!");
                    break;
                }
                                
            }
        }
    } while (dinheiro >= 150); 

    printf("Saldo insuficiente para continuar!\n");
}

int main() {
    jogarCorridaCavalos();
    return 0;
}
