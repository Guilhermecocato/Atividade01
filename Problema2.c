#include <stdio.h>
int main()
{
    float distancia, litrosgastos, consumomedio;
    
    //DADOS UMA DISTANCIA E O TOTAL DE LITROS DE COMBUSTIVEL GASTO POR UM AUTOMOVEL PARA PERCORRE-LA, INFORME O CONSUMO MEDIO

    printf("CALCULE O CONSUMO MEDIO DE COMBUSTIVEL");
    
    printf("\n\nINSIRA A DISTANCIA(KM) = ");
    scanf("%f", &distancia);
    printf("TOTAL DE LITROS GASTOS = ");
    scanf("%f", &litrosgastos);
    
    consumomedio = (distancia / litrosgastos);
    printf("\nCONSUMO MEDIO DE COMBUSTIVEL = %4.2f LITROS POR KM", consumomedio);
    
    return 0;
}


