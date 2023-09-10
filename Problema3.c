#include <stdio.h>
int main()
{
    //DADO UM CARACTER, INFORME O SEU CODIGO ASCII EM DECIMAL E HEXADECIMAL
    char ch;
    printf("ESCOLHA UM CARACTER E OBTENHA\nSEU CODIGO ASCII EM DECIMAL E HEXADECIMAL ");
    
    printf("\n\nINFORME O CARACTER = ");
    scanf("%c", &ch);
    printf("\nCODIGO ASCII EM DECIMAL = %i\nCODIGO ASCII EM HEXADECIMAL = 0x%x", ch, ch);
    
    return 0;
}