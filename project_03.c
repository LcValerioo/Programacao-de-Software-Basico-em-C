#include<stdio.h>
#include<stdlib.h>

//Implementando um vetor
/*
int main(){
    int numeros[10];
    for(int i; i < 10; i++){
            numeros[i] = i;
            printf("%d\n", numeros[i]);
    }
    return 0;
}
*/


//Implementando uma tabela
/*
int main() {
    int tabela[4][5];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            tabela[i][j] = i * j;
            printf("%d", tabela[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
*/

//Implementando um array "dinamicamente"
/*
int main(){
    int *numeros = (int *) malloc(10 * sizeof(int));
    if(numeros == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }
    for(int i = 0; i < 10; i++){
        numeros[i] = i;
        printf("Numero: %d\n", i);
    }
    free(numeros);
    return 0;
}
*/

//Implementando um array dinamicamente
/*
int main() {
    int *array;
    int size, i;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &size);

    // Alocação dinâmica de memória
    array = (int*) malloc(size * sizeof(int));

    // Verificação de alocação bem-sucedida
    if (array == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1; // Encerra o programa com erro
    }

    // Inserção de números no array
    for (i = 0; i < size; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Exibição dos números
    printf("Você inseriu: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Liberação da memória alocada
    free(array);
    
    return 0;
}
*/

int main(){
    int count = 0, num = 2, i;
    int n = 100; // Deseja-se encontrar o 100º numero primo
    int isPrime;

    while(count < n){
        isPrime = 1; // Assume que o numero é primo
        for(i = 2; i * i <= num; i++){
            if(num % i == 0){
                isPrime = 0; //O numero nao é primo
                break;
            }
        }
        if(isPrime){
            count++;
            if(count == n){
                printf("%dº numero primo é %d.\n", n, num);
            }
        }
        num++;
    }
    return 0;
}