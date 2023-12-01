#include <stdio.h>

// Definir a estrutura Aluno
struct Aluno {
    float nota1;
    float nota2;
    float media;
};

// Função para calcular a média de um aluno
float calcularMediaAluno(struct Aluno *aluno) {
    return (aluno->nota1 + aluno->nota2) / 2;
}

int main() {
    // Criar um array de 3 alunos
    struct Aluno alunos[3];

    // Ler as notas dos alunos
    for (int i = 0; i < 3; i++) {
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        // Calcular a média e atribuir à estrutura
        alunos[i].media = calcularMediaAluno(&alunos[i]);
    }

    // Exibir informações
    printf("\nInformações dos Alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Média: %.2f\n", alunos[i].media);
        printf("\n");
    }

    return 0;
}
