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
/*
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

    return 0;
}
*/
/*
int main(){
    int escolha;
    printf("Escolha seu produto:\n1 para Agua\n2 para Refrigerante\n3 para Suco\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("Você escolheu Agua.\n");
        break;
    case 2:
        printf("Você Escolheu Refrigerante.\n");
        break;
    case 3:
        printf("Você escolheu Suco.\n");
        break;
    default:
        printf("Opção invalida. Escolha uma das opções apresentadas!\n");
    }

    printf("\n---------Fim do looping!---------\n");
    return 0;
}
*/
/*
int main(){
    for(int i = 0; i < 5; i++){
        printf("Numero: %d\n", i);
    }
    return 0;
}
*/
/*
int main(){
    int contador = 0;

    while (contador < 5)
    {
        printf("Numero: %d\n", contador);
        contador++;
    }
    return 0;
}
*/

int main(){
    int contador = 0;

    do {
        printf("Numero: %d\n", contador);
        contador++;
    }while (contador < 5);
    
}