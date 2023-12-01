#include <stdio.h>

// Definir a estrutura Professor
struct Professor {
    char nome[50];
    int idade;
};

// Definir a estrutura Disciplina
struct Disciplina {
    char nome[50];
    int cargaHoraria;
    struct Professor professor; // Campo para armazenar um professor
};

int main() {
    // Criar uma variável do tipo Disciplina
    struct Disciplina disciplina;

    // Ler informações da disciplina
    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina.nome);

    printf("Digite a carga horária da disciplina: ");
    scanf("%d", &disciplina.cargaHoraria);

    // Ler informações do professor
    printf("Digite o nome do professor: ");
    scanf("%s", disciplina.professor.nome);

    printf("Digite a idade do professor: ");
    scanf("%d", &disciplina.professor.idade);

    // Exibir informações
    printf("\nInformações da Disciplina:\n");
    printf("Nome da Disciplina: %s\n", disciplina.nome);
    printf("Carga Horária: %d horas\n", disciplina.cargaHoraria);
    printf("Professor:\n");
    printf("  Nome: %s\n", disciplina.professor.nome);
    printf("  Idade: %d anos\n", disciplina.professor.idade);

    return 0;
}
