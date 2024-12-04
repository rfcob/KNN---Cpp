//knn.h
#ifndef KNN_H
#define KNN_H

#include <iostream>
//#include <vector>
using namespace std;

class knn{

    private:
        static int numXcalc;
        static int numObj;        
        int size;
        float*array1;
        float*array2;
        float distEuclidana;
        int tam_array_1=0;
        int tam_array_2=0;

    public:

    knn(){

        int pointer=0;
        numObj++;
        distEuclidana=0;
        }
    
    knn(int size);
    //int arraysize(float array[]);
    int compara();
    int contCalcDE();
    int get_size_treino( );
    int get_size_rotulo( );
    int get_iteracoes( );
    int get_numObj( );
    void exibir(float* array, int size);
    void init(int tam1,int tam2);
    float distancia(float* array_1, float* array_2);

};

int knn::numXcalc = 0;
int knn::numObj = 0;


#endif // KNN_H