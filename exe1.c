#include <stdio.h>

// Definir a estrutura Aluno
struct Aluno {
    float nota1;
    float nota2;
    float media;
};

int main() {
    // Criar uma variável do tipo Aluno
    struct Aluno aluno;

    // Ler as notas do usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    // Calcular a média
    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

    // Exibir os resultados
    printf("Notas: %.2f, %.2f\n", aluno.nota1, aluno.nota2);
    printf("Média: %.2f\n", aluno.media);

    return 0;
}
