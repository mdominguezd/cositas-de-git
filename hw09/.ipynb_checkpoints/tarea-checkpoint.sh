#!/bin/bash
# -*- coding: utf-8 -*-

# Se compila main.cpp
echo "Compilando main.cpp"
g++ main.cpp

# Se corre ./a.out, aplicación que almacena datos de tiempo, vleocidad y posición en archivo de texto datos.txt
echo "Ejecutando a.out y almacenando datos de tiempo, velocidad y posición en datos.txt"]
./a.out

# Los datos almacenados son graficados por archivo grafica.py y son guardados en grafico.pdf
echo "Graficando datos y guardando los gráficos en archivo grafico.pdf"
python grafica.py

echo "Proceso terminado."