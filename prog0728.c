#include <stdio.h>
#include <ctype.h>

int atoi_custom(char *s) {
    int i = 0, sinal = 1, resultado = 0;

    // Ignora espaços em branco no início
    while (s[i] == ' ') {
        i++;
    }

    // Verifica o sinal
    if (s[i] == '-') {
        sinal = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // Converte os caracteres numéricos
    while (isdigit(s[i])) {
        resultado = resultado * 10 + (s[i] - '0');
        i++;
    }

    return sinal * resultado;
}

int main() {
    printf("%d\n", atoi_custom("1234"));       // 1234
    printf("%d\n", atoi_custom("-123abc"));    // -123
    printf("%d\n", atoi_custom("+51ab46"));    // 51
    printf("%d\n", atoi_custom("abc"));        // 0
    return 0;
}
