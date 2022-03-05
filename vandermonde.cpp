#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double V[100], M[100][100], n, det=1;
    cout<<"\n\tUNIVERSIDAD MAYOR DE SAN ANDRES";
    cout<<"\n\tFACULTAD DE INGENIERIA";
    cout<<"\n\tLABORATORIO DE PROGRAMACION";
    cout<<"\n\tEST: FLORES QUISPE NILO";
    cout<<"\n\n\tINTRODUCE LA MATRIZ (dimenciones) = ";
    cin>>n;

    for(int i=0; i<=n-1; i++){
        cout<<"\n\tintrodusca el termino  "<<i<<" = ";
        cin>>V[i];
    }

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            M[j][i]=pow(V[i],j);
        }
    }
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            det = det*(V[i]-V[j]);
        }
    }

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<M[i][j]<<"\t";
        }
        cout<<"\t\n";
    }
    cout<<"\n\t determinante =  "<<det;
    

    return 0;
}

