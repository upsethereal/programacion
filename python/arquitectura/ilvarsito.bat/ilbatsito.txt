from subprocess import Popen

def ejecutar_bat(ruta_bat):
    ejecutar = Popen([ruta_bat],)

ruta_archivo_bat = r'bat.bat'
ejecutar_bat(ruta_archivo_bat)
 