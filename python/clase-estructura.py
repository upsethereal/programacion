## ejercicio:construir listas de estudiantes:identificacion,nombre,nota
def leer_entero(mensaje):
    while True:        
        try:
            return int(input(mensaje))
        except ValueError :
            print("error el dato debe ser numerico")
            
def leerNota(mensaje):
    while True:
        try:
            n=float(input(mensaje))
            if n<0 or n>5:
                raise ValueError
            return n
        except ValueError:
            print("error,nota entre 0 y 5")

def capturaDatos(n,iden,nombre,nota):
    for i in range(1,n+1):
        x=leer_entero(f"estudiantes {i}. identificación:")
        while x in iden:
            print(f"x ya existe ")
            x=leer_entero(f"estudiante {i} ientificación")
        iden.append(x)
        nombre.append(input(f"estudiante {i} nombre: "))
        nota.append(leerNota(f"estudiante {i} nota : "))
        
            
def  mostrarDatos(iden,nombre,nota):
    for i in range(len(iden)):
        print(f"estudiante {i+1}\n {iden[i]}\n {nombre[i]}\n {nota[i]}")

def contarDatos(nota):
    for i in range(len(nota)):
        pasaron=0
        no_pasaron=0
        if nota[i] >= 3:
            pasaron +=1
            print(f" {nombre[i]}, {iden[i]}, {nota[i]} PASO")
        
        elif nota[i] < 3:
            no_pasaron += 1
            print(f" {nombre[i]}, {iden[i]}, {nota[i]} NO PASO")
    
    return pasaron, no_pasaron


if __name__=="__main__":
    nombre,nota,iden=[],[],[]
    while True:
        n=leer_entero("cuantos estudiantes: ")
        if n>0:
            break        
        print("error, dato debe ser mayor a 0")
            
capturaDatos(n,iden,nombre,nota)
mostrarDatos(iden,nombre,nota)
pasaron, no_pasaron = contarDatos(nota)
print(f"pasaron {pasaron} estudiantes y perdieron {no_pasaron}")
