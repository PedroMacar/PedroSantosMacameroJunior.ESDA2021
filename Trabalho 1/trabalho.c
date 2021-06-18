#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Trabalho{
    char nomeEstudante[50], apelido[50];
    int codigoEstudante, nivel;
    float nota;
}
Trabalho aluno;
void menu();
void sair();
void registar();
void listar();

int main(){
    menu();
    return 0;
}
void menu(){
    int escolhas;
    do{
        printf("\n Escolhas: ");
        printf("escolha um o que deseja fazer \n 1.Sair  \n  2.Registar  \n  3.Listar");
        scan("%f%*c", &escolhas);
        switch (escolhas){
            case 1:
            sair();
            break;
            case 2:
            registar();
            break;
            case 3:
            listar();
            break;
            default:
            printf("\n este valor nao é válido.");
            break
        }
    }while (escolhas != 4);


}
void sair(){
    exit();
}
void registar (){
    printf("Digite o Nome do aluno");
    scanf("%s", &aluno.nomeEstudante);

    printf("Digite o Apelido do aluno");
    scanf("%s", &aluno.apelido);

    printf("Digite o codigo no aluno");
    scanf("%d", &aluno.codigoEstudante);

    printf("Digite o nivel do aluno");
    scanf("%d", &aluno.nivel);

    printf("Digite a nota do aluno");
    scanf("%f", &aluno.nota);
} 
void listar (){
    printf(" \n O nome do aluno é: %s ", aluno.nomeEstudante);

    printf(" \n O Apelido do aluno é: %s ", aluno.apelido);

    printf(" \n O código do aluno é: %d ", aluno.codigoEstudante);

    printf(" \n O nivel do aluno é: %d ", aluno.nivel);

    printf(" \n A nota do aluno é: %.2f ", aluno.nota);
    
}