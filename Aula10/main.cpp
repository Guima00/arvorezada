#include <iostream>
#include "ArvBin.h"
using namespace std;

int main()
{
    ArvBin arv;
    arv.montaArvore();
    arv.preOrdem();
    cout<<endl;
    cout<<arv.contanos()<<endl;
    return 0;
}
