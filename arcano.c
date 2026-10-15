#include <stdio.h>

int calcularArcano(int dia, int mes, int ano) {
    int soma = dia + mes + ano;

    while (soma > 24) {
        int tempSoma = 0;
        while (soma > 0) {
            tempSoma += soma % 10;
            soma /= 10;
        }
        soma = tempSoma;
    }
    return soma;
}

void mostrarArcano(int arcano) {
    printf("\nO seu Arcano Pessoal é: %d - ", arcano);
    switch(arcano) {
        case 3:  printf("3 – A Imperatriz\n"); break;
        case 4:  printf("4 – O Imperador\n"); break;
        case 5:  printf("5 – O Papa\n"); break;
        case 6:  printf("6 – Os Enamorados\n"); break;
        case 7:  printf("7 – O Carro\n"); break;
        case 8:  printf("8 – A Justiça\n"); break;
        case 9:  printf("9 – O Eremita\n"); break;
        case 10: printf("10 – A Roda da Fortuna\n"); break;
        case 11: printf("11 – A Força\n"); break;
        case 12: printf("12 – O Enforcado\n"); break;
        case 13: printf("13 – A Morte\n"); break;
        case 14: printf("14 – A Temperança\n"); break;
        case 15: printf("15 – O Diabo\n"); break;
        case 16: printf("16 – A Torre\n"); break;
        case 17: printf("17 – A Estrela\n"); break;
        case 18: printf("18 – A Lua\n"); break;
        case 19: printf("19 – O Sol\n"); break;
        case 20: printf("20 – O Julgamento\n"); break;
        case 21: printf("21 – O Mundo\n"); break;
        case 22: printf("22 – O Louco\n"); break;
        case 23: printf("23 – O Mago\n"); break;
        case 24: printf("24 – A Sacerdotisa\n"); break;
        default: printf("Arcano fora do intervalo padrão (3 a 24).\n"); break;
    }
}

int main() {
    int dia, mes, ano;
    
    printf("=== Calculadora de Arcano Pessoal ===\n");
    printf("Digite o dia do nascimento: ");
    scanf("%d", &dia);
    printf("Digite o mes do nascimento: ");
    scanf("%d", &mes);
    printf("Digite o ano do nascimento: ");
    scanf("%d", &ano);
    
    int arcano = calcularArcano(dia, mes, ano);
    mostrarArcano(arcano);
    
    return 0;
}
