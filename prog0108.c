#include <stdio.h>

int main()
{
    printf("Programa que apresenta os Caracteres Especiais\n\n");
    printf("\\n\t-\t<Enter>\n"); /* Saída: \n    -   <Enter>  */
    printf("\\\\\t-\t\\\n");     /* Saída: \\    -   \        */
    printf("\\t\t-\t<TAB>\n");   /* Saída: \t    -   <TAB>    */
    printf("%%%%\t-\t%%\n");     /* Saída: %%    -   %        */
}