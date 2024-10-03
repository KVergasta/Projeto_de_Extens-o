#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

void ler_arquivo();
int adicionar_item();
void copiar_arquivo(FILE *file2, FILE *file1); // essa função foi criada para copiar os itens toda vez que foi adicionado no 1_estoque para o 2_estoque, sendo utilizada como salvamento dos dados
void deletar_item(FILE *file1, FILE *file2);
void cadastro_cliente(); // cadastra o cpf e o nome do cliente
int listar_clientes(); // mesma caracteristica da leitura do estoque
void verifica_igual(FILE *file1, FILE *file2); // ira mostra itens duplicatos
void consultar_cpf_cliente(FILE *file1, FILE *file2);

int main() {

    int escolha_usuario;

    FILE*file1;
    FILE*file2;


    // cabeçalho
    printf("| Aluno(a): Kauane Vergasta Silva Rodridrigues|\n");
    printf("| Semestre: 2024.4                            |\n");
    printf("| Curso: CiEncia da Computacao                |\n\n\n");

// opções do suário
    printf("========================    ESTOQUE     ==========================|\n");
    printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
    printf("|                      5 - Sabores Iguais                         |\n");
    printf("|======================   BANCO DE DADOS  ========================|\n");
    printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
    printf("|                      8 - Listar Clientes                        |\n");
    printf("| ================================================================|\n");
    printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");

    scanf("%d", &escolha_usuario);

    do
    {
        switch (escolha_usuario)
        {
            case 1:
                // chamada da função para ler o arquivo
                ler_arquivo();

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");

                scanf("%d", &escolha_usuario);
                break;

            case 2:
                adicionar_item();


                sleep(1);
                
                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
                scanf("%d", &escolha_usuario);
                break;
            
            case 3:

                deletar_item(file1, file2);

                sleep(1);
                
                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
                
                scanf("%d", &escolha_usuario);
                break;
            
            case 4:
                
                copiar_arquivo(file2, file1);

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
            
                scanf("%d", &escolha_usuario);
                break;

            case 5:
                
                verifica_igual(file2, file1);

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
            
                scanf("%d", &escolha_usuario);
                break;

            case 6:
                
                cadastro_cliente(file2, file1);

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
            
                scanf("%d", &escolha_usuario);
                break;

            case 7:
                consultar_cpf_cliente(file1, file2);

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
            
                scanf("%d", &escolha_usuario);
                break;

            case 8:
                
                listar_clientes();

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");
            
                scanf("%d", &escolha_usuario);
                break;

            case 0:
                copiar_arquivo(file2, file1);

                sleep(1);
                printf("Saindo do sistema...\n");
                break;
            
            default:
                printf("\nEscolha invalida.\n\n");

                sleep(1);

                printf("========================    ESTOQUE     ==========================|\n");
                printf("|1 - Consulta de Estoque  2 - Adicionar   3 - Remover  4 - salvar |\n");
                printf("|                      5 - Sabores Iguais                         |\n");
                printf("|======================   BANCO DE DADOS  ========================|\n");
                printf("| 6 - Cadastro de Cliente          7 - Consultar Clientes         |\n");
                printf("|                      8 - Listar Clientes                        |\n");
                printf("| ================================================================|\n");
                printf("|                   0 - SAIR DO SISTEMA                           |\n\n ");

                scanf("%d", &escolha_usuario);
        }
        
    } while (escolha_usuario != 0); // condição de parada é o 0

    if (escolha_usuario == 0)
    {
        copiar_arquivo(file2, file1);

        sleep(1);
        printf("Arquivo salvo.");

        sleep(1);
        printf("Encerrado com sucesso !");
    }
    
    return 0;
}

void ler_arquivo(){


    FILE * file;
    char linha_read[10000];

    // Abre o file para leitura, como pode ver, só vai ler o arquivo modificado (2_estoque)
    file = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt", "r");

    if (file == NULL)
    {
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente.\n");
        exit(0);
    }
    
    // Lê e imprime cada linha_read do file utilizando file get string, != NULL -> vai ser interrompido assim que não houver mais linha_read 
    while (fgets(linha_read, 10000, file) != NULL) {
        printf("%s", linha_read);
    }

    // Fecha o file
    fclose(file);

}

