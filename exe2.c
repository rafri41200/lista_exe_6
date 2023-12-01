#include <stdio.h>

// Definir a estrutura Estoque
struct Estoque {
    char nomePeca[50];  // Assumindo que o nome da peça terá no máximo 50 caracteres
    int numeroPeca;
    float preco;
    int numeroPedido;
};

int main() {
    // Criar uma variável do tipo Estoque
    struct Estoque estoque;

    // Ler informações do usuário
    printf("Digite o nome da peça: ");
    scanf("%s", estoque.nomePeca);

    printf("Digite o número da peça: ");
    scanf("%d", &estoque.numeroPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &estoque.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &estoque.numeroPedido);

    // Exibir informações
    printf("\nInformações sobre a peça:\n");
    printf("Nome da peça: %s\n", estoque.nomePeca);
    printf("Número da peça: %d\n", estoque.numeroPeca);
    printf("Preço: %.2f\n", estoque.preco);
    printf("Número do pedido: %d\n", estoque.numeroPedido);

    return 0;
}
