// comunidade indígena produz chinelos de juta e criou um site para vender a produção online. Os chinelos são de apenas um tipo, mas são produzidos em vários tamanhos.
// Você foi contratado(a) para desenvolver um programa de controle de estoque para o site. O estoque pode ser visto como uma tabela com uma única linha, em que cada coluna representa um tamanho, como mostrado na figura (a) abaixo. Na figura, os tamanhos são representados por números de 1 a 5. Assim, a tabela da figura (a) informa que o estoque do chinelo de tamanho 1 é 4 unidades, e o estoque do chinelo de tamanho 4 é 3 unidades.
// Quando um chinelo é vendido, o estoque deve ser atualizado. Por exemplo, se um chinelo de tamanho 1 for vendido, o estoque atualizado é mostrado na figura (b). Se o estoque para um tamanho de chinelo tem valor zero, chinelos desse tamanho não podem ser vendidos (por exemplo o chinelo de tamanho 3). Ou seja, a venda não é efetivada.
// Dados o estoque inicial e a lista de pedidos de clientes, escreva um programa para determinar quantos chinelos são efetivamente vendidos no total. Cada pedido se refere a um único chinelo. As vendas são processadas sequencialmente, na ordem em que os pedidos foram feitos. Se uma venda não é possível por falta de estoque, o pedido correspondente é ignorado.

// Input
// A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 500), o número de tamanhos de chinelos no estoque. Tamanhos são identificados por inteiros de 1 a N. Cada uma das N linhas seguintes contém N inteiros Xi (0 ≤ Xi ≤ 20), indicando a quantidade de chinelos de tamanho i, para 1 ≤ i ≤ N. A seguir a entrada contém uma linha com um número inteiro P (q ≤ P ≤ 1000), o número de pedidos recebidos pela loja. Cada uma das P linhas seguintes contém um inteiro I representando o tamanho do chinelo de um pedido. Os pedidos são dados na ordem em que foram feitos.
// Output
// Seu programa deve produzir uma única linha, contendo um único inteiro, o número total de chinelos efetivamente vendidos.

#include <iostream>
 
int main(){
 
//input:
    //TAMANHO DAS CHINELAS E A QUANTIDADE DE CADA TAMANHO
    int QtdIndices, QtdItensIndice; //identificados de 1 à N ;
    std::cin>>QtdIndices;
    int ArrayChinelas[QtdIndices+1]; //pois Array[0] não conta
 
    ArrayChinelas[0] = 0;
    for(int i=1;i<=QtdIndices;i++){ //Array recebe a quantidade de chinelas de um tamanho i para por no estoque
        std::cin>>QtdItensIndice;
        ArrayChinelas[i]=QtdItensIndice;
    }
 
    //QUANTIDADE DE PEDIDOS E OS TAMANHOS QUE FORAM PEDIDOS
    int QtdPedidos, TamanhoPedido; //o TamanhoPedido é para se referir ao indice que deve ser retirado um numero no estoque LEMBRE-SE DISSO, DEVE SER USANDO DE PARAMETRO PARA O INDICE!!!!!!
    int ChinelosVendidos = 0;
    std::cin>>QtdPedidos;
    for(int i=0;i<QtdPedidos;i++){ //Quantidade de vezes que TamanhoPedido deve receber valor
        std::cin>>TamanhoPedido;
        if(ArrayChinelas[TamanhoPedido] == 0){ //verifica se o valor no index é 0, se for continue;
          continue;
        }
        else{ //se o valor do index for >=1 
          ArrayChinelas[TamanhoPedido] -=1; //diminui o valor no index pois foi retirado do estoque uma chinela
          ChinelosVendidos++; //recebe +1 para dizer quantas chinelas foram vendidas no total
        }
        
    }
 
 
//output:
    //informa quantos chinelos foram REALMENTE vendidos
    std::cout<<ChinelosVendidos<<std::endl;
    
 
    //array que cada indice equivale a um tamanho de sapato e o valor armazenado é igual a quantidade de sapatos daquele tamanho ; LEMBRANDO QUE O VALOR ARRAY[0] NÃO DEVE SER USADO!!!!! 1 À N; ARRAY[N+1], POIS O INDICE 0 NAO CONTA;
 
    // OBS OQ TEM: array com numeros que equivale a quantidade de sapatos de tamanho i; se i == 0 não pode ser possivel vender, ou seja, continue e nao faça nada ; se i != 0 e alguem comprar deve acontecer array[i] -= 1 pra diminuir o estoque
    return 0;
}