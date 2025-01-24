//Entrada: A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100) representando o número de bandejas que o garçom tentou entregar. As N linhas seguintes representam as N bandejas. Cada linha contém dois inteiros L e C, indicando o número de latas e o número de copos naquela bandeja, respectivamente (0 ≤ L, C ≤ 100).

//Saída: Seu programa deve imprimir uma única linha, contendo um único inteiro, indicando o número total de copos que o garçom quebrou.

#include <iostream>

int main(){

    int bandejas; // N
    int qtd_latas, qtd_copos; // L ; C
    int copos_quebrados = 0; // output da qtd de copos quebrados

    std::cin>>bandejas;
    for(int i=0;i<bandejas;i++){ 
        std::cin>>qtd_latas>> qtd_copos;
        if(qtd_latas>qtd_copos){ //verifica a linha, se for isso mesmo ele adiciona.
            copos_quebrados += qtd_copos;
        }
    }
    
    std::cout<<copos_quebrados<<std::endl;
    return 0;
}