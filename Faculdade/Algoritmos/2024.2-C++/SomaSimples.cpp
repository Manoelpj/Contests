//Escreva um programa que leia dois números inteiros a e b e mostre a soma dos mesmos.
//Input
//A entrada contém duas linhas, cada uma contendo um número inteiro, a e b ( - 1000 ≤ a, b ≤ 1000).
//Output
//A saída deve conter uma única linha o resultado da soma a + b.

#include <iostream>


int main(){
    int a, b;
    std::cin>>a;
    std::cin>>b;

    a += b;

    std::cout<< a <<std::endl;

    return 0;
}