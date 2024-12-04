//knn.h
#ifndef KNN3_H
#define KNN3_H

#include <iostream>
#include<string>
//#include <vector>
using namespace std;

class knn{

    private:
        static int numXcalc;
        static int numObj;
        static int numObj_manhatam;
        static int numObj_euclidiano;
        static int numObj_chebychev;
        static int numObj_minkoviski;
        int size;
        //float*array1;
        //float*array2;
        float *distChebychev;
        float distEuclidana;
        int tam_array_1;
        int tam_array_2;
    
    public:

    knn(){
        tam_array_1=0;
        tam_array_2=0;
        numXcalc=0;
        distEuclidana=0;
        numObj++;
        }
    
    knn(int size);
    //int arraysize(float array[]);
    int compara();
    int contCalcDE();

    int get_size_treino( );
    int get_size_rotulo( );
    int get_iteracoes( );

    int get_numObj( );
    int get_numObj(string tipo);
    int get_numManH( );
    int get_numEuCL( );
    int get_numMinK( );
    int get_numCheB( );

    void exibir(float* array, int size);
    void init(int tam1,int tam2);

    double distancia(float* array_1, float* array_2, int p);
    double distancia(float* array_1, float* array_2);
    float distChby(float* array, int len_array);


};

int knn::numXcalc = 0;
int knn::numObj = 0;
int knn::numObj_euclidiano = 0;
int knn::numObj_manhatam = 0;
int knn::numObj_chebychev = 0;
int knn::numObj_minkoviski;


#endif // KNN3_H