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
//
