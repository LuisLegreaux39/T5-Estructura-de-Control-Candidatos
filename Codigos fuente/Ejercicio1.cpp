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

    int edad; // Se define la variable de la edad
    while (1)
    { // Se crea un bucle para ejecutar el código hasta que la condición se cumpla
        printf("Tu edad es: ");

        if (scanf("%d", &edad) == 1)
        {
            if (edad >= 0 && edad <= 3)
            { // Se establece la condición para el rango de edad de un bebe
                printf("Eres un bebe.\n");
            }
            else if (edad >= 4 && edad <= 10)
            { // Se establece la condición para el rango de edad de un niño
                printf("Eres un niño.\n");
            }
            else if (edad >= 11 && edad <= 17)
            { // Se establece la condición para el rango de edad de un adolescente
                printf("Eres un adolescente.\n");
            }
            else if (edad >= 18)
            { // Se establece la condición para el rango de edad de un adulto
                printf("Eres un adulto.\n");
                if (edad >= 122)
                {
                    printf("Eres la persona mas vieja"); // Se establece una condición para el record de vejez
                }
            }
            break; // Se rompe el bucle si la condición inicial se cumple
        }
        else
        {
            printf("Valor invalido. Ingresa un numero.\n"); // Se imprime el mensaje si se ingresa un valor no numérico
            while (getchar() != '\n')
                ;
        }
    }
    system("pause");
    return 0;
}
