#include <iostream>



using namespace std;
int funjk(int base, int exponente);
void problema2(int y);
void problema8 (int a, int b, int c);
void problema10 (int n);
void  problema16 (int n);

int main()
{
   int x;
   cout<<"numero del programa: ";
   cin >>x;

   switch(x){
   case 1:
       /*Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso.
        Nota: el formato de salida debe ser:
        no es una letra.
        a es una vocal.

        C es una consonante.*/

       cout<<"ingrese una letra para saber si es vocal o consonante: ";
       char x;
       cin>>x;

       if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
           cout<<x<<" es una vocal.";
       }else{
            cout<<x<<" es una consonate.";
       }

       break;

   case 2:

      cout<<"valor a evaluar (positivo): ";
      int valor;
      cin>>valor;
      problema2(valor);

       break;
   case 8:
       int a,b,c;
       cout<<"valor (a) a evaluar (positivo): ";
       cin>>a;
       cout<<"valor (b) a evaluar (positivo): ";
       cin>>b;
       cout<<"valor (c) a evaluar (positivo): ";
       cin>>c;
       problema8(a,b,c);

       break;

   case 10:
       cout<<"valor a evaluar (positivo): ";
       int posicion;
       cin>>posicion;
       problema10(posicion);

       break;
   case 16:


       cout<<"valor a evaluar (positivo): ";
       int n;
       cin>>n;

       problema16(n);




       break;








   }


    return 0;
}



void problema2 (int y){
    /*Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
     y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
     $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
     Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
     cantidad deseada, el sistema deberá decir lo que resta para lograrla.
     Ej: si se ingresa 47810, el programa debe imprimir:
     50000 : 0
     20000: 2
     10000 : 0
     5000: 1
     2000 : 1
     1000: 0
     500 : 1
     200: 1
     100 : 1
     50: 0
     Faltante: 10*/

    int cincuentamil =0;
    int veinte =0;
    int diez=0;
    int cinco=0;
    int dos=0;
    int mil=0;
    int quinientos=0;
    int docientos=0;
    int cien=0;
    int cincuenta=0 ;


    while(y>=50000){
        y -= 50000;
        cincuentamil ++;

    }
    while(y>=20000){
        y -= 20000;
        veinte ++;
    }
    while(y>=10000){
        y -= 10000;
        diez ++;
    }
    while(y>=5000){
        y -= 5000;
        cinco ++;
    }
    while(y>=2000){
        y -= 2000;
        dos ++;
    }

    while(y>=1000){
        y -= 1000;
        mil ++;
    }
    while(y>=500){
        y -= 500;
        quinientos ++;
    }
    while(y>=200){
        y -= 200;
        docientos ++;
    }
    while(y>=100){
        y -= 100;
        cien ++;
    }
    while(y>=50){
        y -= 50;
        cincuenta ++;
    }

    cout<<"50000 : "<<cincuentamil<< endl <<"20000 : "<<veinte<< endl <<"10000 : "<<diez<< endl <<"5000 : "<<cinco<<endl<<
          "2000 : "<<dos<<endl<<"1000 : "<< mil<< endl<<"500 : "<<quinientos<<endl<<"200 : "<<docientos<<endl<<
          "100 : "<<cien<<endl<<"50 : "<<cincuenta<< endl<<"faltante : "<<y<<endl;


}

void problema8 (int a, int b, int c){
    int suma=0;/* si no  se inicializa, agarra cualquier valor que halla en la memoria
    y me saca canas, despues  tumba el pelo del prro  estres por cmbiar la asignacion de suma de mil maneras posibles  */

    //divisores de a
    for(int i=1;i<=c;i++){
        if(a*i<c){
            cout<<a*i<< "+";
            suma+= (a*i);
        }else{

            break;
         }


    }
    //divisores de b

    for(int i=1;i<=c;i++){
        if(b*i<c && b*i !=b*a ){
            cout<< b*i << "+ ";
             suma+= (b*i);
        }else if (b*i>c){
            break;
        }

    }


    cout<<"="<<suma<< endl;

}


void problema10 (int n){
    int x =1, primo=0; //tendrá el valor de los primos
    int count=1;//cuenta hasta n



    while(count<=n){
        int divisor =1, divisores =0;

        do{

            if (x%divisor==0){
                divisores++;


            }
            divisor++;



        }while(divisor<=x);

        if (divisores== 2){
            count++;
            primo = x;


        }x++;


    }
    cout<<"El primo numero "<<n<< " es: "<<primo<< endl;



}

void  problema16 (int n){
    /*Problema 16. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
    si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
    Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
    que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
    Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
    Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
    Nota: la salida del programa debe ser:
    La serie mas larga es con la semilla: j, teniendo m terminos.
    Otra nota: se le dará una bonicación si imprime la serie*/

    int x;
    int count=0;

    x = n;

    while(n!=1){
        if(n%2==0){
            n = n/2;
            count++;
        } else{
            n = 3*n+1;
            count++;
          }

        cout<<n<<endl;


        }cout<<count<<endl;

    cout<<"La serie mas larga es con la semilla: "<<x<<", teniendo "<<count<<" terminos."<<endl;










}
