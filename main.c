#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;    
    while ((c = getchar()) != EOF)
    {
        if (isupper(c)) // COMPRUEBA SI EL CARACTER ESTA EN MAYÚSCULAS
        {
            putchar(tolower(c)); // COLOCA EL CARACTER EN MINÚSCULAS
        }
        if (islower(c)) // COMPRUEBA SI EL CARACTER ESTA EN MINÚSCULAS
        {
            putchar(toupper(c)); // COLOCA EL CARACTER EN MAYÚSCULAS
        }
        if (ispunct(c)) // COMPRUEBA SI EL CARACTER ES UN CARACTER DE PUNTUACION
        {
            putchar(c); // COLOCA EL DIGITO COMO ESTA
        }
    }
    return 0;
}
