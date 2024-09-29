#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main(void)
{
    FILE *cliente_file;
    cliente_file = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\cadastro_cliente.txt","a");

    
    if (cliente_file == NULL){
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente!");
        getchar();
        exit(1);
    }

    char nome[400];
    char cpf[12];

    printf("Nome do cliente:\n");
    fgets(nome, sizeof(nome), stdin); // Lê a string com fgets
    nome[strcspn(nome, "\n")] = 0;

    do{
        printf(" * Apenas numeros * \n");
        printf("CPF:\n");
        fgets(cpf, sizeof(cpf), stdin); // Lê a string com fgets
        cpf[strcspn(cpf, "\n")] = 0;
    } while (strlen(cpf) != 11);

    if (fprintf(cliente_file, "%s - %s\n", nome, cpf) < 0) {
        printf("Erro ao escrever no arquivo.\n");
    } else{
        printf("Cliente adcionado com sucesso");
    }
        

    return 0;
}
