//Proyecto que reutiliza mis programas favoritos  para tratar de salvar mi beca
//Realizado por: Angel Adrian Hernandez Ortegon Matricula:8071454
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#define PI 3.1416
float Temperaturas(),edad(),importe(),nomina(),orden(),bolita(),figura(),calc(),mujer();
int otra,sel;

main(){
       setlocale(LC_ALL,"Spanish");
       do{
          printf("¿Que programa deseas realizar? \nPresione el Numero Correspondiente: \n ");
          printf("1.Promedio de temperaturas\n2.Programa que adivina tu edad\n3.Programa que calcula el importe \n 4.Programa que calcula la nomina");
          printf("\n5.Programa que dado 3 numeros te dice el Mayor el menor y el intermedio \n6.Te da un descuento basado en una esfera");
          printf("\n7.Programa que calcula el area de una figura geometrica \n8.Calculadora Basica \n9.Programa que calcula el importe de 20 mujeres\n");
          scanf("%d",&sel);                
          while(sel<1 || sel>9){
                                printf("Valor invalido, favor de volver a intentar");
          printf("¿Que programa deseas realizar? \nPresione el Numero Correspondiente: \n ");
          printf("1.Promedio de temperaturas \n2.Programa que adivina tu edad \n3.Programa que calcula el importe \n 4.Programa que calcula la nomina");
          printf("\n5.Programa que dado 3 numeros te dice el Mayor el menor y el intermedio \n6.Te da un descuento basado en una esfera");
          printf("\n7.Programa que calcula el area de una figura geometrica \n8.Calculadora Basica \n9.Programa que calcula el importe de 20 mujeres \n");
          scanf("%d",&sel);                
                            }
          switch(sel){
                      case 1:
                           Temperaturas();
                           break;
                      case 2:
                           edad();
                           break;
                      case 3: 
                           importe();
                           break;
                      case 4:
                           nomina();
                           break;
                      case 5:
                           orden();
                           break;
                      case 6:
                           bolita();
                           break;
                      case 7:
                           figura();
                           break;
                      case 8:
                           calc();
                           break;
                      case 9:
                           mujer();
                           break;
                      default:
                           printf("Error, favor de volver a intentar");
                           break;
                      }                            
       printf("¿Quieres realizar otra operacion?\nTeclea: 1.SI o 2.NO\n");
       scanf("%d",&otra);
         }while(otra==1);
       }

float Temperaturas(){
                     
float lun,mar,mier,jue,vier,sab,dom,prom,fah;
printf("¿Cual es la temperatura del lunes? \n");
scanf("%f",&lun);
printf("¿Cual es la temperatura del martes? \n");
scanf("%f",&mar);
printf("¿Cual es la temperatura del miercoles? \n");
scanf("%f",&mier);
printf("¿Cual es la temperatura del jueves? \n");
scanf("%f",&jue);
printf("¿Cual es la temperatura del viernes?\n");
scanf("%f",&vier);
printf("¿Cual es la temperatura del sabado?\n");
scanf("%f",&sab);
printf("¿Cual es la temperatura del domingo?\n");
scanf("%f",&dom);
//Para validar estos apartados se puede agregar un while(isalpha(variable)) para validar cada uno de estos apartados
prom=(lun+mar+mier+jue+vier+sab+dom)/7;
fah=((prom*1.8)+32);
printf("El promedio de las temperaturas en grados centigrados es: \n %.2f \n el promedio de las temperaturas en grados fahrenheit es \n %.2f",prom,fah);
                    }

float edad(){
char nom[100];
int anio,cump,edad;
printf("¿Cual es tu nombre? \n");
scanf("%s",&nom);
printf("¿Cual es tu año de nacimiento en formato YYYY? \n");
scanf("%d",&cump);
printf("¿En que año estamos en formato YYYY?\n");
scanf("%d",&anio);
edad=anio-cump;
printf("Hola %s, tienes %d años de edad",nom,edad);
system("pause");
system("cls");
      }

