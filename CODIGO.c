#include <cs50.h>  // Biblioteca CS50 para facilitar o uso de funções como get_int.
#include <stdio.h> // Biblioteca padrão para entrada e saída de dados (como printf).

int main(void)
{
    int x, y;         // Declaração de variáveis para população inicial (x) e final (y).
    int anos = 0;     // Variável para contar o número de anos necessários.

    // QUANTIDADE INICIAL DE POPULAÇÃO - x
    // Solicita ao usuário o valor inicial da população. 
    // Deve ser maior que 9, pois a população inicial mínima permitida é 10.
    do
    {
        x = get_int("populacao inicial: ");
    }
    while (x < 9); // Enquanto x for menor que 9, o programa continuará pedindo um valor válido.

    // QUANTIDADE FINAL DE POPULAÇÃO - y
    // Solicita ao usuário o valor final da população.
    // Esse valor deve ser igual ou maior que o valor inicial (x).
    do
    {
        y = get_int("populacao fim: ");
    }
    while (y < x); // Enquanto y for menor que x, o programa continuará pedindo um valor válido.

    // CÁLCULO DE UM ANO
    {
        // Aqui é feita uma conta para calcular a população após 1 ano.
        // A fórmula usada é: x + (x/3 - x/4), que considera o número de nascimentos e mortes.
        // No entanto, isso não está sendo armazenado nem atualizado para múltiplos anos.
        if (x >= y)
            printf("%d\n", x + (x / 3 - x / 4));
    }

    // QUANTOS ANOS SÃO NECESSÁRIOS PARA ATINGIR A POPULAÇÃO FINAL
    {
        // Aqui está sendo calculado diretamente o número de anos necessários para atingir a população final.
        // No entanto, a fórmula não é apropriada porque considera um crescimento estático (em vez de iterativo ano a ano).
        printf("%d\n", (y - x) / (x + (x / 3 - x / 4)));
    }
}
