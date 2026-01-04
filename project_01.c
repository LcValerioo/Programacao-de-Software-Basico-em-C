#include<stdio.h>

/*
//Função que utiliza um contador estatico
void incrementaContador(){
    //Declaração do contador estatico
    static int contador = 0;

    //Incrementa contador
    contador++;

    //Imprime o valor atual do contador
    printf("Contador: %d\n", contador);
}

int main(){
    //Chama a função várias vezes para demonstrar o contador estatico
    incrementaContador();
    incrementaContador();
    incrementaContador();
    incrementaContador();
    incrementaContador();
    incrementaContador();

    return 0;
}
*/
int main(){
    int temperatura = 0;

    printf("Digite a temperatura atual: ");
    scanf("%d", &temperatura);

    if(temperatura < 0){
        printf("Está muito frio !\n");
    } else if(temperatura >= 0 && temperatura < 20){
        printf("Está frio, mas não tanto assim! \n");
    }else if(temperatura >= 20 && temperatura < 30){
        printf("Está agradavel, mas até que ponto ?\n");
    }else{
        printf("EStá quente!\n");
    }
""
    return 0;
}