#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


char firstLetter(char text[]) {

    for (int i = 0; text[i] != '\0'; ++i) {
        text[i] = toupper(text[i]);
    }
    return text;


}


int buscarCadena(char *cadena, char *buscar)
{
    printf("%s",cadena);
    printf("%s",buscar);
    int contador = 0;
    for (size_t i = 0; cadena[i] != '\0'; i++)
    {
        int cont2 = 0;
        for (size_t j = 0; buscar[j] != '\0'; j++)
        {
            if (tolower(cadena[i + cont2]) == tolower(buscar[j]))
            {
                cont2++;
                if (cont2 == (strlen(buscar)-1))
                {
                    contador++;
                }
            }
        }
    }
    return contador;

}

int contarVocales(char *cadena)
{
    int contador = 0;
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (tolower(cadena[i]) == 'a' || tolower(cadena[i]) == 'e' || tolower(cadena[i]) == 'i' || tolower(cadena[i]) == 'o' || tolower(cadena[i]) == 'u')
        {
            contador++;
        }
    }
    return contador;
}

int buscarPalabra(char *cadena, char *buscar)
{
    char copy[] = "";
    strcat(copy, cadena);
    printf("%c", copy);
    /*int contador = 0;
    for (size_t i = 0; cadena[i] != '\0'; i++)
    {
        int cont2 = 0;
        for (size_t j = 0; buscar[j] != '\0'; j++)
        {
            if (tolower(cadena[i + cont2]) == tolower(buscar[j]))
            {
                cont2++;
                if (cont2 == strlen(buscar))
                {
                    contador++;
                }
            }
        }
    }
    return contador;*/
}
void removerCaracteres(char *cadena, char *caracteres) {
    int indiceCadena = 0, indiceCadenaLimpia = 0;
    int deberiaAgregarCaracter = 1;
    // Recorrer cadena carácter por carácter
    while (cadena[indiceCadena]) {
        // Primero suponemos que la letra sí debe permanecer
        deberiaAgregarCaracter = 1;
        int indiceCaracteres = 0;
        // Recorrer los caracteres prohibidos
        while (caracteres[indiceCaracteres]) {
            // Y si la letra actual es uno de los caracteres, ya no se agrega
            if (cadena[indiceCadena] == caracteres[indiceCaracteres]) {
                deberiaAgregarCaracter = 0;
            }
            indiceCaracteres++;
        }
        // Dependiendo de la variable de arriba, la letra se agrega a la "nueva
        // cadena"
        if (deberiaAgregarCaracter) {
            cadena[indiceCadenaLimpia] = cadena[indiceCadena];
            indiceCadenaLimpia++;
        }
        indiceCadena++;
    }
    // Al final se agrega el carácter NULL para terminar la cadena
    cadena[indiceCadenaLimpia] = 0;
}




void menu() {
    int opc;

    while (opc != 11) {
        printf("*****MENU PRINCIPAL*****\n"
               "1. Convertir en nombre propio\n"
               "2. Buscar cadena\n"
               "3. Contar vocales\n"
               "4. Anio nuevo\n"
               "5. Llenar caracteres\n"
               "6. Borrar caractertes\n"
               "7. Interseccion\n"
               "8. Eliminar repetidos\n"
               "9. Contar palabras\n"
               "10. Validar eMail\n"
               "11. Salida\n"
               "***************************\n");
        scanf("%d", &opc);
        fflush(stdin);

        char text[100];

        switch (opc) {
            case 1: {
                printf("Ingrese los caracteres a convertir en mayuscula\n");
                fflush(stdin);
                fgets(text, 50, stdin);
                firstLetter(text);

            }
                break;
            case 2: {
                char cadena[100];
                char cadenaBuscar [100];
                fflush(stdin);
                printf("ingrese cadena");
                fgets(&cadena,100,stdin);
                printf("ingrese la cadena a buscar");
                fflush(stdin);
                fgets(&cadenaBuscar,100,stdin);

                printf("El numero de veces que se encuentra la cadena buscada es: %i \n",buscarCadena(cadena,cadenaBuscar)) ;


            }
                break;

            case 3: {
            char cadena [100];
                printf("ingrese la cadena a contar las vocales");

                fgets(&cadena,100,stdin);
                printf("%i \n",contarVocales(cadena));
            }
                break;

            case 4:


            case 5: {


                break;
            }
            case 6: {
                char cadena[100];
                char caracteres [100];
                printf("Ingrese la cadena ");
                fgets(cadena,100,stdin);
                //scanf("%s",&cadena);
                printf("ingrese el caracter a borrar");
                fflush(stdin);
                fgets(caracteres,100,stdin);
                printf("La cadena es: '%s'\n", cadena);
                printf("Y los caracteres que se quitan son: %s\n", caracteres);
                removerCaracteres(cadena, caracteres);
                printf("Despues de remover es: '%s'\n", cadena);

            }
                break;
            case 7: {

            }
                break;
            case 8: {

            }
                break;
            case 9: {

            }
                break;
            case 10: {
                char mail[] = "";
                printf("Digite eMail a verificar");
                scanf("%s", mail);

            }
                break;
            case 11: {
                printf("*****Bye, thanks*****");
                exit(0);
            }
            default:
                printf("*****OPCION NO VALIDA*****\n");
                menu();
                break;
        }

    }
}

int main() {

    menu();
    return 0;
}



