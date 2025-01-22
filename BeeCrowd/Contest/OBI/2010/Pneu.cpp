//Entrada: A primeira linha da entrada contém um inteiro N que indica a pressão desejada pelo motorista (1 ≤ N ≤ 40). A segunda linha contém um inteiro M que indica a pressão lida pela bomba (1 ≤ M ≤ 40).
//Saída: Seu programa deve imprimir uma única linha, contendo a diferença entre a pressão desejada e a pressão lida.

#include <iostream>

int main(){
    int pressao_desejada, pressao_lida, diff;
    std::cin>>pressao_desejada>>pressao_lida;

    diff = pressao_desejada - pressao_lida;

    std::cout<<diff<<std::endl;

    return 0;
}