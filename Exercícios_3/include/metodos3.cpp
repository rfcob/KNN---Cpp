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

      numLin=linhas;
      numCol=colunas;
}

//meto entrada de dados
void knn::preencher() { 

    numLin=linhas;
    numCol=colunas;
    
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
void knn::exibirmatriz(float* matriz, int lin, int cols){

    for(int i=0;i<lin;i++){
        for(int j = 0; j<cols; j++){
        cout << matriz[i * cols + j] << " ";
        }
    cout << endl;
    }
   
}

//metodo exibir matriz** enviando o ponteiro
void knn::ematrizP(float* matriz, int lin, int cols){

    for(int i=0;i<lin;i++){
        for(int j = 0; j<cols; j++){
        cout << mat[i][j] << " ";
        }
    cout << endl;
    }
   
}

//metods gets e sets

void knn::set_linhasMatriz(int lin){
    this-> linhas = lin;
}
    
void knn::set_colunasMatriz(int col){
   this -> colunas = col;
}

int knn::get_linhasMatriz(){
    return numLin;
}
    
int knn::get_colunasMatriz(){
    return numCol;
}



//metodo media para a matriz não dinamica
float knn::mediaDeclar(float* matriz, int index){
    float soma=0, media;
    for (int i = 0; i < linhas; i++) {
        soma += mat[i][index];
    }
    media=soma/linhas;
    return media;

}


//metodo media por coluna
float knn::media(int index){
    float soma=0, media;
    for (int i = 0; i < linhas; i++) {
        soma += mat[i][index];
    }
    media=soma/linhas;
    return media;

}

/*//metodo maximo geral
float knn::maximo( ) { 
    float maior = mat[0][0]; 
    for (int i = 0; i < linhas; i++) { 
        for (int j = 0; j < colunas; j++) { 
            if (mat[i][j] > maior) {
                 maior = mat[i][j]; 
            } 
        } 
    } return maior;
}*/


//metodos maximo e minimo

float knn::maximo( int index) { 
    float maior = mat[0][index]; 
    for (int i = 0; i < linhas; i++) {
         if (mat[i][index] > maior) {
             maior = mat[i][index]; 
        } 
    } return maior;
}



float knn::minimo( int index) { 
    float minimo = mat[0][index]; 
    for (int i = 0; i < linhas; i++) {
         if (mat[i][index] < minimo) {
             minimo = mat[i][index]; 
        } 
    } return minimo;
}



//metodo bubble - ordenar

void knn::ordenar(int index) {
    for (int i = 0; i < linhas - 1; i++) {
        for (int j = i + 1; j < linhas; j++) {
            if (mat[i][index] > mat[j][index]) {
                int temp = mat[i][index];
                mat[i][index] = mat[j][index];
                mat[j][index] = temp;
            }
        }
    }
}


//metodo para a mediana
float knn::mediana(int index) {
    ordenar(index); 

    if (linhas % 2 == 0) {
        return (mat[linhas / 2 - 1][index] + mat[linhas / 2][index]) / 2.0;
    } else {
        return mat[linhas / 2][index];
    }
}




//método para a transposta
float** knn::tranposta() {

    transposta = new float*[numCol];
    
    for (int i = 0; i < numCol; ++i) {
        transposta[i] = new float[numLin];
    }

 
    for (int i = 0; i < numLin; i++) {
        for (int j = 0; j < numCol; j++) {
            transposta[j][i] = mat[i][j];
        }
    }
    return transposta;
}



//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
