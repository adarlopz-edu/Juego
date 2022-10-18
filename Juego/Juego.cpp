#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int a, p, i;
    string jugador;
    cout << "1.- Piedra \n";
    cout << "2.- Papel \n";
    cout << "3.- Tijera \n";
    
    for(i = 1; i <= 10; i++)
    {
        a = 1 + rand() % (3 - 1);
    }
    
    cout << "Elige una opcion \n";
    cin >> p;
    if(p>3){
        cout << "Elige una opcion correcta \n";
    } else{
        a=1+rand()%3;

        if(p==1){
            string jugador = "Piedra";
        }
        if(p==2){
            string jugador = "Papel";
        }
        if(p==3){
            string jugador = "Tijera";
        }

        if(a==1)
            cout << jugador << "Vs Piedra\n";
        if(a==2)
            cout << jugador << "Vs Papel\n";
        if(a==3)
            cout << jugador << "Vs Tijera\n";
        if(p==a)
            cout << "Empate";
        if((p==1&&a==3)||(p==2&&a==1)||(p==3&&a==2))
            cout << "Ganaste :)";
        if((p==3&&a==1)||(p==1&&a==2)||(p==2&&a==3))
            cout << "Ni Para Ganar Sirves :(";
    }
}