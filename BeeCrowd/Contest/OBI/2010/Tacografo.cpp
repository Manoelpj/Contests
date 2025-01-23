//Entrada: A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 1000) representando a quantidade de intervalos de tempo registrados no tacógrafo. As N linhas seguintes descrevem os intervalos de tempo. Cada uma dessas linhas possui dois inteiros T e V (1 ≤ T ≤ 100, 0 ≤ V ≤ 120), que representam, respectivamente o tempo decorrido (em horas) e a velocidade média (em quilômetros por hora) no intervalo de tempo.

//Saída: Seu programa deve imprimir uma única linha, contendo um único número inteiro representando a distância total percorrida, em quilômetros.

#include <iostream>

int main(){
    int qtd_intervalos;
    int tempo_decorrido, velocidade_media;

    for(int i=0;i<qtd_intervalos;i++){
        std::cin>>tempo_decorrido;
        std::cin>>velocidade_media;
    }


    return 0;
}