#include <iostream>
using namespace std;
string lea(string men);
void llenar_v1(double v1[]);
void llenar_v2(double v2[]);
void llenar_operaciones(string v3[]);
void operaciones(double v1[], string v3[], double v2[], double v4[]);
void impresion(double v1[], string v3[], double v2[], double v4[]);
double poudejavier(double x, double y);
string validar_operacion(string operacion);
int poudesanty(double x, double y);
int main() {
  int op;
  double v1[5] = {0, 0, 0, 0, 0};
  double v2[5] = {0, 0, 0, 0, 0};
  double v4[5] = {0, 0, 0, 0, 0};
  string v3[5] = {"", "", "", "", ""};
  do {
    cout << "\nmenu\n1. Llenar vector 1\n2. Llenar vector 2\n3. Llenar "
            "operaciones\n4. Operaciones\n5. Imprimir\n0. Salir\n";
    op = stoi(lea("DIGITE OPCION: "));
    switch (op) {
    case 1:
      llenar_v1(v1);
      break;
    case 2:
      llenar_v2(v2);
      break;
    case 3:
      llenar_operaciones(v3);
      break;
    case 4:
      operaciones(v1, v3, v2, v4);
      break;
    case 5:
      impresion(v1, v3, v2, v4);
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
void llenar_v1(double v1[]) {
  for (int i = 0; i < 5; i++) {
    v1[i] =stoi(lea("Ingrese un numero: "));
  }
}
void llenar_v2(double v2[]) {
  for (int i = 0; i < 5; i++) {
    v2[i] =stoi(lea("Ingrese un numero: "));
  }
}

void llenar_operaciones(string v3[]) {
  for (int i = 0; i < 5; i++) {
    v3[i] = validar_operacion(lea("Ingrese simbolo de operacion: "));
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

void operaciones(double v1[], string v3[], double v2[], double v4[]) {

  for (int i = 0; i < 5; i++) {
    if (v3[i] == "+") {
      v4[i] = v1[i] + v2[i];

    } else if (v3[i] == "-") {
      v4[i] = v1[i] - v2[i];

    } else if (v3[i] == "*") {
      v4[i] = v1[i] * v2[i];
    } else if (v3[i] == "/") {
      v4[i] = v1[i] / v2[i];
    } else if (v3[i] == "%") {
      v4[i] = poudesanty(v1[i], v2[i]);
    } else if (v3[i] == "^") {
      v4[i] = poudejavier(v1[i], v2[i]);
    }
  }
}
void impresion(double v1[], string v3[], double v2[], double v4[]) {
  for (int i = 0; i < 5; i++) {
    cout << v1[i] << v3[i] << v2[i] << "=" << v4[i];
    cout << "\n";
  }
}