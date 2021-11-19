#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <intrin.h>



void firstLetter (char cadena[]){
    char *p = cadena;
    while (*p != 0) {
        if (p == cadena || (*p != ' ' && *(p - 1) == ' '))
            if (*p >= 'a' && *p <= 'z')
                *p = *p - ('a' - 'A');
        p++;
    }
    printf("\n Su cadena convertida es: %s ", cadena);
}

void llenarCaracter(char cadena[], char caracter[], int cant, int op){
    if (op == 1){
        for (int i = 0; i < cant; i++) {
            strcat(cadena,caracter);
        }
        printf("La cadena es: %s\n", cadena);

    }if (op == 2){
        char *cadena1 = caracter;
        for (int i = 0; i < cant-1; i++) {
            strcat(cadena1,cadena1);
        }
        strcat(cadena1, cadena);
        printf("La cadena es: %s\n", cadena1);
    }
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

int mailValidation (char email[]){
    return strchr (email, '@') && strchr(email, '.');
}

char *cadena(){

    return "";
}

void eliminarRepetidos(char resultado[80], char letra[80]){
    int i = 0, j = 0;
    while(letra[i]){
        if(!strchr(resultado,letra[i]))
            resultado[j++]=letra[i];
        i++;
    }
    printf("La cadena sin repetir caracteres es: %s \n", resultado);
}
void nuevoAnio(int hora, int min){
    int restanteH, restanteMin, total;

    restanteH = (23- hora)*60;
    restanteMin = 60-min;

    total = restanteH + restanteMin;

    printf("\nFaltan %d minuto(s) para las 12:00am\n", total);
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
                char cadena [100];
                printf("Ingrese cadena \n");
                fflush(stdin);
                fgets(cadena, 200, stdin);
                firstLetter(cadena);
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

            case 4: {
                int hora, min;

                printf("Digite la hora en el formato militar: HH -> ");
                scanf("%d", &hora);

                printf("Y los minutos : MM ->");
                scanf("%d", &min);

                printf("Usted ha digitado la hora -> %d : %d", hora, min);
                nuevoAnio(hora, min);
            }
            break;
            case 5: {
                char cadena[100];
                char caracter[100];
                int cant, op;
                printf("Ingrese cadena\n");
                scanf("%s", &cadena);
                printf("Ingrese caracter \n");
                scanf("%s", &caracter);
                printf("Cantidad de veces a llenar\n");
                scanf("%d", &cant);
                printf("1. Derecha \n");
                printf("2. Izquierda \n");
                scanf("%d", &op);
                llenarCaracter(cadena, caracter, cant, op);
            }
            break;

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
                char resultado[100] = "";
                char letra[100];

                printf("Ingresa una frase ->   ");
                scanf("%s",letra);
                eliminarRepetidos(resultado, letra);
            }
                break;
            case 9: {

            }
                break;
            case 10: {
                fflush(stdin);
                printf("Digite eMail a verificar\n");
                fgets(&text, 100, stdin);
                printf("El mail %s es: %s", text, mailValidation(text) ? "VALIDO" : "INVALIDO");
                printf("\n");
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



