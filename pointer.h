#include <stdio.h>

void pointer();

void pointer(){
    int teste = 25;
    int *test;

    test = &teste;

    printf("Ausgabe für Pointer \n");
    printf("%d: Intergerwert \n", teste);
    printf("%d: Adresse von Integer %d über Pointer \n", test, teste);
    printf("%d: Zugriff auf Wert Pointer \n", *test);
    printf("%d: Adresse von Pointer \n", &test);
    printf("%d: Adresse von Integer\n", &teste);
    printf("check following for detailed informartion: https://www.tutorialspoint.com/cprogramming/c_pointers.htm \n");
}