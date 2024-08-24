matrix=[["estudiante/evaluación","Examen 1","Examen 2","Tarea 1","Tarea 2", "Proyecto","promedio"],
["estudiantes 1",0.0,0.0,0.0,0.0,0.0,0.0],
["estudiantes 2",0.0,0.0,0.0,0.0,0.0,0.0],
["estudiantes 3",0.0,0.0,0.0,0.0,0.0,0.0],
["estudiantes 4",0.0,0.0,0.0,0.0,0.0,0.0],
["estudiantes 5",0.0,0.0,0.0,0.0,0.0,0.0]]
m=[]

def promedio():
    for i in range(len(matrix)):
        division=0 
        suma=0 
        for j in range(1,len(matrix[i])):           
            if matrix[i][0]== "estudiantes 1":
                if j == 6:
                    matrix[i][j]=suma/division
                else:
                    matrix[i][j]=float(input(f" digite la nota de {matrix[0][j]}  del {matrix[i][0]} "))
                    suma+=matrix[i][j]
                    division+=1
            elif matrix[i][0]== "estudiantes 2":
                if j == 6:
                    matrix[i][j]=suma/division
                else:
                    matrix[i][j]=float(input(f" digite la nota de {matrix[0][j]}  del {matrix[i][0]} "))
                    suma+=matrix[i][j]
                    division+=1
            elif matrix[i][0]== "estudiantes 3":
                if j == 6:
                    matrix[i][j]=suma/division
                else:
                    matrix[i][j]=float(input(f" digite la nota de {matrix[0][j]}  del {matrix[i][0]} "))
                    suma+=matrix[i][j]
                    division+=1
            elif matrix[i][0]== "estudiantes 4":
                if j == 6:
                    matrix[i][j]=suma/division
                else:
                    matrix[i][j]=float(input(f" digite la nota de {matrix[0][j]}  del {matrix[i][0]} "))
                    suma+=matrix[i][j]
                    division+=1
            elif matrix[i][0]== "estudiantes 5":
                if j == 6:
                    matrix[i][j]=suma/division
                else:
                    matrix[i][j]=float(input(f" digite la nota de {matrix[0][j]}  del {matrix[i][0]} "))
                    suma+=matrix[i][j]
                    division+=1
    

def mayor_menor():
    
  
    for j in range(1,len(matrix)):        
        m.append(matrix[j][6])
    mayor_menor2()


def mayor_menor2():
    mayor=0.0
    menor=0.0
    for h in range(len(m)):
        if mayor == 0 and menor==0:
            mayor=m[h]
            menor=mayor
        elif mayor < m[h] :
            mayor= m[h]
        elif menor > m[h]:
            menor=m[h]
    print(m)    
    for i in range (len(matrix)):
        print(matrix[i])
    for j in range(len(matrix)):        
        if matrix[j][6] == mayor:
            print(f"el estudiante ({matrix[j][0]}) tiene el mayor promedio con un total de: {mayor}")
        if matrix[j][6] == menor:
                print(f"el estudiante ({matrix[j][0]}) tiene el menor promedio con un total de: {menor}")


promedio()
mayor_menor()