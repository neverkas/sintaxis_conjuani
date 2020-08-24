#include <stdio.h>

//#define centinela '\0'

unsigned longitudCadena (const char* cadena)
{
  int i;
  for(i = 0; *(cadena + i) != '\0'; i++)
    ;
  return i;
    /*
    EJERCICIO 1: Completá la definición de esta función para que devuelva la cantidad de caracteres de cadena 
    (parámetro de entrada de la función), así
    longitudCadena ("Hola") deberá devolver 4
    longitudCadena ("") deberá devolver 0
    longitudCadena ("Titulo\t1") deberá devolver 8

    REQUISITOS: 
        * Se debe usar la palabra reservada: for
        * La función deberá comportarse en forma análoga a unsigned strlen (const char*) declarada en string.h
    */
}

int esCadenaVacia (const char* cadena)
{
  //return 0 == longitudCadena(cadena); Manera mas corta
  int cantidad_de_caracteres = longitudCadena(cadena);

  if(cantidad_de_caracteres == 0) return 1;
  return 0;
    /*
    EJERCICIO 2: Completá la definición de esta función para que devuelva si la cadena recibida es vacía
    (parámetro de entrada de la función) y 0 en caso contrario, así
    longitudCadena ("Hola") deberá devolver 0
    longitudCadena ("") deberá devolver 1
    longitudCadena ("Titulo\t1") deberá devolver 0

    REQUISITOS: 
        * Se debe usar la palabra reservada: if
    */
}

char* copiarCadena (char* cadena1, const char* cadena2)
{

    char centinela = '\0';

    for(int i = 0; (*(cadena1+i) = *(cadena2+i))  != centinela ; i++)
      ;// sentencia nula
      
    /*
    EJERCICIO 3: Completá la definición de esta función para que 
    * copie en cadena1 la cadena presente en cadena2 (ambas recibidas como parámetros)
    * devuelva lo que quedó en cadena1
    así
    copiarCadena ("1", Hola") deberá devolver "Hola"
    copiarCadena ("UNO", "") deberá devolver ""
    copiarCadena ("", Titulo\t1") deberá devolver "Titulo\t1"

    REQUISITOS: 
        * Se debe usar la palabra reservada: for
        * Se debe usar el caracter nulo
        * La función deberá comportarse en forma análoga a char* strcpy (char* s, const char* t) declarada en string.h
    */
    return (cadena1);
}

// 
char* concatenarCadena (char* cadena1, const char* cadena2)
{
  
  char centinela = '\0';
  
  int i;
  for(int i = 0; *(cadena1+i) != centinela;i++)
     printf("test %d \n", (cadena1 + i)); // sentencia nula
    
  for(int k = 0;(*(cadena1 + i + k) = *(cadena2+k)) != centinela; k++)
     printf("test %d \n", (cadena1 + i + k));
    /*
    EJERCICIO 4: Completá la definición de esta función para que 
    * concatene (agregue al final) en cadena1 la cadena presente en cadena2 (ambas recibidas como parámetros)
    * devuelva lo que quedó en cadena1
    así
    concatenarCadena ("1", Hola") deberá devolver "1Hola"
    concatenarCadena ("UNO", "") deberá devolver "UNO"
    concatenarCadena ("", "Titulo\t1") deberá devolver "Titulo\t1"

    REQUISITOS: 
        * Se debe usar la palabra reservada: for
        * Se debe usar el caracter nulo
        * La función deberá comportarse en forma análoga a char* strcat (char* s, const char* t) declarada en string.h
    */
    return (cadena1);
}

int main()
{
    char str0[] = "Resistencia", str1[] = "V1LL4 4NG3LA", str2[] = "", str3[] = "90\t\r\n";
    char strCopia[50];

    printf("EJERCICIO 1: LONGITUD DE CADENA\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Longitud segun longitudCadena de \"%s\" es %u.\n", str0, longitudCadena(str0));
    printf("Longitud segun longitudCadena de \"%s\" es %u.\n", str3, longitudCadena(str3));
    printf("-------------------------------------------------------------------------\n\n\n");
    
    printf("EJERCICIO 2: CADENA VACÍA\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Segun esCadenaVacia de \"%s\" %s vacía.\n", str0, esCadenaVacia(str0) ? "ES" : "NO ES");
    printf("Segun esCadenaVacia de \"%s\" %s vacía.\n", str2, esCadenaVacia(str2) ? "ES" : "NO ES");
    printf("-------------------------------------------------------------------------\n\n\n");

    printf("EJERCICIO 3: COPIA DE CADENA\n");
    printf("-------------------------------------------------------------------------\n");
    copiarCadena (strCopia, str0);
    printf("La copia segun copiarCadena de \"%s\" es \"%s\".\n", str0, strCopia);
    copiarCadena (strCopia, str1);
    printf("La copia segun copiarCadena de \"%s\" es \"%s\".\n", str1, strCopia);
    printf("-------------------------------------------------------------------------\n\n\n");

    printf("EJERCICIO 4: CONCATENACION DE CADENA\n");
    printf("-------------------------------------------------------------------------\n");
    copiarCadena (strCopia, str1);
    concatenarCadena (strCopia, str0);
    printf("La concatenacion segun concatenarCadena de \"%s\" a \"%s\" es \"%s\".\n", str0, str1, strCopia);
    copiarCadena (strCopia, str2);
    concatenarCadena (strCopia, str0);
    printf("La concatenacion segun concatenarCadena de \"%s\" a \"%s\" es \"%s\".\n", str0, str2, strCopia);
    printf("-------------------------------------------------------------------------\n\n\n");

    return (0);
}




