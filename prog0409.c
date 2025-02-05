#include <stdio.h>

int main()
{
    char opcao;
    do
    {
        printf("\tM E N U  P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\n\t\tOpção (C, F, E, S): ");

        scanf(" %c", &opcao);

        switch (opcao)
        {
        case 'C':
        case 'c':
            puts("Opção CLIENTES");
            break;
        case 'F':
        case 'f':
            puts("Opção FORNECEDORES");
            break;
        case 'E':
        case 'e':
            puts("Opção ENCOMENDAS");
            break;
        case 'S':
        case 's':
            break;
        default:
            puts("Opção INVÁLIDA!!");
            break;
        }
        getchar();
    } while (opcao != 's' && opcao != 'S');
    return 0;
}