//Entrada: A entrada consiste de duas linhas. A primeira linha da entrada contém dois inteiros L e D (1 ≤ L, D ≤ 104), indicando o comprimento da estrada e a distância entre pedágios, respectivamente. A segunda linha contém dois inteiros K e P (1 ≤ K, P ≤ 104 ), indicando o custo por quilômetro percorrido e o valor de cada pedágio. O primeiro pedágio está localizado no quilômetro D da estrada (ou seja, a distância do início da estrada para o primeiro pedágio é D quilômetros).

//Saída: Seu programa deve imprimir uma única linha contendo um único inteiro, indicando o custo total da viagem.

#include <iostream>

int main(){
    int tmnh_estrada, dist_pedagios;
    std::cin>> tmnh_estrada >> dist_pedagios;

    int custo_km, valor_pedagio;
    std::cin>> custo_km >> valor_pedagio;

    int qtd_pedagios;
    qtd_pedagios= tmnh_estrada/dist_pedagios;

    valor_pedagio *= qtd_pedagios; // qtd de pedagio vezes o valor de cada pedagio

    custo_km *= tmnh_estrada; // custo da gasolina por km, de acordo com tmnh da estrada

    int valor_final;
    valor_final = valor_pedagio + custo_km;

    std::cout<< valor_final <<std::endl;

    return 0;
}