class bedroom_hotel :
    def __init__(self,tipo_de_cama,tipo_de_ventilador,valor,disponibilidad):
        self.tipo_de_cama=tipo_de_cama
        self.tipo_de_ventilador=tipo_de_ventilador
        self.valor=valor
        self.disponibilidad=disponibilidad
def mostrar():
    for i in range (len(bedrooms)):
        print(f"habitacion:{i+1}\n cama:{bedrooms[i].tipo_de_cama}\n sistema de ventilacion:{bedrooms[i].tipo_de_ventilador}\n valor:{bedrooms[i].valor}\n\n")
        
bedroom1=bedroom_hotel("doble","aire acondicionado","40.000","disponible")
bedroom2=bedroom_hotel("doble","ventilador de aspas","30.000","disponible")
bedroom3=bedroom_hotel("sencilla","aire acondicionado","25.000","disponible")
bedroom4=bedroom_hotel("sencilla","ventilador de aspas","20.000","disponible")
        
bedrooms=[bedroom1,bedroom2,bedroom3,bedroom4]
def habitacion():
    print(mostrar())
    user=input("digite opcion= ")
    if user=="s"or user=="S":
        disponibilidad="ocupado"

def verificacion_de_salida():
    hola=0
def menu():
    while(True):
        print("MENU HOTEL LA CASITA FELIZ \n 1.habitaciones\n 2.verificacion de salida \n 3.salir")
        option=int(input(" digite la opcion que desea: "))
        if option==1:
            habitacion()
        elif option==2:
            verificacion_de_salida()
        elif option==3:
            print("gracias por ver nuestros servicios")
            break
            
menu() 