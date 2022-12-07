#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int numero;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    char sexo[2], nome[30], sobrenome[30], email[30], comecar, novamente;
    int idade;
    long int cpf, cep, celular;


    printf("**Sejam Bem-Vindos ao Cadastro Buz Latinha**\n\n");
    printf("1 - Já possui cadastro?\n");
    printf("2 - Criar cadastro\n");
    printf("\nEscolha a opção desejada: \n");
    scanf("%d", &numero);
    switch(numero)
    {
    case 1:
        system("cls");
        printf("Iniciando o login...\n");
        break;
    case 2:
        system("cls");
        printf("Iniciando o cadastro...\n");
        break;

    default:
        printf("Opção Inválida.\n");
    }


    printf("\nPodemos dar ínicio ao cadastro? (S ou N): ");
    scanf(" %c", &comecar);


    do{
        if(comecar == 'S') {
            printf("\nOk, iniciando o cadastro...\n\n");
        }
        else{
            printf("Ok, quando quiser começar, reinicie o programa.\n\n");
            return 0;
        }

        printf("Por favor, insira seu nome: ");
        scanf("%s", &nome);
        printf("\n\n");

        printf("Ok, %s, agora o seu sobrenome: ", nome);
        scanf("%s", &sobrenome);
        printf("\n\n");

        printf("Obrigado %s %s, agora, me diga seu sexo. (M ou F): ", nome, sobrenome);
        scanf(" %c", &sexo);
        printf("\n\n");

        printf("Qual sua idade? ", idade);
        scanf(" %d", &idade);
        printf("\n\n");

        printf("Qual o seu CPF? ", cpf);
        scanf(" %llu", &cpf);
        printf("\n\n");

        printf("Estamos quase finalizando, qual o seu CEP? ", cep);
        scanf(" %llu", &cep);
        printf("\n\n");

        printf("Qual o seu celular? ", celular);
        scanf(" %llu", &celular);
        printf("\n\n");

        printf("E por último, qual o seu email? ", email);
        scanf(" %s", &email);
        printf("\n\n");


        printf("**Cadastro finalizado com sucesso**\n\n");

        printf("Nome: %s", nome);
        printf("\nSobrenome: %s", sobrenome);
        printf("\nSexo: %s", sexo);
        printf("\nIdade: %d", idade);
        printf("\nCPF: %llu", cpf);
        printf("\nCEP: %llu", cep);
        printf("\nCelular: %llu", celular);
        printf("\nEmail: %s", email);




            printf("\nDeseja começar o cadastro novamente? (S ou N): ");
            scanf(" %c", &novamente);

            if(novamente == 'N') {
                printf("\n\nCadastro finalizado com sucesso.\n\n");
            }

    }
            while(novamente == 'Sim');

    return 0;
}
