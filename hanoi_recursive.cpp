#include<iostream>

using namespace std;

//função que indica os passos para conseguir finalizar a torre de hanoi
void torreHanoi(int peças, char torreInicial, char torreDestino, char torreAux){
	if(pecas == 1) 
		cout<<”Mova de “<<torreInicial<<” para ”<<”torreDestino”<<endl;
	else{
        //cria uma variável para a peça abaixo da primeira
        int peca_anterior = pecas-1;

        //utiliza a segunda peça e transforma a torre auxiliar na torre de destino
        torreHanoi(peca_anterior, torreInicial, torreAux, torreDestino);
        //informa o passo que se deve realizar
        cout<<”Mova de ”<<torreInicial<<” para ”<<torreDestino<<endl;
        //utiliza a terceira peça e transforma a torre auxiliar na torre inicial
        torreHanoi(peca_anterior, torreAux, torreDestino, torreInicial);
    }
}

int main(){
	//declara uma variável que armazena a quantidade de peças do jogo
	int pecas;
	
    //recebe a quantidade de peças e armazena na variável
	cout<<”Digite o numero de pecas: ”;
	cin>>pecas;
	
	//chama a função que mostra o passo a passo
	torreHanoi(pecas, “A”, “B”, “C”);
}
