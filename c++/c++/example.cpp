#include <iostream>
using namespace std;
string lea(string men);
void mostrar_tablero(int vm1[4][4]);
void limpiar_tablero(int vm1[4][4],int punt[]);
void nombre_jugadores(string v1[]);
void jugar(int vm1[4][4],int vm2[4][4],string v1[],int punt[]);
int validar_numero(int x);
void partida(int x,string v1punt[],int vm1[4][4],int vm2[4][4],int punt[]);
int validar_intentos(int x);

int main() {
int op,punt[2]={0,0};
  int vm1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  int vm2[4][4] = {{5, 6, 7, 8},{1, 2, 3, 4}, {4, 3, 2, 1}, {8, 7, 6, 5}}; 
  string v1[2]={" "," "}; 
  do{
      
    cout<<"\nMENU \n1.limpiar tablero \n2.nombre jugadores \n3.jugar  \n0.terminar";
     op=stoi(lea("\n digite opcion "));
    switch(op){
      case 1:limpiar_tablero(vm1,punt);break;
      case 2:nombre_jugadores(v1);break; 
      case 3:jugar(vm1, vm2,v1,punt);break;
      case 0:cout<<"gracias por jugar";break;
      default:cout<<"\n ERROR, opcion no valida ";break;
  }}while(op!=0);
  return 0;
}
string lea(string men) {
  string x;
  cout << men;
  cin >> x;
  return x;
}
void nombre_jugadores(string v1[]){
v1[0]=(lea("digite nombre jugador 1 "));
v1[1]=(lea("digite nombre jugador 2 "));
}
void mostrar_tablero(int vm1[4][4]){
   for (int fila = 0; fila < 4; fila++) {
     cout<< "\n";
     for (int col = 0; col < 4; col++) {
       cout <<" " <<vm1[fila][col]; 
     }
   }
 }
void limpiar_tablero(int vm1[4][4],int punt[]){
  for(int fila=0;fila<4;fila++){
    for(int col=0;col<4;col++){
      vm1[fila][col]=0;
    }}
    
    punt[0]=0;
    punt[1]=0;}
int validar_numero(int x){
  int number=x;
  number--;
  do{
    if(number>=0 & number<= 3)
    break;
  else 
      number=validar_numero(stoi(lea("Ingrese operacion valida: ")));
    }while(number>=0 & number<= 3);
    return number;
}

int validar_intentos(int x){
int number=x;
  do{
    if(number>=4 & number<= 16)
    break;
  else 
      number=validar_numero(stoi(lea("Ingrese operacion valida: ")));
    }while(number>=4 & number<= 16);
    return number;
}


void jugar(int vm1[4][4],int vm2[4][4],string v1[],int punt[]){
int jugador1=0,jugador2=1,o,p,intentos;
int cont=1,n;
intentos=validar_intentos(stoi(lea(" digite el numero de intentos que quieren realizar (min=4, max=16)")));
while(cont<=intentos)
{cont++;
n=cont%2;
  if(n==0)
  {partida(jugador1,v1,vm1,vm2,punt);}
  else{partida(jugador2,v1,vm1,vm2,punt);}
}
if(punt[jugador1]>punt[jugador2]){
  cout<<" gana el jugador "<<v1[jugador1];
}else if(punt[jugador1]==punt[jugador2]){
  cout<<" el jugador "<<v1[jugador1]<<" quedo empatado con el jugador "<<v1[jugador2];
}else{
  cout<<" gana el jugador "<<v1[jugador2];
}
}
void partida(int x,string v1[],int vm1[4][4],int vm2[4][4],int punt[]){
  int n,m,j,k,l;
  mostrar_tablero(vm1);
  cout<<"\n jugador "<<v1[x];
    n=validar_numero(stoi(lea("\n digite la fila del 1er par ")));m=validar_numero(stoi(lea("\n digite la columna del 1er par ")));
 vm1[n][m]=vm2[n][m];
 mostrar_tablero(vm1);
     j=validar_numero(stoi(lea("\n digite la fila del 2do par ")));k=validar_numero(stoi(lea("\n digite la columna del 2do par")));
   
    vm1[j][k]=vm2[j][k];
    mostrar_tablero(vm1);
    if(vm1[n][m]== vm1[j][k]){
      punt[x]++;
      cout<<" \n sumas un punto ";     
    }
      else{
        cout<<"\n incorrecto";
    vm1[n][m]=0;
     vm1[j][k]=0; 
    
        mostrar_tablero(vm1);
    
      }
}
