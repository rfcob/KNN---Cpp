/*Questão 1: Implemente uma classe que possua um método estático que recebe dois arrays unidimensionais
de  valores  float  e  calcula  a  distância  euclidiana  entre  eles  e  que  mantenha  atualizado 
um  contador  privado  (atributo  estático)  de  quantas  vezes  o  calculo  da  distância entre dois 
arrays foi realizado. */


#include <iostream>
#include "../include/metodos.cpp"
#include "../include/knn.h"
using namespace std;

int main(){

    knn KNN; //instanciando objeto

    //declarando vetores/lendo frames

    float array1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0,9.0,10.0};
    int len_array_1= sizeof(array1)/sizeof(array1[0]);
    float array2[] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5};
    int len_array_2= sizeof(array2)/sizeof(array2[0]);

    /*1.1.O método deve ser capaz de receber arrays de qualquer tamanho (não deve-se 
    especificar o tamanho do array que irá receber). */

    cout << "Vetor 1" <<endl;
    KNN.exibir(array1, len_array_1);
    cout << endl;
    cout << "Vetor 2" << endl;
    KNN.exibir(array2, len_array_2);

    /*1.2.Atenção,  é  importante  verificar  se  os  arrays  são  do  mesmo  tamanho  antes  de  realizar  o 
    calculo. */
    KNN.init(len_array_1, len_array_2);
    cout << endl;
    cout << "Tamanho do vetor 1 " << len_array_1 << endl << "\n";
    cout << "Tamanho do vetor 2 " << len_array_2 << endl << "\n";
    cout << "Tamanho do vetor para armazer classificação: " << KNN.get_size_treino() << endl << "\n";

    /*1.2.1.Caso sejam de tamanhos diferentes, retorne o valor -1.0 como sinal de erro. */
    
    cout << "Vetores comparados =  " << KNN.compara() << ". Logo, mesmo tamanho" <<endl << "\n";

    cout << "Distância= " << KNN.distancia(array1, array2) << endl << "\n";
  
    /*1.3.Deve possuir um método capaz de retornar o valor do contador para códigos externos. */
    
    cout << "A distância euclidiana teve " << KNN.get_iteracoes()  << " iterações realizadas "<< endl << "\n";

    cout << "O numero de objetos instanciados é " << KNN.get_numObj()  <<  endl << "\n";

    knn KNN2;

    cout << "O numero de objetos instanciados é " << KNN.get_numObj()  <<  endl << "\n";

    return 0;
}
