// metodos.cpp
#include "knn.h"
#include <iostream>
#include <cmath>
//#include <vector>

// função exibir/imprimir os arrays na tela
void knn::exibir(float* array, int size){
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

//função comparar o tamanho dos vetores
int knn::compara(){
    if (tam_array_1==tam_array_2){
        return 0;
    }else{
        return -1;
    }
}

//função inicizalizar o tamanho dos vetores
void knn::init(int tam1,int tam2){
    tam_array_1=tam1;
    tam_array_2=tam2;
}

//funções pegar o tamanho dos arrays
int knn::get_size_treino( ){
    return tam_array_1;
}
    
int knn::get_size_rotulo( ){
    return tam_array_1;
}

int knn::get_iteracoes( ){
    return numXcalc;
}

int knn::get_numObj( ){
    return numObj;
}

/*
int igual(){
    return -1;
}

*/

//função inicilizar os vetores privados dinâmicamente
/*knn::knn(int size) : size(size), distEuclidana(0) { 
    array1 = new float[size]; 
    array2 = new float[size]; 
}*/

//função para calcular a distância eucludiana
float knn::distancia(float* array_1, float* array_2){
    //float* distEuclidana = new float[tam_array_1];
    int comparando = compara();
    float d, sum_d = 0, powsum =0;
    if (comparando == -1){
        cout << " Listas de tamanho diferente";
    }else{
        for(int i = 0; i<tam_array_1; i++){
            d=pow(array_1[i]-array_2[i],2);
            powsum+= d;
            numXcalc++;
        } 
        distEuclidana=sqrt(powsum);
    }

    //exibir(distEuclidana, tam_array_1);
    return distEuclidana ;   //
    //delete[] distEuclidana;
    //return numXcalc;

}

