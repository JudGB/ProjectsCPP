#include <print>  // imprime na tela mais fácil (version c++ 26)
#include <vector> //transforma em um vector para eu poder manipular 
#include <iostream> //Biblioteca padrão de input/output

/*
Modelo Atividade Prática 2 da N1 - Estrutura de Dados I
07/10/2026
Judson Gabriel Ferreira dos Santos
Ainda não sei mexer em c++, mas nada do que documentação, google e turorial não
resolva perdão pelos garranchos de novo :}
*/

int main() {
    int val;
    std::vector<int> meu_vetor = {10, 20, 30, 40};
    std::size_t tamanho = meu_vetor.size();
    
    // O std::print formata coleções automaticamente entre colchetes [10, 20, 30, 40]
    std::print("Array de {} elementos e seus valores: {}\n", tamanho, meu_vetor);
    std::print("\n0 - Sair\n""1 - Buscar\n""2 - Inserir\n""3 - Remover\n""4 - Mínimo e Máximo\n""5 - Sucessor e Predecessor\n");
    std::cout << "Digite a opção que deseja" << std::endl;
    std::cin >> val;
    
    switch(val){
        case 0:
            exit;

        case 1:{
            int Num;
            std::print("Sua array no momento {}\n", meu_vetor);
            std::print("Deseja achar o Índice de um número? so digitar o número. . .\n");
            std::cin >> Num;
            for (int i=0; i < meu_vetor.size(); i++){
                if(Num == meu_vetor[i]){
                    std::print("Seu índice é {}\n", i);
                    break;
                }
                
            }
        }
        
        case 2:{
            int Num;
            std::print("Sua array no momento {}\n", meu_vetor);
            std::print("Deseja adicionar um número? so digitar o número. . .\n");
            std::cin >> Num;
            meu_vetor.push_back(Num);
            std::print("Seu número foi add com sucesso {}\n", meu_vetor);
            break;
        }
        
        case 3:{
            int Num;
            std::print("Sua array no momento {}\n", meu_vetor);
            std::print("Deseja remover um número? so digitar o número. . .\n");
            std::cin >> Num;
            for (int i=0; i < meu_vetor.size(); i++){
                if(Num == meu_vetor[i]){
                    // meu_vetor.begin() aponta para o início, somamos o índice para achar a posição certa
                    meu_vetor.erase(meu_vetor.begin() + i); 
                    std::print("Seu número foi removido com sucesso {}\n", meu_vetor);
                    break;
                }
                
            }
        }
        
        case 4:{
            int maior = meu_vetor[0];
            int menor = meu_vetor[0];
            int total = 0;
            
            for(int i = 0; i < meu_vetor.size(); i++){
                if (meu_vetor[i] < menor){
                    menor = meu_vetor[i];
                }
                if (meu_vetor[i] > maior){
                    maior = meu_vetor[i];
                }
                
            }
            std::print("Maior número {} e Menor número {}\n", maior, menor);
            break;

        }
        
        case 5:{
            int Num;
            std::print("Deseja saber o sucessor e antecessor de um número? so digitar o número. . .\n");
            std::cin >> Num;
            
            for(int i = 0; i < meu_vetor.size(); i++){
                if(Num == meu_vetor[i]){
                    
                    if (i - 1 < meu_vetor.size()){
                       
                        std::print("Seu antecessor é {}\n", meu_vetor[i - 1]);
                        
                    }else{
                        
                        std::print("Seu antecessor é None\n");   
                    }
                    if (i + 1 < meu_vetor.size()){
                       
                        std::print("Seu sucessor é {}\n", meu_vetor[i + 1]);
                        
                    }else{
                        
                        std::print("Seu sucessor é None\n");    
                    }
                    
                    break;
                    
                }
                
                
            }

        }
    }
}