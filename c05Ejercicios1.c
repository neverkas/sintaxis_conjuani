#include <stdio.h>

unsigned longitud_Cadena (const char* cadena)
{
  int i;

  for(i = 0; *(cadena+i) != '\0'; i++)
    ;
  return i;
}

int main(){
  int a;
  //char cadena[50];
  char* cadena;
  printf("Digite su cadena: ");
  scanf("%s", cadena);
  a = longitud_Cadena(cadena);
  printf("\n\nLa cadena tiene longitud: %d \n\n", a);

  return 0;
}
/*
  EJERCICIO 1:
  Completá la definición de esta función para que devuelva la cantidad de caracteres de cadena
  (parámetro de entrada de la función), así
  longitudCadena ("Hola") deberá devolver 4
  longitudCadena ("") deberá devolver 0
  longitudCadena ("Titulo\t1") deberá devolver 8

  REQUISITOS:
  * Se debe usar la palabra reservada: for
  * La función deberá comportarse en forma análoga a unsigned strlen (const char*) declarada en string.h
  */
    
