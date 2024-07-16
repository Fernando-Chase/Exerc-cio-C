#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct t_pessoa{
    char nome[200];
    int idade;
    float peso;
    float altura;
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    struct t_pessoa lista[3];
    int i;
    
    for(i=0; i<3; i++){
        printf("Insira o nome da pessoa de posição %d:\n", i);
        scanf("%199s", &lista[i].nome);
        printf("Insira a idade da pessoa de posição %d:\n", i);
        scanf("%d", &lista[i].idade);
        printf("Insira o peso da pessoa de posição %d:\n", i);
        scanf("%f", &lista[i].peso);
        printf("Insira a altura da pessoa de posição %d:\n", i);
        scanf("%f", &lista[i].altura);
    }
    
    printf("Nome da primeira pessoa: %s\n", lista[0].nome);
    printf("Idade da primeira pessoa: %d\n", lista[0].idade);
    
    printf("Peso da ultima pessoa: %.2f\n", lista[2].peso);
    printf("Altura da ultima pessoa: %.2f\n", lista[2].altura);

    return 0;
}
