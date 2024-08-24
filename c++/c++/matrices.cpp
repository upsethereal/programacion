#include <iostream>
using namespace std;
string lea(string men);
void llenar_vm1(double m1[5][5]);
void llenar_vm2(double m2[5][5]);
void llenar_operaciones(string vm3[5][5]);
void operaciones(double vm1[5][5], string vm3[5][5], double vm2[5][5], double vm4[5][5]);
void impresion(double vm1[5][5], string vm3[5][5], double vm2[5][5], double vm4[5][5]);
double poudejavier(double x, double y);
string validar_operacion(string operacion);
int poudesanty(double x, double y);
int main() {
  int op;
  double vm1[5][5]= {{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}};
  double vm2[5][5]= {{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}};
  double vm4[5][5]= {{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}};
  string vm3[5][5]= {{"", "", "", "", ""},{"", "", "", "", ""}};
  do {
    cout << "\nmenu\n1. Llenar matriz 1\n2. Llenar matriz 2\n3. Llenar "
            " matriz operaciones\n4. Operaciones\n5. Imprimir\n0. Salir\n";
    op = stoi(lea("DIGITE OPCION: "));
    switch (op) {
    case 1:
      llenar_vm1(vm1);
      break;
    case 2:
      llenar_vm2(vm2);
      break;
    case 3:
      llenar_operaciones(vm3);
      break;
    case 4:
      operaciones(vm1, vm3, vm2, vm4);
      break;
    case 5:
      impresion(vm1, vm3, vm2, vm4);
      break;
    case 0:
      cout << "ADIOS";
      break;
    default:
      cout << "Opcion no valida";
      break;
    }
  } while (op != 0);

}
string lea(string men) {
  string x;
  cout << men;
  cin >> x;
  return x;
}
void llenar_vm1(double m1[5][5]) {
    for(int fila=0;fila<5;fila++){
      for(int col=0;col<5;col++){
       cout<<"digite numero de la pocision" <<fila<<","<<col;
         m1[fila][col]=stod(lea(":"));
    }
  }
}
void llenar_vm2(double m2[5][5]){
  for(int fila=0;fila<5;fila++){
      for(int col=0;col<5;col++){
       cout<<"digite numero de la pocision" <<fila<<","<<col;
         m2[fila][col]=stod(lea(":"));
  }
}
}
void llenar_operaciones(string vm3[5][5]){
  for(int fila=0;fila<5;fila++){
    for(int col=0;col<5;col++){
     cout<<"digite simbolo en la pocision" <<fila<<","<<col;
       vm3[fila][col]=validar_operacion(lea(":"));
    }
  }
}
double poudejavier(double x, double y) {
  double cont, n;
  n = 1;
  for (cont = 1; cont <= y; cont++) {
    n = n * x;
  }
  return n;
}
int poudesanty(double x, double y) {
  int a=x, b=y, c;
  c=a%b;
  return c;
}
string validar_operacion(string operacion) {
  string x;
  do {
    x = operacion;
    if (operacion == "+" || operacion == "-" || operacion == "*" ||
        operacion == "/" || operacion == "^" || operacion == "%")
      break;
    else {
      x = validar_operacion(lea("Ingrese operacion valida: "));
    }
  } while (operacion == "+" || operacion == "-" || operacion == "*" ||
           operacion == "/" || operacion == "%" || operacion == "^");
  return x;
}
void operaciones(double vm1[5][5], string vm3[5][5], double vm2[5][5], double vm4[5][5]) {
  for(int fila=0;fila<5;fila++){
  for (int col = 0; col < 5; col++) {
    if (vm3[fila][col] == "+") {
      vm4[fila][col] = vm1[fila][col] + vm2[fila][col];

    } else if (vm3[fila][col] == "-") {
      vm4[fila][col] = vm1[fila][col] - vm2[fila][col];

    } else if (vm3[fila][col] == "*") {
      vm4[fila][col] = vm1[fila][col] * vm2[fila][col];
    } else if (vm3[fila][col] == "/") {
      vm4[fila][col] = vm1[fila][col] / vm2[fila][col];
    } else if (vm3[fila][col] == "%") {
      vm4[fila][col] = poudesanty(vm1[fila][col], vm2[fila][col]);
    } else if (vm3[fila][col] == "^") {
      vm4[fila][col] = poudejavier(vm1[fila][col], vm2[fila][col]);
    }
  }
  }
}
void impresion(double vm1[5][5], string vm3[5][5], double vm2[5][5], double vm4[5][5]) {
  for(int fila=0;fila<5;fila++){
   cout<<"\n"; 
  for (int col = 0; col < 5; col++) {
    cout << vm1[fila][col] << vm3[fila][col] << vm2[fila][col] << "=" << vm4[fila][col];
     cout << " ";
   } 
 }
}