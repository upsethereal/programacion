
matrix=[["dia/producto","arepa","empanada de carne","arepa choclo","arepa huevo","empanada de pollo","pastel de yuca","total diarias"],
["lunes",0,0,0,0,0,0,0],
["martes",0,0,0,0,0,0,0],
["miercoles",0,0,0,0,0,0,0],
["jueves",0,0,0,0,0,0,0],
["viernes",0,0,0,0,0,0,0],
["sabado",0,0,0,0,0,0,0],
["total",0,0,0,0,0,0,0]]

def llenar_datos():
    for i in range(len(matrix)):
         cont=0
         if matrix[i][0] == "lunes":
            for j in range (1,len(matrix[i])):
                if j ==7:
                    matrix[i][j]=cont
                else:
                    matrix[i][j]=int(input(f" digite unidades vendidas de {matrix[0][j]} en el dia { matrix[i][0]}: "))
                    cont=cont+matrix[i][j]
                    
                
         elif matrix[i][0] == "martes":
            for j in range (1,len(matrix[i])):
                if j ==7:
                    matrix[i][j]=cont
                else:
                    matrix[i][j]=int(input(f" digite unidades vendidas de {matrix[0][j]} en el dia { matrix[i][0]}: "))
                    cont=cont+matrix[i][j]
                    
                    
                
         elif matrix[i][0] == "miercoles":
            for j in range (1,len(matrix[i])):
                if j ==7:
                    matrix[i][j]=cont
                else:
                    matrix[i][j]=int(input(f" digite unidades vendidas de {matrix[0][j]} en el dia { matrix[i][0]}: "))
                    cont=cont+matrix[i][j]
                    
                    
                
         elif matrix[i][0] == "jueves":
            for j in range (1,len(matrix[i])):
                if j ==7:
                    matrix[i][j]=cont
                else:
                    matrix[i][j]=int(input(f" digite unidades vendidas de {matrix[0][j]} en el dia { matrix[i][0]}: "))
                    cont=cont+matrix[i][j]
                    
                    
                
         elif matrix[i][0] == "viernes":
            for j in range (1,len(matrix[i])):
                if j ==7:
                    matrix[i][j]=cont
                else:
                    matrix[i][j]=int(input(f" digite unidades vendidas de {matrix[0][j]} en el dia { matrix[i][0]}: "))
                    cont=cont+matrix[i][j]
                    
                    
                
         elif matrix[i][0] == "sabado":
            for j in range (1,len(matrix[i])):
                if j ==7:
                    matrix[i][j]=cont
                else:
                    matrix[i][j]=int(input(f" digite unidades vendidas de {matrix[0][j]} en el dia { matrix[i][0]}: "))
                    cont=cont+matrix[i][j]
    total()

def total():
    TotalArepa=0
    TotalCarne=0
    TotalChoclo=0
    TotalHuevo=0
    TotalPollo=0
    TotalYuca=0
    for i in range(1,len(matrix)):
        TotalArepa += matrix[i][1]
        TotalCarne += matrix[i][2]
        TotalChoclo += matrix[i][3]
        TotalHuevo += matrix[i][4]
        TotalPollo += matrix[i][5]
        TotalYuca += matrix[i][6]
        if i == 7:
            for j in range (1,len(matrix[i])):
                if j == 1:
                    matrix[i][j]= TotalArepa
                elif j == 2:
                    matrix[i][j]= TotalCarne
                elif j == 3:
                    matrix[i][j]= TotalChoclo
                elif j == 4:
                    matrix[i][j]= TotalPollo
                elif j == 5:
                    matrix[i][j]= TotalYuca
                elif j == 6:
                    matrix[i][j]= TotalYuca
    most_sold()

def most_sold():
    most_sold=0
    for j in range (1,len(matrix[7])):
        if most_sold == 0:
            most_sold=matrix[7][j]
        elif most_sold < matrix[7][j]:
            most_sold=matrix[7][j]
    for i in range(len(matrix)):
        print(matrix[i])
        for h in range (len(matrix[i])):
            if matrix[i][h] == most_sold:
                print(f"el producto ({matrix[0][h]}) es el mas vendido de la semana con un total de: {most_sold}")


llenar_datos()


