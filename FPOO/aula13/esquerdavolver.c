#include <stdio.h>
#include <string.h>

// Função para calcular a direção final após os comandos
char calcular_direcao_final(char comandos[], int n) {
    char direcao = 'N'; // Inicialmente, o recruta está voltado para o Norte
int i;
    for (i = 0; i < n; i++) {
        if (comandos[i] == 'E') {
            // Gira 90 graus no sentido anti-horário
            if (direcao == 'N') direcao = 'O';
            else if (direcao == 'L') direcao = 'N';
            else if (direcao == 'S') direcao = 'L';
            else if (direcao == 'O') direcao = 'S';
        } else if (comandos[i] == 'D') {
            // Gira 90 graus no sentido horário
            if (direcao == 'N') direcao = 'L';
            else if (direcao == 'L') direcao = 'S';
            else if (direcao == 'S') direcao = 'O';
            else if (direcao == 'O') direcao = 'N';
        }
    }

    return direcao;
}

int main() {
    FILE *entrada = fopen("esquerda.in", "r");
    FILE *saida = fopen("esquerda.out", "w");

    if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir arquivos de entrada e/ou saída.\n");
        return 1;
    }

    int n;

    while (1) {
        fscanf(entrada, "%d", &n);

        if (n == 0) break;

        char comandos[1001];
        fscanf(entrada, "%s", comandos);

        char direcao_final = calcular_direcao_final(comandos, n);
        fprintf(saida, "%c\n", direcao_final);
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}

