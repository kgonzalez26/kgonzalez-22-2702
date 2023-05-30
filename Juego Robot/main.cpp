#include <iostream>
#include "player.h"
#include "mapcell.h"
#include "gamemap.h"
#include "game.h"

using namespace std;

int main()
{
    // Aplicativo elaborado en el curso de Programacion I - Universidad Mariano Galvez
    // desarrollador: daguilae - Marzo 2022

    const int Moves = 20;// Número de movimientos restantes


    gamemap map;
    player hero;
    game newGame(Moves);
    map.drawPortada();
    //map.draw();
    while(map.isGameOver==false)
    {
      cout << endl;
      cout << "MOVIMIENTOS RESTANTES: " << newGame.getRemainingMoves() << endl;
      cout << "Introduce comando de movimiento <w>, <a>, <s>, <d> : <x> --> Salir " << endl;
      hero.callInput();
      newGame.reduceMoves();


      //Actualizar información del jugador en el mapa
      if(map.setPlayerCell(hero.getValueX(), hero.getValueY()))
      {
     //   system("cls");
        map.draw();
      } else
      {
       // system("cls");
        hero.resetToSafePosition();
        //Dibujamos el mapa
        map.draw();
      }
      //map.draw();

      //Si los movimientos restantes llegan a 0 termina el juego
      if (newGame.getRemainingMoves() == 0)
      {
          cout << endl;
          cout << " -- Limite de movimientos alcanzado -- " << endl;
          cout << " ---------- Juego Terminado ---------- " << endl;
          cout << endl << endl;
          hero.drawCreditos();
          map.isGameOver = true;//Termina el ciclo while
      }

    }


    return 0;
}
