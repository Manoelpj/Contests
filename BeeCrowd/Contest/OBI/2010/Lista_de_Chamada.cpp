//Entrada: A primeira linha contém dois inteiros N e K separados por um espaço em branco (1 ≤ K ≤ N ≤ 100). Cada uma das N linhas seguintes contém uma cadeia de caracteres de tamanho mínimo 1 e máximo 20 representando os nomes dos alunos. Os nomes são compostos apenas por letras minúsculas de 'a' a 'z'.
//Saída: Seu programa deve imprimir uma única linha, contendo o nome do aluno que deve receber o bônus.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){
    int qtd_alunos; // N
    int sorteado; // K
    std::cin>>qtd_alunos>>sorteado;
    std::vector<std::string> lista_chamada(qtd_alunos);
    
    for(int i=0;i<qtd_alunos;i++){
        //std::cout<<"Aluno_0"<<i+1<<": "; // opcional
        std::cin>>lista_chamada[i];
    }
    
    std::sort(lista_chamada.begin(), lista_chamada.end());
    std::cout<<lista_chamada[sorteado-1]<<std::endl;

    return 0;
}