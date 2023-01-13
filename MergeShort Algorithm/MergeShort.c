#include <stdio.h>

void merge(int A[], int p, int q, int r){
    int subArranjoUm, subArranjoDois, i , j, k;
    int left[subArranjoUm + 1]; 
    int right[subArranjoDois + 1];  // O mais um é para e variável sentinela
  //  int left[subArranjoUm]; 
   // int right[subArranjoDois];

    subArranjoUm = q - p;
    subArranjoDois = r - q;

    for(i = 0; i < subArranjoUm; i++){
     //   left[i] = A[p + i - 1];
        left[i] = A[p + i];
    }
    for(j = 0; j <= subArranjoDois; j ++){
        right[j] = A[q + j];
    }

    left[subArranjoUm + 1] = 1000000;  // Valores sentinela
    right[subArranjoDois + 1] = 1000000;

    i = 1;
    j = 1;
    k = p;

    while(k < r){
        printf("DDD");
     /*   if(left[i] <= right[j]){
            A[k] = left[i];
            i = i + 1;
        }
        else{
            A[k] = right[j];
            j = j +1;
        }*/
        k++;
    }

   /* for (k = p; k < r; k++){
        printf("A");
        if(left[i] <= right[j]){
            A[k] = left[i];
            i = i + 1;
        }
        else{
            A[k] = right[j];
            j = j +1;
        }*/
   // }
}


/* FUNÇÃO PRINCIPAL
void mergeSort(int A[], int p, int r){
    if (p < r){

    }
}
*/

void mostrar(int Arrranjo[]){
    for (int i = 0; i < 14; i++)
        printf("%d ", Arrranjo[i]);
}



int main(){
    int tamAranjo, meioArranjo, inicioArranjo = 0;

    int arranjo[] = {1,8,3,4,2,6,7,18,9,50,10,-11,-12,13};

 //   mostrar(arranjo);
 //   printf("\n");

    tamAranjo = sizeof(arranjo) / sizeof(arranjo[0]);
    meioArranjo = tamAranjo/2;


    merge(arranjo, inicioArranjo, meioArranjo, tamAranjo - 1);

  //  mostrar(arranjo);

    return 0;
}


/*
Procedimento merge:
    -> A[] é um arranjo
    -> p,q e r são indicedes enumeração dos elementos do arranjo, tais que p <= q < r 
    p -> Inicio do primeiro item do arranjo
    q -> Item do meio do arranjo
    q + 1 -> Item inicio da metade do arranjo
    r -> Item do fim do arranjo
*/