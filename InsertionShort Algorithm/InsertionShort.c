#include <stdio.h>

void insertionShort(int arrranjo[], int tamArranjo){  // Algoritmo de ordenação InsertionShort
    int chave, i = 0, j = 0;

    for (j = 1; j < tamArranjo; j++){
        chave = arrranjo[j];  
        i = j - 1;

        while((i >= 0) && (arrranjo[i] > chave)){
            arrranjo[i + 1] = arrranjo[i];
            i = i - 1;
        }
        arrranjo[i + 1] = chave;
    }
}


int main(){
    int arranjo[] = {1,2,3,4,1,6,0, -1, 100, 7}; // Arranjo exemplo

    int tamArranjo = sizeof(arranjo) / sizeof(arranjo[0]);  // Nessa expressão pegasse o tamanho em bytes do arranjo o divide pelo tamanho do tipo do primeiro item do arranjo, assim achando a quantidade de intens do arranjo.

    insertionShort(arranjo, tamArranjo);  // Chamando a função e passando os valores 

    for(int i =0 ; i < tamArranjo; i++){  // Printado arranjo ordenado
        printf("%d ", arranjo[i]);
    }

    return 0;
}
