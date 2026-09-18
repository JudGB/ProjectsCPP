
/*
Modelo Atividade Prática 1 da N1 - Estrutura de Dados I
15/09/2026
Judson Gabriel Ferreira dos Santos
Muito do código peguei de tutoriais, pesquisas avulsas e questionamento de colegas com
mais experiência, nunca mexi com C++ peço perdão pelos erros :)
*/

#include <iostream> //Biblioteca padrão de input/output
#include <iomanip> //para conseguir usar o setprecision
#include <vector> //Biblioteca para poder criar o vector
#include <algorithm> //Biblioteca para pegar o MinMax

//facilitar a escrita std::vector -> vector
using namespace std;

int main(){
    vector<double> notas;
    notas.reserve(50);
    
    
    //1° entrada de valores 50 notas
    for(int i = 0; i < 50; i++){
        cout << "Digite a "<< i + 1<<"° nota ou 'q' para sair:"<< endl;
        string value;
        cin >> value;
        if (value == "q" or value == "Q"){
            break;
        }
        try{
            double TrueValue = stod(value);
            
            notas.push_back(TrueValue);
        }
        catch (...){
            cout << "Digite uma nota ou q para sair...\n";
            i--;
            
        }
       
        
    }
    
    if (notas.empty()){
        cout << "Insira algum valor!"<<endl;
        return 0;
    }
    
    
    double maior = notas[0];
    double menor = notas[0];
    double total = 0;
    
    //2° calcular média
    for(double m = 0; m < 50; m++){
        
        total = total + notas[m];
    }
    
    //3° pega o maior e menor valor
    for(double i = 0; i < notas.size(); i++){
        if (notas[i] < menor){
            menor = notas[i];
        }
        if (notas[i] > maior){
            maior = notas[i];
        }
        
    }
    
    //definindo que o cout esta FIXO nele que so tenha duas casas deciamis
    cout << fixed << setprecision(2); 
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "A média das "<< notas.size()<<" notas é: "<< (total/notas.size()) << endl;
    
}

