//Escreva um programa que leia dois valores L1 e L2, que representam os lados de um retângulo e mostre o perímetro do mesmo.
//Input
//Uma única linha com dois valores inteiros L1 e L2 (1 ≤ L1, L2 ≤ 109).
//Output
//Um único inteiro com o perímetro do retângulo.

#include <iostream>

int main(){
    long long int L1, L2, PerimetroDoRetangulo;
    //2*(l1 + l2)
    std::cin>>L1>>L2;
    PerimetroDoRetangulo = 2*(L1 + L2);
    std::cout<< PerimetroDoRetangulo <<std::endl;

    return 0;
}