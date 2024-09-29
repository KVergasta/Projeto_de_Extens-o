#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main()
{
    void deletar_arquivo(FILE *file1, FILE *file2);

    FILE *file1 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt","r");

    if (file1 == NULL){
        printf("Erro ao abrir o arquivo");
    }
    
    FILE *file2 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\2_estoque.txt","w");

    deletar_arquivo(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void deletar_arquivo(FILE *file1, FILE *file2){
    char leitor[1000];
    char item_remove[400];

    printf("Digite dessa forma -> sabor - quantidade\n");
    printf("Considere os espaços\n\n");
    printf("Item que deseja excluir\n");

    scanf("%s", item_remove);

    while(fgets(leitor, 1000, file1)){
        if (strstr(leitor, item_remove) == NULL)
        {
            fputs(leitor, file2);
        }
        
    }
}
