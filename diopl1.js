// Função que calcula o saldo de vitórias e determina o nível do jogador
function calcularNivel(vitorias, derrotas) {
    let saldoVitorias = vitorias - derrotas;
    let nivel;

    if (vitorias <= 10) {
        nivel = "Ferro";
    } else if (vitorias <= 20) {
        nivel = "Bronze";
    } else if (vitorias <= 50) {
        nivel = "Prata";
    } else if (vitorias <= 80) {
        nivel = "Ouro";
    } else if (vitorias <= 90) {
        nivel = "Diamante";
    } else if (vitorias <= 100) {
        nivel = "Lendário";
    } else {
        nivel = "Imortal";
    }

    return { saldoVitorias, nivel };
}

function main() {
    // Solicita ao usuário o número de vitórias e derrotas
    let vitorias = parseInt(prompt("Digite o número de vitórias: "), 10);
    let derrotas = parseInt(prompt("Digite o número de derrotas: "), 10);

    // Chama a função 
    let { saldoVitorias, nivel } = calcularNivel(vitorias, derrotas);

    console.log(`O Herói tem um saldo de ${saldoVitorias} e está no nível ${nivel}`);
}

main();
