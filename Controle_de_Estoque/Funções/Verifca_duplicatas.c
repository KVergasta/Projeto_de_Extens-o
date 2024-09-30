#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main()
{
    void item_igual(FILE *file1, FILE *file2);

    FILE *file1 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt","r");

    if (file1 == NULL){
        printf("Erro ao abrir o arquivo");
    }
    
    FILE *file2 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\2_estoque.txt","w");

    item_igual(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void item_igual(FILE *file1, FILE *file2){
    char leitor[1000];
    char procura_item[400];
    
    printf("Item que deseja\n");

    scanf("%s", procura_item);

    while(fgets(leitor, 1000, file1)){
        if (strstr(leitor, procura_item) != NULL)
        {
            printf(leitor, file2);
            fputs(leitor, file2);
        }
    }

    return 0;
}
