#include<bits/stdc++.h> 
#include <random>
using namespace std;

int main(){
    int aMatrix[300][300], bMatrix[300][300], product[300][300];
    int cont=0;

    for(int i=0; i<300; i++){
        for (int j=0; j<300; j++){
            aMatrix[i][j]=rand();
        }
    }
    for(int i=0; i<300; i++){
        for (int j=0; j<300; j++){
            bMatrix[i][j]=rand();
        }
    }

    //  Calculo ijk
    clock_t start, end;

    start = clock();
    // A linha abaixo permite que o tempo de execução não seja interferido com restante do código
    ios_base::sync_with_stdio(false);

    for (int i = 0; i < 300; i++) {
        for (int j = 0; j < 300; j++) {
            for (int k = 0; k < 299; k++) {
                product[i][j] + aMatrix[i][k] * bMatrix[k][j];
            }
        }
    }

    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    
    cout<<"O calculo ijk levou "<<time_taken<<setprecision(9)<<"s para finalizar!\n";

    start = clock();
    ios_base::sync_with_stdio(false);

    //  Calculo jik
    for (int j = 0; j < 300; j++) {
        for (int i = 0; i < 300; i++) {
            for (int k = 0; k < 299; k++) {
                product[i][j] += aMatrix[i][k] * bMatrix[k][j];
            }
        }
    }

    end = clock();

    time_taken = double(end - start) / double(CLOCKS_PER_SEC);;
    
    cout<<"O calculo jik levou "<<time_taken<<setprecision(9)<<"s para finalizar!\n";

    start = clock();
    // A linha abaixo permite que o tempo de execução não seja interferido com restante do código
    ios_base::sync_with_stdio(false);

    //  Calculo jki
    for (int j = 0; j < 300; j++) {
        for (int k = 0; k < 300; k++) {
            for (int i = 0; i < 299; i++) {
                product[i][j] += aMatrix[i][k] * bMatrix[k][j];
            }
        }
    }

    end = clock();

    time_taken = double(end - start) / double(CLOCKS_PER_SEC);;
    
    cout<<"O calculo jki levou "<<time_taken<<setprecision(9)<<"s para finalizar!\n";

    start = clock();
    // A linha abaixo permite que o tempo de execução não seja interferido com restante do código
    ios_base::sync_with_stdio(false);
    
    //  Calculo kji
    for (int k = 0; k < 300; k++) {
        for (int j = 0; j < 300; j++) {
            for (int i = 0; i < 299; i++) {
                product[i][j] += aMatrix[i][k] * bMatrix[k][j];
            }
        }
    }

    end = clock();

    time_taken = double(end - start) / double(CLOCKS_PER_SEC);;
    
    cout<<"O calculo kji levou "<<time_taken<<setprecision(9)<<"s para finalizar!\n";
}