#include <stdio.h>

int main() {
    
    
    int estado= 'A';
    int codigo= 1;
    char Cidade[20]= "RECIFE";
    int populacao1= 2000000;
    float area1= 218.800;
    double pib1= 54.961000000;
    int turismo1= 100 ;
    float quociente= populacao1 / pib1;
    float quociente1=populacao1 / area1;
  
    
   
    

    printf("estado:%c\n",estado);
    printf("codigo:%d\n",codigo);
    printf("cidade:%s\n",Cidade);
    printf("populacao:%d\n",populacao1);
    printf("area1:%.2fKM²\n",area1);
    printf("PIB:%.2f\n",pib1);
    printf("turismo:%d\n",turismo1);
    printf("pib per capta: %.2f \n", quociente);
    printf("densidade populacional: %.2f \n", quociente1);
    printf("\n");
    printf("\n");
    
 //card 2
    int estadoB= 'B';
    int codigo2= 2;
    char CidadeB[20]= "sao_lourenco";
    double PopulacaoB= 115000;
    float areaB= 264.346;
    double pibB= 1.400000000;
    int turismoB= 40;
    double quociente3= PopulacaoB / pibB;
    double quociente2= areaB / PopulacaoB; 

    
    printf("estado:%c\n",estadoB);
    printf("codigo2:%d\n",codigo2);
    printf("cidade:%s\n",CidadeB);
    printf("populacao:%.2f\n",PopulacaoB);
    printf("area:%.2fKM²\n",areaB);
    printf("PIB:%.2f\n",pibB);
    printf("turismo:%d\n",turismoB);
    printf("pib per capta: %.2f \n", quociente3);
    printf("densidade populacional: %.2f \n", quociente2);

    return 0;
// o codigo acima classifica cartas de acordo com suas especificidases.
// função "printf" exibe as informações selecionadas("36...42").
// As variaveis classificam as informaçoes dos sujeitos("4...10").
// as funções "%" ligam as variaveis a seus lugares(36...42).
// fiz alterfções para a melhora das cartas adicionando novas  informações.
 }