int adicionar_item(void){

    FILE*file;
    file = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt","a");
    if (file == NULL){
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente!\n");
        getchar();
        exit(1);
    }
    char sabor[400];
    int quantidade;

    printf("Tudo em letra minuscula !\n");
    sleep(1);
    printf("Sabor: ");

    getchar(); // Limpa o buffer do teclado

    fgets(sabor, sizeof(sabor), stdin); // Lê a string com fgets
    sabor[strcspn(sabor, "\n")] = 0; // Remove a nova linha do final da string

    sleep(1);
    printf("Quantidade: ");
    scanf("%d", &quantidade);

    // Escreve no arquivo
    if (fprintf(file, "%s = %d\n", sabor, quantidade) < 0) {
        sleep(1);
        printf("Erro ao escrever no arquivo.\n");
    } else{
        sleep(1);
        printf("Adcionada com sucesso\n\n");
    }
    fclose(file);// Fecha o file




    return 0;
}

void copiar_arquivo(FILE *file2, FILE *file1){

    file1 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt","r");
    file2 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\2_estoque.txt","w");

    if (file1 == NULL){
        sleep(1);
        printf("Erro ao abrir o arquivo\n");
    }
    
    char leitor[1000];

    while(fgets(leitor, 1000, file1)){
        fputs(leitor, file2);
    }
    fclose(file1);
    fclose(file2);
}

void deletar_item(FILE *file1, FILE *file2){

    file1 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt","w");

    if (file1 == NULL){
        sleep(1);
        printf("Erro ao abrir o arquivo\n");
    }
        
    file2 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\2_estoque.txt","r");

    char leitor[1000];
    char item_remove[400];

    printf("Item que deseja excluir\n");
    sleep(1);
    scanf("%s", item_remove);

    while(fgets(leitor, 1000, file2)){
        if (strstr(leitor, item_remove) == NULL)
        {
            fputs(leitor, file1);
        }
    }

    sleep(1);
    printf("Item removido com sucesso\n");

    fclose(file1);
    fclose(file2);
}

void cadastro_cliente(){

    FILE *cliente_file;
    cliente_file = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\cadastro_cliente.txt","a");

    
    if (cliente_file == NULL){
        sleep(1);
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente!\n");
        getchar();
        exit(1);
    }

    char nome[400];
    char cpf[12];

    printf("Nome do cliente:\n");
    
    getchar(); // Limpa o buffer do teclado
    
    fgets(nome, sizeof(nome), stdin); // Lê a string com fgets
    nome[strcspn(nome, "\n")] = 0;

    sleep(1); 

    do{
        printf(" * Apenas numeros * \n");
        sleep(1);
        printf("CPF:\n");
        fgets(cpf, sizeof(cpf), stdin); // Lê a string com fgets
        cpf[strcspn(cpf, "\n")] = 0;
    } while (strlen(cpf) != 11);

    if (fprintf(cliente_file, "%s - %s\n", nome, cpf) < 0) {
        sleep(1);
        printf("Erro ao escrever no arquivo.\n");
    } else{
        sleep(1);
        printf("Cliente adcionado com sucesso\n");

        sleep(1);
        printf("Ao encerrar o sistema o cadastro será salvo automaticamente.\n");
    }
        

    return 0;
}

int listar_clientes(){

    FILE * consumidores;
    char linha[10000];

    // Abre o consumidores para leitura
    consumidores = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\cadastro_cliente.txt", "r");

    if (consumidores == NULL)
    {
        sleep(1);
        printf("O arquivo nao pode ser aberto\nPor favor, tente novamente.");
        exit(0);
    }
    

    // Lê e imprime cada linha do consumidores
    while (fgets(linha, 10000, consumidores) != NULL) {
        printf("%s", linha);
    }

    // Fecha o consumidores
    fclose(consumidores);

    return 0;
}

void verifica_igual(FILE *file1, FILE *file2){

    file1 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\1_estoque.txt","r");
    file2 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\2_estoque.txt","w");

    if (file1 == NULL){
        printf("Erro ao abrir o arquivo");
    }
    

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

    fclose(file1);
    fclose(file2);

    return 0;
}

void consultar_cpf_cliente(FILE *file1, FILE *file2){

    file1 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\cadastro_cliente.txt","r");

    if (file1 == NULL){
        printf("Erro ao abrir o arquivo");
    }
    
    file2 = fopen("C:\\Users\\kauve\\Documents\\codes\\C\\projeto_extensao\\consulta_cliente.txt","w");
    
    char leitor[1000];
    char cpf[12];
    
    
    getchar();

    do{
        printf(" * Apenas numeros * \n");
        printf("CPF:\n");
        fgets(cpf, sizeof(cpf), stdin); // Lê a string com fgets
        cpf[strcspn(cpf, "\n")] = 0;
    } while (strlen(cpf) != 11);

    while(fgets(leitor, 1000, file1)){
        if (strstr(leitor, cpf) != NULL)
        {
            printf(leitor, file2);
            fputs(leitor, file2);
            return 1;
        } 
    }

    fclose(file1);
    fclose(file2);

    
}
