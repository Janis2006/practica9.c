//janis lizeth salgado pérez//
//anotaciones: declaración de listas int lista[7]; int lista[10]={1,2,3,4,5,6,7,8,9,10};//
//inicializar:       int lista[5],i;
                     for(i=0;i<5;i++) 
                        {
                        lista[i]=0;
                        }                     //
// para mostrar:   lista[3] (muestra lo que hay en la caja número 3)// 



//práctica 9//
//ejercicicio1//
// dada una lista con 5 enteros imprimir la lista//
#include<stdio.h>
int main()
    {
    int list[5]={57,73,24,12,20};
    int   i; 
  printf("Los números de la lista son: ");
    for(i=0;i<5;i++)
        {
        prinf("%d, ", list[i]);
        }
  printf("\n");
  return 0
    }


//utilizando una lista capturar las 5 calificaciones de un alumno e imprimir el promedio//
#include<stdio.h>
void main()
    {
    int list[5];
    int   c=0;
    float p;
    int i; 
    for(i=0;i<5;i++)  
    {
     printf("De la calificación %d: ", i+1);
    scanf("%d", &list[i]);
    }
    for(i=0;i<5;i++)
    {
    c=c+list[i];
    }
    p=c/5;
    printf("el promedio es: %f ",p);
    }


//ejercicio 3//
//Calculadora//

#include <stdio.h>

int suma(int a, int b)
{
  printf ("Resultado: %d\n", a+b);  
}


int resta(int a, int b)
 {
    printf("Resultado: %d\n", a - b);
 }


int multiplicacion(int a, int b)
 {
    printf("Resultado: %d\n", a * b);
 }


int division(int a, int b)
 {
    if (b == 0)
      {
        printf("Error: División por cero\n");
      }
    else 
      {
        printf("Resultado: %d\n", a / b);
      }
}


int potenciacion(int a, int b) 
{
    printf("Resultado: %.2lf\n", pow(a, b));
}


int raiz_cuadrada(int a)
 {
    if (a < 0) 
      {
        printf("Error: No se puede calcular raíz cuadrada de número negativo\n");
      } 
    else 
      {
        printf("Resultado: %.2lf\n", sqrt(a));
      }
}


int main() 
{
    int op, a, b;

    printf("Seleccione un número\n1:Suma\n2:Resta\n3:Multiplicación\n4:División\n5:Potenciación\n6:Raíz Cuadrada\n0:Fin\nOpción: ");
    scanf("%d", &op);

    if (op > 0 && op < 6) {
        printf("Ingresa un número: ");
        scanf("%d", &a);
        printf("Ingresa otro número: ");
        scanf("%d", &b);

        switch (op) {
            case 1: suma(a, b); break;
            case 2: resta(a, b); break;
            case 3: multiplicacion(a, b); break;
            case 4: division(a, b); break;
            case 5: potenciacion(a, b); break;
        }
    } else if (op == 6) {
        printf("Ingresa un número: ");
        scanf("%d", &a);
        raiz_cuadrada(a);
    } else if (op == 0) {
        printf("Fin del programa.\n");
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}





