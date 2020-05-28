import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

datos = pd.read_table('datos.txt', sep =',', header=None)
datos.columns = ['Tiempo','Velocidad', 'Posicion']

fig = plt.figure(figsize=(10,5))

plt.suptitle('Evolución temporal del movimiento rectilineo uniformemente\nacelerado de una roca con V_0 = 20 m/s y Z_0 = 8.5 m')

plt.subplot(121)
plt.plot(datos.Tiempo, datos.Posicion)
plt.xlabel('Tiempo')
plt.ylabel('Posicion')
plt.axhline(y=0, c='k', ls ='--')
plt.subplot(122)
plt.plot(datos.Tiempo, datos.Velocidad)
plt.xlabel('Tiempo')
plt.ylabel('Velocidad')


fig.savefig('grafico.pdf')