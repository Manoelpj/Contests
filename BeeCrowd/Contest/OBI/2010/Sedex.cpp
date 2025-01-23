//Entrada: A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 10.000) que indica o diâmetro da bola de boliche. A segunda linha da entrada contém 3 números inteiros separados por um espaço cada: a altura A (1 ≤ A ≤ 10.000), seguida da largura L (1 ≤ L ≤ 10.000) e da profundidade P (1 ≤ P ≤ 10.000).

//Saída: Seu programa deve imprimir uma única linha, contendo a letra 'S' caso a bola de boliche caiba dentro da caixa ou 'N' caso contrário.

#include <iostream>

int main(){
    int diametro;
    std::cin>>diametro;
    int altura, largura, profundidade;
    std::cin>>altura>>largura>>profundidade;


    if(diametro > altura || diametro > largura || diametro > profundidade){
        std::cout<<"N"<<std::endl;
    }else{
        std::cout<<"S"<<std::endl;
    }

    return 0;
}