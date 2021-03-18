#include <iostream>
using namespace std;

int suma(int,int,int,int,int);
int main()
{
    int a,b,c,d,e;
    cout<<"podaj 5 dowolych liczb calkowitych: ";
    cin>>a>>b>>c>>d>>e;
    cout<<"suma tych liczb wynosi: "<<suma(a,b,c,d,e);
    return 0;
}
int suma(int a,int b,int c,int d,int e)
{
    int suma,suma2,suma3,suma4;
    suma2 = a+b;
    suma3 = a+b+c;
    suma4 = a+b+c+d;
    suma = a+b+c+d+e;

    return suma;
}

