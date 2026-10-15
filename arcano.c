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
    
    if (arcano == 3) {
        printf("III – A Imperatriz\n");
    } else if (arcano == 4) {
        printf("IV – O Imperador\n");
    } else if (arcano == 5) {
        printf("V – O Papa\n");
    } else if (arcano == 6) {
        printf("VI – Os Enamorados\n");
    } else if (arcano == 7) {
        printf("VII – O Carro\n");
    } else if (arcano == 8) {
        printf("VIII – A Justiça\n");
    } else if (arcano == 9) {
        printf("IX – O Eremita\n");
    } else if (arcano == 10) {
        printf("X – A Roda da Fortuna\n");
    } else if (arcano == 11) {
        printf("XI – A Força\n");
    } else if (arcano == 12) {
        printf("XII – O Enforcado\n");
    } else if (arcano == 13) {
        printf("XIII – A Morte\n");
    } else if (arcano == 14) {
        printf("XIV – A Temperança\n");
    } else if (arcano == 15) {
        printf("XV – O Diabo\n");
    } else if (arcano == 16) {
        printf("XVI – A Torre\n");
    } else if (arcano == 17) {
        printf("XVII – A Estrela\n");
    } else if (arcano == 18) {
        printf("XVIII – A Lua\n");
    } else if (arcano == 19) {
        printf("XIX – O Sol\n");
    } else if (arcano == 20) {
        printf("XX – O Julgamento\n");
    } else if (arcano == 21) {
        printf("XXI – O Mundo\n");
    } else if (arcano == 22) {
        printf("22 – O Louco\n");
    } else if (arcano == 23) {
        printf("23 – O Mago\n");
    } else if (arcano == 24) {
        printf("24 – A Sacerdotisa\n");
    } else {
        printf("Arcano fora do intervalo padrão (3 a 24).\n");
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
