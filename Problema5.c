#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hipotenusa;
    
    //DADAS AS MEDIDAS DOS CATETOS DE UM TRIANGULO RETANGULO, INFORME A MEDIDA DA HIPOTENUSA
    
    printf("CALCULE A HIPOTENUSA");
    
    printf("\n\nCATETO 1 = ");
    scanf("%f", &cateto1);
    printf("CATETO 2 = ");
    scanf("%f", &cateto2);
    
    hipotenusa = sqrt( (cateto1 * cateto1) + (cateto2 * cateto2) );
    
    printf("\nHIPOTENUSA = %f", hipotenusa);
    
    return 0;
    
}