float importe(){
char nom[100];
float cant,unit,tot;
printf("Como se llama el producto \t");
scanf("%s",&nom);
printf("Cuantas unidades del producto desea comprar \t");
scanf("%f",&cant);
printf("Cual es el precio unitario del producto \t");
scanf("%f",&unit);
tot=cant*unit;
printf("La cantidad a pagar del producto \n %s \n es \n %.2f \n",nom,tot);
system("pause");
system("cls");      
                    }

float nomina(){
 char nom[100],pue[100];
 float dia,sal,nomina;
 printf("¿Cual es el nombre del empleado? Nota: Considere el guion bajo como espacio\n");
 scanf("%s",&nom);
 printf("¿Cual es el puesto del empleado? \n");
 scanf("%s",&pue);
 printf("¿Cuantos dias trabajo el empleado? \n");
 scanf("%f",&dia);
 printf("¿De cuanto es el salario por dia? \n");
 scanf("%f",&sal);
 nomina=dia*sal;
 printf("El trabajador con nombre: %s \n Con Puesto: %s \n Tiene derecho a una nomina de %.2f \n",nom,pue,nomina);
 system("pause");
 system("cls");      
      }
      
float orden(){
  int a,b,c;
  printf("Dame el primer valor \n");
  scanf("%d",&a);
  printf("Dame el segundo valor \n");
  scanf("%d",&b);
  printf("Dame el tercer valor \n");
  scanf("%d",&c);
  if(a==b && a==c){
     printf("No se puede determinar cual es el numero mayor porque los tres son iguales \n"); 
          }
  else if(a>b && b>c){
       printf("El valor %d es el mayor, el intermedio es %d y el menor es %d \n",a,b,c);
       }
  else if(a>c && c>b){
       printf("El valor %d es el mayor, el intermedio es %d y el menor es %d \n",a,c,b);       
       }
  else if(b>a && a>c){
       printf("El valor %d es el mayor, el intermedio es %d y el menor es %d \n",b,a,c);
       }
  else if(b>c && c>a){
       printf("El valor %d es el mayor, el intermedio es %d y el menor es %d \n",b,c,a);
       }
  else if(c>a && a>b){
       printf("El valor %d es el mayor, el intermedio es %d y el menor es %d \n",c,a,b);       
       }
  else if (c>b && b>a){
       printf("El valor %d es el mayor, el intermedio es %d y el menor es %d \n",c,b,a);       
       }
system("pause");
system("cls");      
      }
      
float bolita(){
 int number,importe;
 printf("¿Cual es el importe que vas a pagar? \n");
 scanf("%d",&importe);
 srand(time(NULL));//Este comando solo se pone una vez cuando se utiliza el random
 number = rand()%3+1;  //El 3+1 indica que el random debe incluir numeros entre el 0 y el 1. Se pone el valor maximo primero y luego el valor minimo
 printf("La bola que sacaste tiene el numero %d \n",number);
 if(number==1){
  printf("Felicidades, te has ganado un descuento del 20 porciento \n");
  importe=importe*0.80;
  printf("El importe a pagar es de: %d \n",importe);             
               }
 else if(number==2){
  printf("Felicidades, te has ganado un descuento del 30 porciento \n");                  
  importe=importe*0.70;
  printf("El importe a pagar es de: %d \n",importe);
                    }
 else if(number==3){
  printf("Suerte para la proxima, no has ganado ni un descuento \n");
  printf("El importe a pagar es de: %d \n",importe);}                  
 else{
  printf("No se genero ni un numero, favor de volver a intentar \n");    
      }
 system("pause");
 system("cls");           
      }
 
 float figura(){
       int op;
       float area, a, b;
       printf("PROGRAMA QUE CALCULA EL AREA DE UNA FIGURA GEOMETRICA. SIGA LAS INDICACIONES: \n ¿Que area deseas calcular? Presione el numero correspondiente \n 1.Triangulo \n 2.Rectangulo \n 3.Circulo \n 4.Cuadrado \n");
       scanf("%d",&op);
       switch(op){
                  case 1:
                        printf("Calcula el area de un Triangulo \n");
                        printf("Dame el valor de la base \t");
                        scanf("%f",&a);
                        printf("Dame el valor de la altura \t");
                        scanf("%f",&b);
                        area=(a*b)/2;
                        printf("El area del triangulo con los valores proporcionados es: %.2f \n",area);
                        break;

                  case 2:
                        printf("Calcula el area de un Rectangulo \n");
                        printf("Dame el valor de la base \t");
                        scanf("%f",&a);
                        printf("Dame el valor de la altura \t");
                        scanf("%f",&b);
                        area=a*b;
                        printf("El area del rectangulo con los valores proporcionados es: %.2f \n",area);
                        break;

                  case 3:
                        printf("Calcula el area de un Circulo \n");
                        printf("Dame el valor del radio \t");
                        scanf("%f",&b);
                        area= PI*(pow(b,2)); //POW se utiliza para elevar a una potencia deseada
                        printf("El area del Circulo con los valores proporcionados es: %.2f \n",area);
                        break;

                  case 4:
                        printf("Calcula el area de un Cuadrado \n");
                        printf("Dame el valor de cualquier lado del cuadrado \t");
                        scanf("%f",&a);
                        area=pow(a,2);
                        printf("El area del Cuadrado con los valores proporcionados es: %.2f \n",area);
                       break;

                  default:
                       printf("Ha introducido un dato invalido, favor de volver a intentar \n");
                       break;
                  }     
       system("pause");
       system("cls");          
       }

