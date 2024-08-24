#include <iostream>
#include <string>
using namespace std;
string lea(string msg);
void menu();
void notas();
int validar_materias(int x);
void materiasynotas(int x);
double validar_nota(double j);
double validar_porcentaje(double j);
double portotal(double x, double y, double z);
double nota_corte(double x, double y);

int main() {
  menu();
  return 0;
}
string lea(string msg) {
  string n;
  cout << msg;
  cin >> n;
  return n;
}
void menu() {
  int ope;
  do {
    cout << " \nM E N U \n1.Notas\n0.terminar";
    ope = stoi(lea(" \ndigite opcion: "));
    switch (ope) {
    case 1:
      notas();
      break;
    case 0:
      cout << " adios ";
      break;
    default:
      cout << " opcion no valida ";
      break;
    }
  } while (ope != 0);
}
void notas() {
  int materias;
  materias =validar_materias(stoi(lea("\ndigite numero de materias (1 a 5) ")));
  
  switch(materias){
    case 1:case 2:case 3:case 4:case 5:materiasynotas(materias);break;
    default: cout<<" vuelva a iniciar";break;
  }
}
int validar_materias(int x){
  int number;
  do{
    if(x>=1 & x<= 5)
    break;
  else 
      if ( x<=1 & x>= 5)
    cout<<"";
    cout<< "fuera del rango";
    number=stoi(lea("\nvuelva a digitar "));
    x=number;
    }while(x>=1 & x<= 5);
    return x;
}
void materiasynotas(int x){
  string nombre;
  double nota,nota2,nota3,por1,por2,por3,n,n2,n3;
    for(int i=1; i<=x; i++){
    nombre=lea("\ndigite nombre de la materia: ");
    por1=validar_porcentaje(stod(lea("\ndigite porcentaje de la nota 1: ")));
    por2=validar_porcentaje(stod(lea("\ndigite porcentaje de la nota 2: ")));
    por3=validar_porcentaje(stod(lea("\ndigite porcentaje de la nota 3: ")));
    portotal(por1 , por2, por3);
    do{
    
    if(portotal(por1 , por2, por3)==100)
    break;
  else if ( portotal(por1 , por2, por3)<=0 & portotal(por1 , por2, por3) >= 100)
    cout<<"";
    cout<<"\n vuelva a digitar los porcentajes, su sumatoria no da 100 ";
     por1=validar_porcentaje(stod(lea("\ndigite porcentaje de la nota 1: ")));
    por2=validar_porcentaje(stod(lea("\ndigite porcentaje de la nota 2: ")));
    por3=validar_porcentaje(stod(lea("\ndigite porcentaje de la nota 3: ")));
   portotal(por1 , por2, por3);
  }while(portotal(por1 , por2, por3)==100);
    nota=validar_nota(stod(lea("\ndigite nota 1: ")));
    nota2=validar_nota(stod(lea("\ndigite nota 2: ")));
    nota3=validar_nota(stod(lea("\ndigite nota 3: ")));
    n=nota_corte(nota,por1);
    n2=nota_corte(nota2, por2);
    n3=nota_corte(nota3, por3);
    cout<<"\nla nota definitiva de "<<nombre<<" es: "<<n+n2+n3;
  }  
}
double validar_nota(double j){
   int number;
  do{
    if(j>=1 & j<= 5)
    break;
  else if ( j<=1 & j >= 5)
    cout<<" ";
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
    cout<<" ";
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