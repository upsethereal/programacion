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


def capturaDatos(n,estudiantes):
    for i in range(1,n+1):
        x=leer_entero(f"estudiantes {i}. identificación:")
        while x in estudiantes:
            print(f"x ya existe ")
            x=leer_entero(f"estudiante {i} ientificación")
        est=[]
        est.append(input(f"estudiante {i} nombre: "))
        est.append(leerNota(f"estudiante {i} nota : "))
        estudiantes[x]=est
        
def mostrarDatos(estudiantes):
    pasaron1=[]
    no_pasaron1=[]
    pasaron=0
    no_pasaron=0
    print("estdiantes: ")
    for i,est in enumerate(estudiantes):
        print(f" estudiante: {i+1}\n con id:{est}\n nombre:{estudiantes[est][0]}\n nota:{estudiantes[est][1]}")
        if estudiantes[est][1]>=3:
            pasaron +=1
            pasaron1.append(estudiantes[est][0])
        elif estudiantes[est][1]<3:
            no_pasaron +=1
            no_pasaron1.append(estudiantes[est][0])
            
    print(f"pasaron {pasaron}")
    for j in pasaron1:
        print(f"*{j}")
    print(f"y perdieron {no_pasaron}")
    for h in no_pasaron1:
        print(f"*{h}")
        
    


if __name__=="__main__":
    estudiantes={}
    while True:
        n=leer_entero("cuantos estudiantes: ")
        if n>0:
            break        
        print("error, dato debe ser mayor a 0")
        
capturaDatos(n,estudiantes)
mostrarDatos(estudiantes)

