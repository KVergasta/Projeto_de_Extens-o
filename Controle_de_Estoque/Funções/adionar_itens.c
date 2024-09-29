#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main() {

    int add();
    int add_that =add();
    printf(add_that);


    return 0;
}


int add(){
    
    FILE*file;
    file = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\estoque.txt","a");


    if (file == NULL){
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente!");
        getchar();
        exit(1);
    }

    char sabor[400];
    int quantidade;

    printf("Sabor: ");
    fgets(sabor, sizeof(sabor), stdin); // Lê a string com fgets
    sabor[strcspn(sabor, "\n")] = 0; // Remove a nova linha do final da string

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    // Escreve no arquivo
    if (fprintf(file, "%s - %d\n", sabor, quantidade) < 0) {
        printf("Erro ao escrever no arquivo.\n");
    } else{
        printf("Adcionado com sucesso");
    }

    
    // Fecha o file
    fclose(file);
}
