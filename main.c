#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i,j;

    char nome[20];
    char sobrenome[20];

    char nomes[10][20];
    char sobrenomes[10][20];

    FILE *file_entrada_nome;
    FILE *file_entrada_sobrenome;
    FILE *file_saida;

    //abre os arquivos
    file_entrada_nome = fopen("entrada_nome.txt", "r");
    file_entrada_sobrenome = fopen("entrada_sobrenome.txt", "r");
    file_saida = fopen("saida.txt", "w+");



    // carrega o arquivo entrada nome no array NOMES
    for (i = 0; i <= 9; i++){

        fgets(nome, 15, file_entrada_nome);

        strcpy(nomes[i],nome);
        
        // imprime os nomes na tela
        //printf("%d: %s",i,nomes[i]);
    }

    for (j = 0; j <= 9; j++){
        
        fgets(sobrenome,15,file_entrada_sobrenome);
        strcpy(sobrenomes[j],sobrenome);

        // imprime os sobrenomes na tela
        //printf("%d: %s",j,sobrenomes[j]);

    }

    //imprime os nomes no arquivo
    for (i = 0; i <= 9; i++){

        for (j = 0; j <= 9; j++){
            
            printf("\nnome: %d - sobrenome: %d - OK",i ,j);

            fprintf(file_saida,"%s-%s",nomes[i],sobrenomes[j]);
            
        }
        
    }
    

    return 0;
}
