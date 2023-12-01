#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definir a estrutura Dados
struct Dados {
    int *vetor;
    int quantidadeElementos;
    float media;
};

// Função para calcular a média de um vetor
float calcularMedia(int *vetor, int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

// Função para inicializar um vetor com números aleatórios
void inicializarVetorAleatorio(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Números aleatórios entre 0 e 99
    }
}

int main() {
    // Definir o tamanho do vetor
    int tamanho = 10;

    // Alocar dinamicamente o vetor
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    // Inicializar a semente para gerar números aleatórios
    srand(time(NULL));

    // Inicializar o vetor com números aleatórios
    inicializarVetorAleatorio(vetor, tamanho);

    // Calcular a média do vetor
    float media = calcularMedia(vetor, tamanho);

    // Criar uma variável do tipo Dados e atribuir os valores
    struct Dados dados;
    dados.vetor = vetor;
    dados.quantidadeElementos = tamanho;
    dados.media = media;

    // Exibir informações
    printf("Vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Quantidade de Elementos: %d\n", tamanho);
    printf("Média: %.2f\n", media);

    // Liberar a memória alocada
    free(vetor);

    return 0;
}
