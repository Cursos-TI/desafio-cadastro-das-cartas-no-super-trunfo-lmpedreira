#include<stdio.h>

int main() {

    //Declaracao dos dados das cartas, incluindo os calculos utilizando operadores matematicos//
    char Jogo[30];
    char Estado = 'A', Estado2= 'B';
    char Codigo[10] = "A01", Codigo2[10] ="B02";
    char Cidade [20]= "Sao Paulo", Cidade2[20] = "Rio de Janeiro";
    int Populacao = 12325000, Populacao2 = 6748000;
    int Turismo = 50, Turismo2 = 30;
    float Area = 1521.11, Area2= 1200.25;
    float Pib = 699.28, Pib2 = 300.50;
    float Densidade = Populacao / Area, Densidade2 = Populacao2 / Area2;
    float Pibp = (Pib + Populacao) /2;
    float Pibp2 = (Pib2 + Populacao2) /2;
    float Superpoder = (Populacao + Turismo + Area + Pib + Pibp + Densidade);
    float Superpoder2 = (Populacao2 + Turismo2 + Area2 + Pib2 + Pibp2 + Densidade2);

    //Inicio do Jogo

    printf(" Digite Super Trunfo : \n" );
    scanf("%c", &Jogo);

    //Impressao dados Carta1

    printf("Carta1 \n");

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacao: %i\n", Populacao);
    printf("Area %.2f: Km²\n", Area);
    printf("Pib %.2f: Bilhoes de Reais\n", Pib);
    printf("Numero Pontos Turisticos: %d\n", Turismo);
    printf("Densidade Populacional %.2f: hab/km²\n", Densidade);
    printf("Pib per Capita: %.2f Reais \n", Pibp);
    printf("Super Poder: %.2f\n", Superpoder);
    
    //Impressao  dados Carta2
    
    printf("Carta2 \n");

    printf("Estado:%c\n", Estado2);
    printf("Codigo:%s\n", Codigo2);
    printf("Nome da Cidade:%s\n", Cidade2);
    printf("Populacao:%i\n", Populacao2);
    printf("Area:%.2f Km²\n", Area2);
    printf("Pib:%.2f Bilhoes de Reais\n", Pib2);
    printf("Numero Pontos Turisticos:%d\n", Turismo2);
    printf("Densidade Populacional %.2f: hab/km²\n", Densidade2);
    printf("Pib per Capita: %.2f Reais\n", Pibp2 );
    printf("Super Poder: %.2f\n", Superpoder2);

    //Comparação das Cartas para declarar a vencedora// 

    printf("Comparacao de Cartas: \n");

    printf("Populaao: Carta1 venceu %i\n", Populacao > Populacao2);
    printf("Area: Carta1 venceu %d\n", Area > Area2);
    printf("Pib: Carta1  venceu %d\n",  Pib > Pib2 );
    printf("Pontos Turisticos: Carta1 venceu %d\n", Turismo > Turismo2);
    printf("Densidade Populacional: Carta2 venceu %d\n" , Densidade < Densidade2);
    printf("Pib per Capita: Carta1 venceu %d\n", Pibp > Pibp2);
    printf("Super Poder: Carta1 venceu %d\n", Superpoder > Superpoder2);

    

    return 0;
    
}
