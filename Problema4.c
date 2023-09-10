#include <stdio.h>

int main()
{
    float temperatura, celsius;
    
    //DADA UMA TEMPERATURA EM GRAU FAHRENHEIT, INFORME O VALOR CORRESPONDENTE EM GRAUS CELSIUS
    
    printf("INFORME UMA TEMPERATURA EM GRAU FAHRENHEIT\nE CONVERTA EM GRAUS CELSIUS");
    
    printf("\n\nGRAU FAHRENHEIT(ºF) = ");
    scanf("%f", &temperatura);
    
    celsius = (temperatura - 32) * 5/9;
    printf("GRAUS CELSIUS = %fºC", celsius);

    return 0;
}
