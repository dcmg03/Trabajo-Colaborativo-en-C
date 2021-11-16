#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char firstLetter (char text[]){

    for (int i = 0; text[i] != '\0'; ++i){
        text[i] = toupper(text[i]);
    }
    return text;


}


void menu(){
    int opc;

    while (opc!=11){
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
        scanf("%d",&opc);

        char text[100];

        switch (opc) {
            case 1: {
                printf("Ingrese los caracteres a convertir en mayuscula\n");
                fflush(stdin);
                fgets(text,50,stdin);
                firstLetter(text);

            }
                break;
            case 2: {
            }
                break;

            case 3: {

            }
                break;

            case 4:


            case 5: {


                break;
            }
            case 6:
            {

            }
                break;
            case 7:
            {

            }
                break;
            case 8:
            {

            }
                break;
            case 9:
            {

            }
                break;
            case 10:
            {
                char mail[]="";
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



