// O recente terremoto em Nlogônia não chegou a afetar muito as edificações da capital, principal epicentro do abalo. Mas os cientistas detectaram que o principal dique de contenção teve um dano significativo na sua parte subterrânea que, se não for consertado rapidamente, pode causar o seu desmoronamento, com a consequente inundação de toda a capital.
// O conserto deve ser feito por mergulhadores, a uma grande profundidade, em condições extremamente difíceis e perigosas. Mas como é a sobrevivência da própria cidade que está em jogo, seus moradores acudiram em grande número como voluntários para essa perigosa missão.
// Como é tradicional em missões perigosas, cada mergulhador recebeu no início do mergulho uma pequena placa com um número de identificação. Ao terminar o mergulho, os voluntários devolviam a placa de identificação, colocando-a em um repositório.
// O dique voltou a ser seguro, mas aparentemente alguns voluntários não voltaram do mergulho. Você foi contratado para a penosa tarefa de, dadas as placas colocadas no repositório, determinar quais voluntários perderam a vida salvando a cidade.

// Input
// A entrada é composta de duas linhas. A primeira linha contém dois inteiros N e R (1 ≤ R ≤ N ≤ 104), indicando respectivamente o número de voluntários que mergulhou e o número de voluntários que retornou do mergulho. Os voluntários são identificados por números de 1 a N. A segunda linha da entrada contém R inteiros, indicando os voluntários que retornaram do mergulho (ao menos um voluntário retorna do mergulho).
// Output
// Seu programa deve produzir uma única linha, contendo os identificadores dos voluntários que não retornaram do mergulho, na ordem crescente de suas identificações. Deixe um espaço em branco após cada identificador (note que isto significa que deve haver um espaço em branco também após o último identificador). Se todos os voluntários retornaram do mergulho, imprima apenas o caractere '*' (asterisco).


#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // input
    int QtdVoluntarios, QtdRetornou, RetornoVoluntarios;

    // inputs:
    //std::cout << "Digite a quantidade de Voluntarios totais e quantos retornaram:";
    std::cin >> QtdVoluntarios >> QtdRetornou; // linha 01
    //... //linha 02

    

    // arrays:
    int VoluntariosTotais[QtdVoluntarios];
    int VoluntariosVivos[QtdRetornou];
    std::vector<int> VoluntariosMortos;

    // fors:
    for (int i = 0; i < QtdVoluntarios; i++)
    { // criando o array com valores de 1 à QtdVoluntarios
        VoluntariosTotais[i] = i + 1;
    }

    for (int i = 0; i < QtdRetornou; i++)
    { // criando um array que armazena os voluntarios que voltaram ; irei usa-la para remover os voluntarios que voltaram do Array principal, que armazena TODOS os voluntarios
        //std::cout << "Digite " << i+1 << ":";
        std::cin >> RetornoVoluntarios; // linha 02
        while (RetornoVoluntarios <= 0)
        {
            //std::cout << "Valor " << i+1 << "deve ser maior que 0:";
            std::cin >> RetornoVoluntarios;
        }
        VoluntariosVivos[i] = RetornoVoluntarios;
    }

    // ORDERNAR VOLUNTARIOS VIVOS PARA DAR CERTO AQ:
    // int n;
    int n = sizeof(VoluntariosVivos) / sizeof(VoluntariosVivos[0]); // GPT ordenou a lista de VoluntariosVivos, pois desordenada da erro na verificação que fiz
    std::sort(VoluntariosVivos, VoluntariosVivos + n);

    // CRIA UMA LISTA COM VOLUNTARIOS MORTOS PRA SERVIR DE OUTPUT:
    int index = 0;
    for (int i : VoluntariosTotais)
    {
        if (VoluntariosVivos[index] == i)
        { // se o i for igual ao numero do voluntario vivo ele vai para o proximo numero de voluntario vivo
            index++;
        }
        else if (VoluntariosVivos[index] != i)
        {                                   // se i for diferente do numero de um voluntario vivo ele armazena esse numero, pois esse voluntario esta morto
            VoluntariosMortos.push_back(i); // recebe o numero do voluntario morto e armazena
        }
    }

    // OUTPUT
    if (QtdVoluntarios == QtdRetornou)
    {
        std::cout << "*" << std::endl;
    } else{
        for (int i : VoluntariosMortos){
        std::cout << i << " "; // precisa do espaço, faz parte da questão.
        }  
    }
    
    // verificando se os ARRAYS estão OK
    //  for(int i : VoluntariosTotais){
    //      std::cout<<"Quem sobrou:"<<i<<" "<<std::endl;
    //  }

    // for(int i : VoluntariosVivos){
    //     std::cout<<"Voluntarios que voltaram:"<<i<<" "<<std::endl;
    // }

    // for(int i : VoluntariosMortos){
    //     std::cout<<"Resultado Final:"<<i<<" "<<std::endl;
    // }
    return 0;
    // OBS OQ TEVE: verificar se todos sairam vivo ; verificar(RetornoVoluntarios) se o numero deles é maior que 0, pois é de 1 à QtdVoluntarios
    // OBS OQ FALTOU: verificar se todos tem um numero diferente  ; 
}


