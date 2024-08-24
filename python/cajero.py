#1) El cajero debe poder consultar el número de cédula de una persona para generar una validación, solo permite 3 intentos, después de tres intentos mal el cajero se bloquea" enviar mensaje de bloqueo"

#2) El cajero debe permitir a la persona validada consignar dinero hasta por un valor de $10.000.000 de pesos, puede hacerlo en 1 consignación o máximo 3

#3) El cajero debe permitir a la persona validada retirar dinero de su cuenta por un monto máximo de $3.000.000, puede hacerlo en máximo de 2 retiros

#4) El cajero en todo momento debe indicarle el saldo actual de su cuenta, por cada transacción que realice

#5) El cajero debe indicarle la opción de cerrar sesión por un medio de una opción de validación
document1=[1070464688,52733025,11255935]
balance=[0,0,0]
def document():
    ccperson=int(input(" digite el numero de su documento "))    
    for i in range (3):
        validation1=validation(ccperson)
        if validation1 == 0:
            ccperson=int(input(" digite nuevamente el numero de su documento "))
        elif validation1 !=0:
            print("bienvenido")
            menu(validation1)
            break
    if validation1==0:
        print("cajero bloqueado")

def validation(x):    
    for i in document1:
        if x == i:
            return i
    return 0
def validation_log_out():
    print(" esta seguro de cerrar sesion ? ")
    option1=input( " responda s o n ")
    if option1 == "s " or option1 == " S":
        print(" desea entar en otra cuenta?")
        option2=input( " responda s o n ")
        if option2 == "s " or option2 == " S":
            document()
        elif option2 == "n " or option2 == " N":
            print(" gracias por confiar en nosotros")
    elif option1 == "n " or option1 == " N":
        print("continuemos")
        menu()

def validation_balance_user(y):
    for i in document1:
        if y == i:
            return document1.index(i)

def menu(y):
    x=validation_balance_user(y)
    while(True): 
        print(balance[x]) 
        print("BANCO J.R \n 1.consignar \n 2.retirar \n0.cerrar sesion  ")        
        option=int(input(" digite opcion "))
        if (option==1):
            consign(x)
        elif (option==2):
            retire(x)
        elif (option==0):
            break    
    validation_log_out()
    
def consign(x):
    balance[x]     
    cont=1  
    amount=int(input(" digite monto a consignar ")) 
    if amount > 10000000:
        print(" supera el monto permitido, vuelva a intentar")
    elif amount <= 10000000:
        if cont<=3:
            balance[x]+=amount
            cont+=1
        else:
            print(" numero de consignaciones superadas ")
        

def retire(x):

    balance[x]     
    cont=1  
    amount=int(input(" digite monto a retirar ")) 
    if amount > 3000000:
        print(" supera el monto permitido, vuelva a intentar")
    elif amount <= 3000000:
        if cont<=2:
            balance[x]-=amount
            cont+=1
        else:
            print(" numero de retiros superados ")    
    elif amount > balance:
        print(" valor de retiro mayor al que hay en la cuenta ")             

document()
