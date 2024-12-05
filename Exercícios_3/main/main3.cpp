/*Questão 3: 

Implemente  uma  classe  que  modele  um  conjunto  de  dados  e  operações  que  possam  ser 
realizados nele.  


3.3.Deve  existir  um  método  para  iniciar  o  matriz  depois  que  o  objeto  já  estiver  instanciado  e 
preenche-lo nesse momento. 

3.4.Também  deve  existir  atributos  privados  que  armazenem  a  dimensão  do  matriz  do  objeto, 
com  respectivo  método  para  fornecer  essa  informação  externamente.  Estes  atributos 
devem ser atualizados no momento do preenchimento do matriz. 

3.5.Implemente os seguinte métodos públicos para calcular: 
- Média; 
- Mediana; 
- Valor mínimo; 
- Valor máximo; e 
- Somatória. 
de  uma  coluna  específica.  Os  métodos  devem  receber  como  parâmetro  o  índice  da 
coluna que deverá utilizar para o calculo. 

3.6.Implemente um método que permita calcular a matiz transposta do matriz bidimensional e 
retornar essa nova estrutura para o código externo que invocou o método.

*/

#include <iostream>
#include "../include/metodos3.cpp"
#include "../include/knn3.h"
using namespace std;

int main(){
    int linhas;
    int colunas;


    //float matriz[5][2] = {{1.0, 2.0}, {2.0, 3.0}, {3.0, 4.0}, {5.0, 5.0}, {8.0, 7.0}};
    float matriz[3][2] = {{1.0, 2.0}, {2.0, 3.0} ,{8.0, 7.0}};
    int numL = sizeof(matriz) / sizeof(matriz[0]); 
    int numC = sizeof(matriz[0]) / sizeof(matriz[0][0]);

   // cout << numL <<" " << numC << endl;

    knn KNN;

    /*
        3.1.Deve existir um atributo privado que refere-se a estrutura de matriz bidirecional de valores 
    do tipo float. 

    3.2.Os objetos podem (i) ser instanciados sem um tamanho inicial para o matriz ou (ii) receber 
    as dimensões que o matriz terá. No segundo caso, o usuário deverá inserir os respectivos 
    valores para preencher o matriz. 

    */


    cout << " A matriz lida é: " <<endl << "\n";
    KNN.exibirmatriz(*matriz,numL,numC);

    // entrada estática


    /*
    cout << " Se deseja entrar uma matriz " <<endl << "\n";

    cout << "Entre com o numero de linhas ";
    cin >> linhas;
    KNN.set_linhasMatriz(linhas);

    cout << "Entre com o numero de colunas ";
    cin >> colunas;
    KNN.set_colunasMatriz(colunas);
    
   // cout << "\n"<< KNN.get_colunasMatriz();


    KNN.instanciarMatriz();
    KNN.preencher();
    cout <<" A matriz inicializada é:" << endl << "\n";
    KNN.ematriz();
    cout << endl;
    
    */

   /*
    3.3.Deve  existir  um  método  para  iniciar  o  matriz  depois  que  o  objeto  já  estiver  instanciado  e 
    preenche-lo nesse momento. 
   */

    // Entrada dinamica

    int n, m;
    
    cout << " Se deseja entrar uma matriz " <<endl << "\n";

    cout << "Entre com o numero de linhas ";
    cin >> m;
    

    cout << "Entre com o numero de colunas ";
    cin >> n;

    knn KNN2(m, n);
    
    KNN2.preencher();
    KNN2.ematriz();


    /*
    3.4.Também  deve  existir  atributos  privados  que  armazenem  a  dimensão  do  matriz  do  objeto, 
    com  respectivo  método  para  fornecer  essa  informação  externamente.  Estes  atributos 
    devem ser atualizados no momento do preenchimento do matriz. 
    */



   
   
    return 0;
}
