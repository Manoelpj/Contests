// Dado um array A de números inteiros e um número inteiro s, determine se há em A um par de valores cuja soma seja s

// Input
// A primeira linha da entrada contém dois números inteiros n (2 ≤ n ≤ 104) e s (1 ≤ s ≤ 2 × 109), a quantidade de elementos do array e o valor da soma a ser encontrado. A segunda linha contém n números inteiros ai (1 ≤ ai ≤ 109), separados por espaços.
// Output
// Seu programa deve mostrar uma única linha informando se há um par de inteiros no array A, onde ai + aj = s e i ≠ j. O programa escreve YES caso haja tal soma, ou NO caso não haja.

#include <iostream>

int main(){
    //verificar se em Array[QtdElementosArray] tem um par de soma que seja igual a ValorSoma;
    
    //POSSO USAR TALVEZ ASSIM: 
    // for(int i : Array){
    //     if(Array[indice-1]+ Array[indice] != ValorSoma){
    //         continue;
    //     }else if(Array[indice-1] + Array[indice] == ValorSoma){
    //         std::cout<<"YES"<<std::endl
    //     }
    // }


//input
    //linha 01
    int QtdElementosArray, Valores, ValorSoma;
    std::cin>>QtdElementosArray>>ValorSoma; //Tamanho do Array e ValorSoma que deve ser encontrado
    int Array[QtdElementosArray];

    for(int i=0;i<QtdElementosArray;i++){ //Adicionando os valores no Array
        std::cin>>Valores;
        Array[i]=Valores;
    }

//codigo
    int indice = 0;
    int VerificarYes = 0; //se VerificarYes continuar igual a 0 o output será "NO"
    for(int i=0;i<QtdElementosArray;i++){
        
        if(indice == i){
            continue; 
        }else if((Array[indice] + Array[i]) == ValorSoma){
            std::cout<<"YES"<<std::endl;
            VerificarYes++;
            break;
        }else if((QtdElementosArray - 2) == i){ //caso o indice especifco apos verificar em todo o array não encontrar uma soma que seja igual a ValorSoma ele vai para o proximo indice e continuar percorrendo o array até encontrar uma soma;
            indice++;
            i=0;
        }
    }

//output
    if(VerificarYes == 0){ //caso não tenha uma soma compativel com ValorSoma o output sera "NO"
        std::cout<<"NO"<<std::endl;
    }
    
    
//verificando se há algo errado
    //std::cout<<"Valor do indice: "<<indice<<std::endl;
    
    //o Array está correto
    //for(int i : Array){
        //std::cout<<i<<" ";
    //}
    
    

    return 0;
}