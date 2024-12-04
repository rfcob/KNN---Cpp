/*Questão 2:

Faça  uma  nova  versão  da  classe  anterior,  o  qual  torne  possível  escolher  se  o  calculo  de 
distância deve ser realizado usando as seguintes funções: 

(i) distância euclidiana, 
(ii) distância Manhattan e 
(iii) Chebychev -  D(p,q)=max_i∣p_i - q_i∣

*/


#include <iostream>
#include "../include/metodos2.cpp"
#include "../include/knn2.h"
using namespace std;

int main(){

    knn2 KNN; //instanciando objeto

    //declarando vetores/lendo frames

    float array1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0,9.0,10.0};
    int len_array_1= sizeof(array1)/sizeof(array1[0]);
    float array2[] = {1.5, 2.5, 3.5, 4.5, 5.9, 6.5, 7.5, 8.5, 9.5, 10.5};
    int len_array_2= sizeof(array2)/sizeof(array2[0]);

    cout << "Vetor 1" <<endl;
    KNN.exibir(array1, len_array_1);
    cout << endl;
    cout << "Vetor 2" << endl;
    KNN.exibir(array2, len_array_2);

    /*
    
    2.1.As  demais  características  também  devem  ser  atualizadas,  de  forma  que  cada  calculo 
    tenha um contador específico e um contador global. 

    */

    cout << "O numero de objetos instanciados (contagem global) são " << KNN.get_numObj()  <<  endl << "\n";
    cout << "Contagem cálculo Manhatam: " << KNN.get_numObj("manhatam") << endl << "\n";
    cout << "Contagem cálculo Euclidiana: " << KNN.get_numObj("euclidiana") << endl << "\n";
    cout << "Contagem cálculo Chebychev: " << KNN.get_numObj("chebychev") << endl << "\n";
    cout << "Contagem cálculo Minkoviski: " << KNN.get_numObj("minkoviski") << endl << "\n";
    /*
    

    2.2.Os métodos que fornecem os valores dos contadores também devem ser expandido, de 
    maneira que cada método entrega o valor de um contador específico. 
    
    */

   knn2 Objeto, Objeto2;
   cout << endl;
   cout << "O numero de objetos instanciados usando o método " << KNN.get_numObj()  <<  endl << "\n";

   KNN.distancia(array1, array2);
   KNN.distancia(array1, array2, 3);


    cout << "O numero de objetos instanciados (contagem global) são " << KNN.get_numObj()  <<  endl << "\n";
    cout << "Contagem cálculo Manhatam: " << KNN.get_numObj("manhatam") << endl << "\n";
    cout << "Contagem cálculo Euclidiana: " << KNN.get_numObj("euclidiana") << endl << "\n";
   // cout << "Contagem cálculo Chebychev: " << KNN.get_numObj("chebychev") << endl << "\n";
   // cout << "Contagem cálculo Minkoviski: " << KNN.get_numObj("minkoviski") << endl << "\n";

    /*
    chamando individualmente pelo metodo proprio
    */

    cout << " Minkoviski: " << KNN.get_numMinK() << endl << "\n";

    //_________________________________________________________________________________________________




    return 0;
}
