#include<iostream>

using namespace std;

int main(){
    //recebe as dimensões da matriz A
    int linha1, coluna1;
    cout<<"Digite a quantidade de linhas da matriz A: ";
    cin>>linha1;
    cout<<"Digite a quantidade de colunas da matriz A: ";
    cin>>coluna1;

    //recebe as dimensões da matriz B
    int linha2, coluna2;
    cout<<"Digite a quantidade de linhas da matriz B: ";
    cin>>linha2;
    cout<<"Digite a quantidade de colunas da matriz B: ";
    cin>>coluna2;

    //verifica se é possível realizar o produto das matrizes
    if (coluna1 != linha2){
        cout<<"Não é possível calcular o produto entre as raizes!\n";
        return 1;
    }

    //cria as matrizes para o cálculo
    int matA[linha1][coluna1], matB[linha2][coluna2];

    //recebe os valores da matriz A
    for(int i=0; i<linha1; i++)
        for(int j=0; j<coluna1; j++){
            cout<<"Digite o valor da coluna "<<j+1<<" da linha "<<i+1<<" na matriz 1: ";
            cin>>matA[i][j];
        }

    //recebe os valores da matriz B
    for(int i=0; i<linha2; i++)
        for(int j=0; j<coluna2; j++){
            cout<<"Digite o valor da coluna "<<j+1<<" da linha "<<i+1<<" na matriz 2: ";
            cin>>matB[i][j];
        }
    
    //cria a matriz resultante
    int matRes[linha1][coluna2], l=0;

    //realiza os cálculos de produto 
    for(int i=0; i<linha1; i++){
        int j=0, soma=0;
        for(j=0; j<coluna2; j++){
            //armazena o produto das linhas pelas colunas e soma
            soma += matA[i][j]*matB[j][l];
        }
        //armazena a soma na matriz resultante
        matRes[i][l]=soma;

        //garante que todas as linhas e colunas sejam percorridas
        if(i==3 && l<3){
            i=0; l++;
        }
    }

    //mostra a matriz A na tela
    cout<<"\nMatriz A: \n";
    for(int i=0; i<linha1; i++){
        for(int j=0; j<coluna1; j++){
                cout<<matA[linha1][coluna1]<<"\t";
            }
        cout<<"\n";
    }

    //mostra a matriz B na tela
    cout<<"\nMatriz B: \n";
    for(int i=0; i<linha2; i++){
        for(int j=0; j<coluna2; j++){
                cout<<matB[linha2][coluna2]<<"\t";
            }
        cout<<"\n";
    }

    //mostra a matriz resultante
    cout<<"\nProduto das matrizes (AxB): \n";
    for(int i=0; i<linha1; i++){
        for(int j=0; j<coluna2; j++){
                cout<<matRes[linha1][coluna2]<<"\t";
            }
        cout<<"\n";
    }
}