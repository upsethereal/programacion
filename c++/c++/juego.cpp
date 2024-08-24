#include <iostream>
using namespace std;
string lea(string men);
void mostrar_tablero(int vm1[4][4]);
void limpiar_tablero(int vm1[4][4]);
void nombre_jugadores(string v1[]);
void numeros_aleatorios(int vm2[4][4],int vm2alt[4][4]);
void jugar(int vm1[4][4],int vm2[4][4],string v1[],int punt[]);
int validar_numero(int x);
void partida_jugador1(int vm1[4][4],int vm2[4][4],string v1[],int punt[]);
void partida_jugador2(int vm1[4][4],int vm2[4][4],string v1[],int punt[]);
int juego_xd(int x,int y,int vm1[4][4],int vm2[4][4],string v1[],int punt[]);
int juego_xd1(int x,int y,int vm1[4][4],int vm2[4][4],string v1[],int punt[]);
void fin(int vm1[4][4],int vm2[4][4],string v1[],int punt[]);

int main() {
int op,punt[2]={0,0};
  int vm1[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  int vm2[4][4] = {{5, 6, 7, 8},{1, 2, 3, 4}, {4, 3, 2, 1}, {8, 7, 6, 5}}; 
  string v1[2]={" "," "};
  int vm2alt[4][4]={{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
   
  
  do{
      
    cout<<"\nMENU \n1.limpiar tablero \n2.nombre jugadores \n3.jugar\n4.cambiar numeros del tablero  \n0.terminar";
     op=stoi(lea("\n digite opcion "));
    switch(op){
      case 1:limpiar_tablero(vm1);break;
      case 2:nombre_jugadores(v1);break; 
      case 3:jugar(vm1, vm2,v1,punt);break;
      case 4:numeros_aleatorios(vm2,vm2alt);break;
      case 0:cout<<"gracias por jugar";break;
      default:cout<<"\n ERROR, opcion no valida ";break;
    }
    if(op==4){
      for(int fila=0;fila<4;fila++){
        
          for(int col=0;col<4;col++){
            vm2[fila][col]=vm2alt[fila][col];}
      }   
    }
  }while(op!=0);
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
void numeros_aleatorios(int vm2[4][4],int vm2alt[4][4]){    
if(vm2alt[0][1]!=vm2[0][1]){
  for(int fila=0;fila<4;fila++){
    for(int col=0;col<4;col++){
      vm2alt[fila][col]=vm2[col][fila];}
      }
}
else{
  numeros_aleatorios( vm2, vm2alt);
} 
}
void mostrar_tablero(int vm1[4][4]){
   for (int fila = 0; fila < 4; fila++) {
     cout<< "\n";
     for (int col = 0; col < 4; col++) {
       cout <<" " <<vm1[fila][col]; 
     }
   }
 }
void limpiar_tablero(int vm1[4][4]){
  for(int fila=0;fila<4;fila++){
    for(int col=0;col<4;col++){
      vm1[fila][col]=0;
    }}
      
}



void jugar(int vm1[4][4],int vm2[4][4],string v1[],int punt[]){
  partida_jugador1(vm1,vm2,v1,punt);
  }
    




void partida_jugador1(int vm1[4][4],int vm2[4][4],string v1[],int punt[]){
int n=0,m=0,j=0,k=0,p=punt[0]+punt[1];
int v3=0;
int v2=0;
int i=0;
  mostrar_tablero(vm1);
do{
  
  i++;
  cout<<"\n jugador "<<v1[0];
  n=validar_numero(stoi(lea("\n digite fila")));m=validar_numero(stoi(lea("\n digite columna")));
  v3=juego_xd( n, m,vm1,vm2,v1,punt);
 vm1[n][m]=vm2[n][m];
    if(vm1[m][n]==v3){
    mostrar_tablero(vm1);}
    else {
    mostrar_tablero(vm1);} 
  j=validar_numero(stoi(lea("\n digite fila")));k=validar_numero(stoi(lea("\n digite columna")));
   v2= juego_xd( j, k,vm1,vm2,v1,punt);
   vm1[j][k]=vm2[j][k];
    if(vm1[j][k]==v2){
    mostrar_tablero(vm1);}
    else {
    partida_jugador2(vm1,vm2,v1,punt);break;}
  
    if(v3==v2){
    punt[0]++;
    cout<<" \nsumas un punto ";
   
    } else{
        cout<<"\n incorrecto";
    vm1[n][m]=0;
     vm1[j][k]=0; 
     partida_jugador2(vm1,vm2,v1,punt);break;}
  }while(i==8);
  
   fin(vm1,vm2,v1,punt);
  
}


void partida_jugador2(int vm1[4][4],int vm2[4][4],string v1[],int punt[])
{
  int n=0,m=0,j=0,k=0;
  int v3=0;
  int v2=0;
  int i=0;
    mostrar_tablero(vm1);
  do{
    
    i++;
    cout<<"\n jugador "<<v1[1];
    n=validar_numero(stoi(lea("\n digite fila")));m=validar_numero(stoi(lea("\n digite columna")));
   v3=juego_xd1( n, m,vm1,vm2,v1,punt);
   
   vm1[n][m]=vm2[n][m];
    if(vm1[n][m]==v3){
    mostrar_tablero(vm1);}
    else {
    partida_jugador1(vm1,vm2,v1,punt);break;} 
    j=validar_numero(stoi(lea("\n digite fila")));k=validar_numero(stoi(lea("\n digite columna")));
    v2= juego_xd1( j, k,vm1,vm2,v1,punt);
    vm1[j][k]=vm2[j][k];
    if(vm1[j][k]==v2){
    mostrar_tablero(vm1);}
    else {
    partida_jugador1(vm1,vm2,v1,punt);break;}
    if(v3==v2){
      punt[1]++;
      cout<<" \n sumas un punto ";     
    }
      else{
        cout<<"\n incorrecto";
    vm1[n][m]=0;
     vm1[j][k]=0; 
        partida_jugador1(vm1,vm2,v1,punt);
        mostrar_tablero(vm1);
        break;
      }
  }while(i==8);
  fin(vm1,vm2,v1,punt); }



int juego_xd(int x,int y,int vm1[4][4],int vm2[4][4],string v1[],int punt[]){
int n1, n2,e,r;

n1=vm1[x][y];
n2=vm2[x][y];
int n3;
 
 
do{
if(n1==0){
 
  n1=n2;
  n3=n1;
  break;}
  else if (n1==n2){
cout<<" \nopcion ya elegido, turno del otro ";
vm1[x][y];
partida_jugador2(vm1,vm2,v1,punt);break;
}
}while(n1==0);
return n3;
}
int juego_xd1(int x,int y,int vm1[4][4],int vm2[4][4],string v1[],int punt[]){
int n1, n2,e,r;

n1=vm1[x][y];
n2=vm2[x][y];
int n3;
 
 
do{
if(n1==0){
 
  n1=n2;
  n3=n1;
  break;}
  else if (n1==n2){
cout<<" \nopcion ya elegido, turno del otro ";
partida_jugador1(vm1,vm2,v1,punt);break;
}
}while(n1==0);
return n3;
}
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

void fin(int vm1[4][4],int vm2[4][4],string v1[],int punt[]){
  if(punt[0]>punt[1]){
cout<<" gano el jugador "<<v1[0]<<" con un puntaje de: "<<punt[0]<<endl;}
else if(punt[0]==punt[1]){
cout<<" el jugador "<<v1[0]<<" y el jugador "<<v1[1]<<"quedaron empatados"<<endl;}
  else{
   cout<<" gano el jugador "<<v1[1]<<" con un puntaje de: "<<punt[1]<<endl;}
}