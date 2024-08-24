#include <iostream>
#include <string>

using namespace std;
string lea(string msg);
void potencia();
void tabla_multiplicar();
void calcular_notas();
double poudejavier(double x, double y);
double validar(double a);
double validar_nota(double j);
double validar_porcentaje(double j);
double portotal(double x, double y, double z);
double nota_corte(double x, double y);
double suma_notas(double x, double y, double z);
int main() {
  int op;
  do{
     cout<<" \nMENU \n1.calcular potencia de un numero \n2.tabla de multiplicar \n3.calcular nota definitiva\n0.terminar";
  op=stoi(lea("\n digite opcion "));
   
    switch(op){
    case 1: potencia();break;
    case 2: tabla_multiplicar();break;
    case 3: calcular_notas();break;
    case 0: cout<<" fin ";break;
    default: cout<<" opcion no valida ";break;
    }
  }while(op!=0);
}
string lea(string msg){
  string n;
  cout<<msg;
  cin>>n;
  return n;
}
double poudejavier(double x,double y)
{
  double cont,n;
  n=1;
  for(cont=1;cont<=y;cont++){
    n=n*x;
    
  } 
  return n;
 } 
double validar(double a){
  double number;
  do{
    if(a>0)
    break;
  else if (a<0)
    cout<< "numero negativo";
    number=stoi(lea("\nvuelva a digitar "));
    a=number;
    }while(a>=0);
    return a;
}
void potencia(){
  double n1,n2,n3,n4;
  double resultado;  
  n1=stoi (lea("digite base "));
  n3= validar(n1);
  n2=stoi (lea("digite exponente "));
  n4= validar(n2); 
    resultado= poudejavier(n3,n4);
    cout<<"la pontencia de"<<n3<<"^"<<n4<<" es igual a "<<resultado;}
  

void tabla_multiplicar(){
  int n,cont,n1,n2,n3,n4;
  n1=stoi (lea("digite el numero del cual quiere sacar la tabla de multiplicar "));
  n3=validar(n1);
  n2=stoi (lea("digite rango de la tabla de multiplicar "));
  n4=validar(n2);
  for(cont=1;cont<=n4;cont++){
    cout<<n3<<" * "<<cont<<" = "<<n3*cont<<"\n";
  }
}
double validar_nota(double j){
   int number;
  do{
    if(j>=1 & j<= 5)
    break;
  else if ( j<=1 & j >= 5)
    cout<< "fuera del rango";
    number=stoi(lea("\nvuelva a digitar "));
    j=number;
    }while(j>=1 & j<= 5);
    return j;
}
double validar_porcentaje(double j){
   int number;
  do{
    if(j>=0 & j<=100)
    break;
  else if ( j<=0 & j >= 100)
    cout<< "fuera del rango";
    number=stoi(lea("\nvuelva a digitar "));
    j=number;
    }while(j>=0 & j<= 100);
    return j;
}

double portotal(double x, double y, double z){
 double h;
  h=x+y+z;
  return h;
}
double nota_corte(double x, double y){
  double h;
h=x*(y/100);
  return h;
}
double suma_notas(double x, double y, double z){
  double h;
h=x+y+z;
  return h;
}
void calcular_notas(){
  double n1,n2,n3,nota1,nota2,nota3,n4,n5,n6,por1,por2,por3,por_total,j1,j2,j3,j;
  n4=stod(lea("\ndigite porcentaje de la nota 1: "));
  por1=validar_porcentaje(n4);
   n5=stod(lea("\ndigite porcentaje de la nota 2: "));
  por2=validar_porcentaje(n5);
  n6=stod(lea("\ndigite porcentaje de la nota 3: "));
  por3=validar_porcentaje(n6);
  por_total=portotal( por1 , por2, por3);
  do{
    
    if(por_total==100)
    break;
  else if ( por_total<=0 & por_total >= 100)
    cout<<"";
    cout<<"\n vuelva a digitar los porcentajes, su sumatoria no da 100 ";
    n4=stod(lea("\ndigite porcentaje del corte 1: "));
    por1=validar_porcentaje(n4);
    n5=stod(lea("\ndigite porcentaje del corte 2: "));
    por2=validar_porcentaje(n5);
    n6=stod(lea("\ndigite porcentaje del corte 3: "));
    por3=validar_porcentaje(n6);
    por_total=portotal( por1 , por2, por3);
  }while(por_total==100);
  n1=stod(lea("\ndigite nota  del corte 1: "));
  nota1=validar_nota(n1);
   n2=stod(lea("\ndigite nota del corte 2: "));
  nota2=validar_nota(n2); 
   n3=stod(lea("\ndigite nota del corte 3: "));
  nota3=validar_nota(n3);  
  j1=nota_corte(nota1, por1);
  
  
  j2=nota_corte(nota2, por2);
  
  
  j3=nota_corte(nota3, por3);
  
  
  j=suma_notas(j1, j2, j3);
  cout<<"la nota del semestre es "<<j;
}