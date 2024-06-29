#include <stdio.h>
#include <string.h>

// Função que calcula o saldo de vitórias e determina o nível do jogador
void calcularNivel(int vitorias, int derrotas, int *saldoVitorias, char *nivel) {
    // Calcula o saldo de vitórias
    *saldoVitorias = vitorias - derrotas;

    // Determina o nível com base no número de vitórias
    if (vitorias <= 10) {
        strcpy(nivel, "Ferro");
    } else if (vitorias <= 20) {
        strcpy(nivel, "Bronze");
    } else if (vitorias <= 50) {
        strcpy(nivel, "Prata");
    } else if (vitorias <= 80) {
        strcpy(nivel, "Ouro");
    } else if (vitorias <= 90) {
        strcpy(nivel, "Diamante");
    } else if (vitorias <= 100) {
        strcpy(nivel, "Lendário");
    } else {
        strcpy(nivel, "Imortal");
    }
}

int main() {
    int vitorias, derrotas, saldoVitorias;
    char nivel[20];

    // Solicita ao usuário o número de vitórias e derrotas
    printf("Digite o numero de vitorias: ");
    scanf("%d", &vitorias);
    printf("Digite o numero de derrotas: ");
    scanf("%d", &derrotas);

    // Chama a função para calcular o saldo de vitórias e determinar o nível
    calcularNivel(vitorias, derrotas, &saldoVitorias, nivel);

    // Exibe a mensagem final com o saldo de vitórias e o nível do jogador
    printf("O Heroi tem um saldo de %d e esta no nivel %s\n", saldoVitorias, nivel);

    return 0;
}

