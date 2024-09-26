#include <stdio.h>
#include <stdlib.h>



int main() {

    int leitura_arquivo();
    int read_that = leitura_arquivo();
    printf(read_that);


    return 0;
}

int leitura_arquivo(){

    FILE * file;
    char linha[100];

    // Abre o file para leitura
    file = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\estoque.txt", "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente.");
        exit(0);
    }
    

    // Lê e imprime cada linha do file utilizando file get string, != NULL -> vai ser interrompido assim que não houver mais linha 
    while (fgets(linha, 100, file) != NULL) {
        printf("%s", linha);
    }

    // Fecha o file
    fclose(file);

    return 0;
}
