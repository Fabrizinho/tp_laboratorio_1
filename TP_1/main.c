#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float restante;
    int entero;
    int flag=0, flag1=0;
    float numero1=0,numero2=0;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones \n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            system("cls");
            printf("Ingrese un numero: ");
            scanf("%f", &numero1);
            flag=1;
            break;
            case 2:
            system("cls");
            printf("Ingrese otro numero:");
            scanf("%f", &numero2);
            flag1=1;

            break;
            case 3:
                system("cls");
                if(flag==1 && flag1==1){
            printf("El resultado de la suma es: %.2f \n", suma(numero1,numero2));
                }
            break;
            case 4:
                system("cls");
                if(flag==1 && flag1==1){
            printf("La resta es %.2f \n", resta(numero1,numero2));
                }
            break;
            case 5:
                system("cls");
                if(flag==1 && flag1==1){
            printf("La division es %.2f \n", dividir(numero1,numero2));
                }
            break;
            case 6:
                system("cls");
                if(flag==1 && flag1==1){
            printf("La multiplicacion es %.2f \n", multiplicar(numero1,numero2));
                }
            break;
            case 7:
                system("cls");
                entero=numero1;
                restante= numero1 - entero;
                if(restante==0 && flag==1)
                {
            printf("El factorial es %d \n", factorial(numero1));
                }
            break;
            case 8:
                system("cls");
                if(flag==1 && flag1==1){
            printf("La suma es: %.2f \n", suma(numero1,numero2));
            printf("La resta es: %.2f \n", resta(numero1,numero2));
            printf("La division es: %.2f \n", dividir(numero1,numero2));
            printf("La multiplicacion es: %.2f \n", multiplicar(numero1,numero2));
                }
                if(flag==1){
                    printf("No puede calcularse por ser un numero con coma o ingreso 2 numeros. \n");
                }else{
                printf("El factorial del primer numero es: %d \n", factorial(numero1));
                }
            break;
            case 9:
            seguir = 'n';
            break;
        }


}
return 0;
}
