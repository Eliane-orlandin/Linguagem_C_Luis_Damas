#include <stdio.h>
void Pong(int x);
void Ping(int i);

void Ping(int i)
{
    switch (i)
    {
    case 1:
    case 2:
    case 3:
        while (i--)
            printf("\n%d", --i);
        break;
    case 25:
        Pong(3);
        break;
    default:
        printf("\nJá passei em C");
        Pong(123);
    }
}
void Pong(int x)
{
    int j = 0;
    switch (x)
    {
    case 1:
    case 2:
        Ping(x);
    case 3:
        j = 5;
        j++;
        return;
    default:
        printf("\nOla");
        return;
    }
    printf("\nVou sair");
}

int main()
{
    Pong(3);  // Não há nenhum printf, então simplesmente retorna sem imprimir nada.
    Ping(-4); // -4 cai no default e imprime "Já passei em C", em seguida chama a função Pong, passando o valor 123, que tbm caí no default e imprime "Ola".
    Ping(25); // Na função Pong, o valor 3 corresponde ao case 3, que define j = 5; e incrementa j para 6, mas não imprime nada e retorna.
    Pong(2);  // Chama a função Ping com o valor 2
    // Pong(1); // Quando o valor passado para Pong é 1, ele cai no case 1 e continua a execução para os próximos casos (case 2 e case 3), nesse caso ele vai pro Ping case 3 e tem um break, então ele acaba com a execução.
}
