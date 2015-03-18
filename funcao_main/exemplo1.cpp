#include <stdlib.h>
#include <iostream>
 
int main(int argc, char *argv[])
{
    using namespace std;
 
    cout << "Foram passados " << argc << " argumentos:" << endl;
 
    // Passa por cada argumento e imprime sua posição e valor
    for (int nArg=0; nArg < argc; nArg++)
        cout << nArg << " = " << argv[nArg] << endl;

    return 0;
}
