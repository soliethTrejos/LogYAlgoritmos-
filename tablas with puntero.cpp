/*realiza una tabla de multipricar con punteros */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, *ptr, i = 0;
    ptr = &num;
    cout << "ingrese un numero para realizar la tabla de multiplicar: ";
    scanf("%d", &num);

    while (i <= 12)
    {
        printf ( "%i * %i = %i\n, i, *ptr , i * *ptr");
    }

    return 0;
}