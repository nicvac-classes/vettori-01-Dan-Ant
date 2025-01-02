#include <iostream>
using namespace std;

int main() {
string v[5], w[5];
float x[10], y[10];
int i, p, d;
i=0;
while (i<5)
{
    v[0]="amy";
    v[1]="gino";
    v[2]="Pino";
    v[3]="anna";
    v[4]="Lena";
    cout << "Vettore V cella numero " << i+1 << ":" << v[i] << endl;
    i=i+1;

}
i=0;
while (i<5)
{
    w[0]="Antonio";
    w[1]="Greta";
    w[2]="Giulio";
    w[3]="Giorgio";
    w[4]="Giulia";
    cout << "Vettore W cella numero " << i+1 << ":" << w[i] << endl;
    i=i+1;
}
i=1;
while(i<10)
{
    x[i]=i;
    if( x[i]%2=0)
    {
        p=x[i];
        cout << "Vettore X con indice pari cella numero " << i << ":" <<  p << endl;
        cout << "Vettore X con valore pari cella numero " << i << ":" <<  p << endl;
    }
    else
    {
        d=x[i];
        cout << "Vettore X con indice dispari cella numero " << i << ":" <<  d;
    }
    i=i+1;

}
i=0;
while(i*2<=10)
{
    y[i]=i*2;
    cout << "Vettore Y cella numero " << i+1 << ":" << y[i] << endl;
    i=i+1;
}
}


