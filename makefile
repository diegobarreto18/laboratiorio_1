todo: main.o clase.o inscripcion.o entrenamiento.o spinning.o fecha.o socio.o
	g++ -Wall -o main main.o clase.o inscripcion.o entrenamiento.o spinning.o fecha.o socio.o
main.o: main.cpp
	g++ -Wall -c main.cpp 
clase.o:
	g++ -Wall -c clase.cpp
dtEntrenamiento.o:
	g++ -Wall -c dtEntrenamiento.cpp
dtClase.o:
	g++ -Wall -c dtClase.cpp
dtSocio:
	g++ -Wall -c dtSocio.cpp
dtSpinning:
	g++ -Wall -c dtSpinning.cpp
fecha.o:
	g++ -Wall -c fecha.cpp
inscripcion.o:
	g++ -Wall -c inscripcion.cpp
socio.o:
	g++ -Wall -c socio.cpp
spinning.o:
	g++ -Wall -c spinning.cpp
inscripcion.o:
	g++ -Wall -c inscripcion.cpp
entrenamiento.o:
	g++ -Wall -c entrenamiento.cpp

clean:
	rm -f *.o
	rm -f main
