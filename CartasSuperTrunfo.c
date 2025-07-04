#include <stdio.h>

int main(){

 //Carta 1;
    char codigoa = "a01";
    int estadoa= 'A';
    char Cidadea[20]= "RECIFE";
    double Populacaoa= 2000000;
    float areaa= 218.800;
    double pibaa= 54.961000000;
    int turismoa= 100 ;


    printf("codigoA:%d\n",codigoa);
    printf("estado:%c\n",estadoa);
    printf("cidade:%s\n",Cidadea);
    printf("populacao:%.2f\n",Populacaoa);
    printf("area:%.2fKM²\n",areaa);
    printf("PIB:%.2f\n",pibaa);
    printf("turismo:%d\n",turismoa);
    printf("\n");
    printf("\n");



 //Carta 2;

    char codigoB = "b01";
    int estadoB= 'B';
    char CidadeB[20]= "sao_lourenco";
    double PopulacaoB= 115000;
    float areaB= 264.346;
    double pibB= 1.400000000;
    int turismoB= 40;


    printf("codigo:%d\n",codigoB);
    printf("estado:%c\n",estadoB);
    printf("cidade:%s\n",CidadeB);
    printf("populacao:%.2f\n",PopulacaoB);
    printf("area:%.2fKM²\n",areaB);
    printf("PIB:%.2f\n",pibB);
    printf("turismo:%d\n",turismoB);


    return 0;
// o codigo acima classifica cartas de acordo com suas especificidases.
// função "printf" exibe as informações selecionadas("36...42").
// As variaveis classificam as informaçoes dos sujeitos("4...10").
// as funções "%" ligam as variaveis a seus lugares(36...42).

 }







