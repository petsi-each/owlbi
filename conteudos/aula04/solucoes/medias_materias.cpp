#include <iostream>
using namespace std;
int main(){
    int alunos, medias;
    cin>>alunos>>medias;

    double mat[alunos][medias]={};
    for(int i=0; i<alunos; i++){
        for(int j=0; j<medias; j++){
            cin>>mat[i][j];
        }
    }
    
    double resp[medias]={};
    for(int i=0; i<medias; i++){
        double aux=0;
        
        // soma de medias, iterando para cada aluno
        for(int j=0; j<alunos; j++){
            aux+=mat[j][i]; // atencao ao ordem i-j / j-i
        }
        
        aux/=alunos;
        resp[i] = aux;
    }

    for(int i=0; i<medias; i++){
        cout<<resp[i]<<' ';
    }
    cout<<'\n';

    return 0;
}