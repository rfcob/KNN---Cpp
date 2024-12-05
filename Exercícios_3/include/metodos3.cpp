// metodos2.cpp
#include "knn3.h"
#include <iostream>
#include <cmath>
#include <string>

//#include <vector>

//metodo instanciar matriz dinâmicamente
void knn::instanciarMatriz(){
     mat = new float*[linhas];
      for(int i = 0; i < linhas; i++){
          mat[i] = new float[colunas];
      }
}

//meto entrada de dados
void knn::preencher() { 
    
    for(int i = 0; i < linhas; i++){
      for(int j = 0; j < colunas; j++){
         cout << "Entre com os valores: " << (i+1) << (j+1) << endl;
         cin >> mat[i][j];
      }
    }
}

// Metodo exibir quando instanciada dinamicamente, com entrada pelo usuario
void knn::ematriz(){

    for(int i=0;i<linhas;i++){
        for(int j = 0; j<colunas; j++){
        cout << mat[i][j] << " ";
        }
    cout << endl;
    }
   
}


// função exibir/imprimir os arrays na tela
void knn::exibirmatriz(float* matriz, int linhas, int colunas){

    for(int i=0;i<linhas;i++){
        for(int j = 0; j<colunas; j++){
        cout << matriz[i * colunas + j] << " ";
        }
    cout << endl;
    }
   
}


void knn::set_linhasMatriz(int lin){
    this-> linhas = lin;
}
    
void knn::set_colunasMatriz(int col){
   this -> colunas = col;
}

int knn::get_linhasMatriz(){
    return linhas;
}
    
int knn::get_colunasMatriz(){
    return colunas;
}






//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||



//Método comparar o tamanho dos vetores
int knn::compara(){
    if (tam_array_1==tam_array_2){
        return 0;
    }else{
        return -1;
    }
}

//Método inicizalizar o tamanho dos vetores
void knn::init(int tam1,int tam2){
    tam_array_1=tam1;
    tam_array_2=tam2;
}

//Métodos pegar o tamanho dos arrays
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

int knn::get_numObj( string tipo){
    if(tipo=="euclidiana"){
        return numObj_euclidiano;
    }else if(tipo=="manhatam"){
        return numObj_manhatam;
    }else if(tipo=="chebychev"){
        return numObj_chebychev;
    }else if(tipo=="minkoviski"){
        return numObj_minkoviski;
    }else{
        return -1;
    }
}

int knn::get_numManH( ){
    return numObj_manhatam;
}

int knn:: get_numEuCL(){
    return numObj_euclidiano;
}

int knn::get_numMinK( ){
    return numObj_minkoviski;
}

int knn::get_numCheB( ){
    return  numObj_chebychev;
}



//Método Encontrar maior - chebchev
float knn::distChby(float* array, int len_array){
    float maior=array[0];
    //cout << maior;
    for(int i=0;i<len_array;i++){
        if (array[i] > maior){
            maior=array[i];
        }
    }
    return maior;
}

//função inicilizar os vetores privados dinâmicamente
/*knn::knn(int size) : size(size), distancia(0) { 
    array1 = new float[size]; 
    array2 = new float[size]; 
}*/


//Metodo calcular distância euclidiana e Manhattan
double knn::distancia(float* array_1, float* array_2,int p){

    if(p==1){
        numObj_manhatam++;
    }else if(p==2){
        numObj_euclidiano++;
    }else{
        numObj_minkoviski++;
    }

    int comparando = compara();


    int retorno;
    double d, sum_d = 0, powsum =0, distEuclidana=0;

    if (comparando == -1){
        cout << " Listas de tamanho diferente";
    }else{
        for(int i = 0; i<tam_array_1; i++){
            d=abs(array_1[i]-array_2[i]);
            sum_d+= pow(d,static_cast<double>(p));
            numXcalc++;
        } 
        distEuclidana=pow(sum_d,1.0/static_cast<double>(p)); 
    }

    return distEuclidana;  
}


//Metodo sobrecarga: Chebychev 
double knn::distancia(float* array_1, float* array_2){

    numObj_chebychev++;

    float* distChebychev = new float[tam_array_1];
    int comparando = compara();
    float maximo;
    double d, sum_d = 0;

    if (comparando == -1){
        cout << " Listas de tamanho diferente";
    }else{
        for(int i = 0; i<tam_array_1; i++){
            d=abs(array_1[i]-array_2[i]);
            distChebychev[i]=d;
            numXcalc++;
        } 
        maximo = distChby(distChebychev,tam_array_2);
        //cout << "OK";
    }

    return maximo;  
}
