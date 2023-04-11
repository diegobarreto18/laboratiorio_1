todo: main.o clase.o inscripcion.o entrenamiento.o spinning.o Fecha.o socio.o DtClase.o DtEntrenamiento.o DtSocio.o DtSpinning.o
	g++ -Wall -o main main.o clase.o inscripcion.o entrenamiento.o spinning.o Fecha.o socio.o DtClase.o DtEntrenamiento.o DtSocio.o DtSpinning.o

main.o: main.cpp
	g++ -Wall -c main.cpp 
clase.o:
	g++ -Wall -c clase.cpp
dtEntrenamiento.o:
	g++ -Wall -c DtEntrenamiento.cpp
dtClase.o:
	g++ -Wall -c DtClase.cpp
dtSocio:
	g++ -Wall -c DtSocio.cpp
dtSpinning:
	g++ -Wall -c DtSpinning.cpp
fecha.o:
	g++ -Wall -c Fecha.cpp
inscripcion.o:
	g++ -Wall -c inscripcion.cpp
socio.o:
	g++ -Wall -c socio.cpp
spinning.o:
	g++ -Wall -c spinning.cpp
entrenamiento.o:
	g++ -Wall -c entrenamiento.cpp

clean:
	rm -f *.o
	rm -f main
