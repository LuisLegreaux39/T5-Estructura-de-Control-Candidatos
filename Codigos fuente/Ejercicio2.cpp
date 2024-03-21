/*
 * Participantes:
 * - Hector Junior Morales Veloz - A00114842
 * - Luis Ricardo Legreaux Medina - A00114843
 * - Joshua Alberto Martinez Fernandez - A00115333
 * - Steven Paulino - A00115455
 * - John De la cruz - A00114885
 * - ...
 */

#include <stdio.h>
#include <cstdlib>

int system(const char *command);

int main()
{
    int i;
    for (i = 1; i <= 500; i++)
    { // el primer bucle for es para la condición de que la variable sea menor o igual a 500 en el conteo
        for (i = i; i % 2 != 0; i++)
        {                     // el segundo bucle for es para hacer verificación de que el numero sea impar en el conteo hasta 500
            printf("%d ", i); // si el numero es impar se mostrara el numero
        }
    }

    int e = 1;
    while (e <= 500)
    { // el bucle while establece la condición para que se mantenga el bucle
        if (e % 2 != 0)
        {                     // en el proceso se verificara que el numero es impar
            printf("%d ", e); // el numero impar se mostrara
        }
        e++; // al terminar el bucle la variable sumara 1 a su valor
    }

    int o = 1;
    do
    {
        if (o % 2 != 0)
        {                     // el bucle do establece lo que se ejecutara, la revision de la variable si es impart
            printf("%d ", o); // se imprime la variable solo si el valor es impar
        }
        o++;            // al final del proceso se suma 1 a la variable
    } while (o <= 500); // se establece que solo se ejecutara la acción si se cumple la condición, variable menor o igual a 500
    system("pause");
    return 0;
}