float calc(){
       float a,b,tot; //Nos podriamos ahorrar tot utilizando recursividad del tipo a=a+b
       int op;
       printf("Programa que realiza Operaciones Matematicas basicas: \n SIGA LAS INSTRUCCIONES \n Presione la tecla correspondiente a la operacion que desea realizar \n 1.Suma \n 2.Resta \n 3.Multiplicacion \n 4.Division \n");
       scanf("%d",&op);
       switch(op){
                  case 1:
                       printf("Programa que suma dos numeros \n");
                       printf("Dame el primer valor   \t");
                       scanf("%f",&a);
                       printf("Dame el segundo valor  \t");
                       scanf("%f",&b);
                       tot=a+b;
                       printf("La suma de los numeros proporcionados es igual a: %.2f \n",tot);
                       break;
                       
                  case 2:
                       printf("Programa que resta dos numeros \n");
                       printf("Dame el primer valor  \t");
                       scanf("%f",&a);
                       printf("Dame el segundo valor \t");
                       scanf("%f",&b);
                       tot=a-b;                       
                       printf("La resta de los numeros proporcionados es igual a: %.2f \n",tot);
                       break;
                       
                  case 3:
                       printf("Programa que multiplica dos numeros \n");
                       printf("Dame el primer valor  \t");
                       scanf("%f",&a);
                       printf("Dame el segundo valor \t");
                       scanf("%f",&b);                       
                       tot=a*b;
                       printf("La multiplicacion de los numeros proporcionados es igual a: %.2f \n",tot);
                       break;
                       
                  case 4:
                       printf("Programa que divide dos numeros \n");
                       printf("Dame el primer valor  \t");
                       scanf("%f",&a);
                       printf("Dame el segundo valor \t");
                       scanf("%f",&b);                       
                       tot=a/b;
                       printf("La division de los numeros proporcionados es igual a: %.2f \n",tot);
                       break;
                       
                  default:
                       printf("Ha proporcionado un dato invalido, favor de volver a intentar \n");
                       break;
                  }
       system("pause");
       system("cls");      
      }

float mujer(){
       int i;
       float media,importe=0,sum=0;
       for(i=1;i<=20;i++){
                          printf("Buenos dias, ¿podria insertar el importe de su compra? \t");
                          scanf("%f",&importe);
                          while(importe < 0){
                                        printf("No se puede tener un importe negativo, favor de volver a intentar \n");
                                        printf("Buenos dias, ¿podria insertar el importe de su compra? \t");
                                        scanf("%f",&importe);
                                             }
                          sum=sum+importe;
                          }//Cierra for
       printf("\n La suma de todas las compras es igual a %.2f \n",sum);
       media=sum/20;
       printf("\n La media de todas las compras es igual a %.2f \n",media);              
       system("pause");
       system("cls");
        
        }
