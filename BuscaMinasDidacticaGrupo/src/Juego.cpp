#include "Juego.h"
#include "Config.h"
#include "Tablero.h"
#include "persona.h"
#include <fstream>
#include <unistd.h>

int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}

	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}

	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}

	Juego::Juego(Tablero tablero, int cantidadMinas, int vidasTablero)
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->vidasTablero = vidasTablero;
		this->colocarMinasAleatoriamente();
	}

	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}

	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}

	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}

	bool Juego::jugadorGana()
	{
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Juego::iniciar()
	{
        system("cls");// Limpia la pantalla
		int fila, columna;
		string id,name,fecha;
		int tiempo;
		int score = 0;
		char r;
        persona estudiante(id,name,fecha, tiempo, score);
        estudiante.buscar1();
        time_t tiempoInicio = time(NULL);
		while (true)
		{
			cout << "\nSCORE: " << score << "     VIDAS: " << vidasTablero << endl;//Imprime el score y las vidas restantes del jugador en pantalla
			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
			if (respuestaAUsuario)
			{
			    score += 5;//Suma 5 puntos al score con un acierto
			}
			if (!respuestaAUsuario)
			{
			    score -= 5;//Resta 5 puntos al score al detectar una mina
			    vidasTablero--;//Reduce en 1 las vidas ddel jugador
			}
			if (vidasTablero == 0)//Si las vidas llegan a 0, el jugador pierde el juego
			{
			    system("cls");// Limpia la pantalla
                cout << "\nPERDISTE EL JUEGO!!!!!!!!!\n";
                cout << "\nESFUERZATE MAS PARA LA PROXIMA!!!!!!!!\n";
                cout << "\nTe mostramos donde estaban las minas\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				time_t tiempoFin = time(NULL);
                int tiempoTranscurrido = difftime(tiempoFin, tiempoInicio);
                cout << "\nTIEMPO OBTENIDO: " << tiempoTranscurrido << " segundos\n" << endl;
                cout << "\nPUNTUACION FINAL: " << score << " puntos\n" << endl;
                cout<<"\n\n ¿Desea guardar su record?(Y,N): ";
                cin>>r;
                if (r=='y'||r=='Y')
                {
                    string id,name,fecha;
                    persona estudiante(id,name,fecha, tiempoTranscurrido, score);
                    estudiante.nuevaPartida();
                }
				break;
			}

			if (this->jugadorGana())
			{
			    system("cls");// Limpia la pantalla
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				cout << "\nPUNTUACION FINAL: " << score << " puntos\n" << endl;
                cout<<"\n\n ¿Desea guardar su record?(Y,N): ";
                cin>>r;
                if (r=='y'||r=='Y')
                {
                    estudiante.nuevaPartida();
                }
				break;
			}
		}
	}
void Juego::dibujarPortada(string nombreArchivo)
	{
        string line;
        //char userInput = ' ';
        ifstream myFile(nombreArchivo);
        if(myFile.is_open())
        {
            //Se obtiene la portada del juego
            while( getline(myFile, line))
            {
                cout << line << endl;
            }
            myFile.close();
            system("pause");
        }
        else
        {
            cout << "Error FATAL: el archivo de portada no pudo ser cargado" << endl;
            system("pause");
        }
	}
