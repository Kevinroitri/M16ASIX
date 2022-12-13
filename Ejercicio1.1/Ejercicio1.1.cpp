// Ejercicio1.1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <MMSystem.h>


using namespace std;

//Atributos del Enemigo1
int enemyHP = 100;
int enemyDmg = 0;
string enemyName = "Sauron";
bool enemyIsAlive = true;
//Atributos del Enemigo2
int enemyHP2 = 100;
int enemyDmg2 = 0;
string enemyName2 = "Hanzo";
bool enemyIsAlive2 = true;
//Atributos del personaje
int heroHP = 150;
int heroDamage;
int heroEspadaDmg = 30;
int ataqueEspada = 2;
int heroMagicDmg = 20;
int heroPunoDmg = 10;
string heroName;
bool heroIsAlive = true;
int enemigo;
string ataque;

//Atributos del juego


bool ataquefirstenemy() {

    if (enemyHP > 0) {
        cout << "\t" << "Le metes un golpe de " << heroDamage << " de DMG!\n";
        enemyHP = enemyHP - heroDamage;
    }

    if (enemyHP <= 0) {
        cout << "Te has cargado al enemigo " << enemyName << "\n";
        enemyIsAlive = false;
        PlaySound(TEXT("muerte.wav"), NULL, SND_RESOURCE | SND_ASYNC);
    }
    else if (enemigo == 1) {
        cout << "El enemigo " << enemyName << " tiene: " << enemyHP << " PX\n";
    }
    else {
        cout << "El enemigo " << enemyName2 << " tiene: " << enemyHP2 << " PX\n";
    }

    if (enemyIsAlive) {
        enemyDmg = 1 + (rand() % 50);
        heroHP = heroHP - enemyDmg;
        cout << "El enemigo " << enemyName << " te ha atacado con " << enemyDmg << " y te quedan: " << heroHP << " PX\n";


    }

    if (enemyIsAlive2) {
        enemyDmg2 = 1 + (rand() % 50);
        heroHP = heroHP - enemyDmg2;
        cout << "El enemigo " << enemyName2 << " te ha atacado con " << enemyDmg2 << " y te quedan: " << heroHP << " PX\n";
        return false;
    }
}
bool ataquesecondenemy() {

    if (enemyHP2 > 0) {
        cout << "\t" << "Le metes un golpe de " << heroDamage << " de DMG!\n";
        enemyHP2 = enemyHP2 - heroDamage;
    }

    if (enemyHP2 <= 0) {
        cout << "Te has cargado al enemigo " << enemyName2 << "\n";
        enemyIsAlive2 = false;
        PlaySound(TEXT("muerte.wav"), NULL, SND_RESOURCE | SND_ASYNC);

    }
    else if (enemigo == 2) {
        cout << "El enemigo " << enemyName2 << " tiene: " << enemyHP2 << " PX\n";
    }
    else {
        cout << "El enemigo " << enemyName << " tiene: " << enemyHP << " PX\n";
    }

    if (enemyIsAlive2) {
        enemyDmg2 = 1 + (rand() % 50);
        heroHP = heroHP - enemyDmg2;
        cout << "El enemigo " << enemyName2 << " te ha atacado con " << enemyDmg2 << " y te quedan: " << heroHP << " PX\n";


    }

    if (enemyIsAlive) {
        enemyDmg = 1 + (rand() % 50);
        heroHP = heroHP - enemyDmg;
        cout << "El enemigo " << enemyName << " te ha atacado con " << enemyDmg << " y te quedan: " << heroHP << " PX\n";
        return false;

    }
}
void firstEnemy() {
    
    
        cout << "Elige tu abilidad de ataque con el enemigo: " << enemigo << " Atque magico [1] Ataque con espada [2] Ataque con punetazo [3] \n";
        cin >> ataque;

        if (ataque == "1") {
            cout << "has elegido el ataque: " << ataque << "\n";

            heroDamage = heroMagicDmg;
        }
        else if (ataque == "2") {
            cout << "has elegido el ataque: " << ataque << "\n";
        
            if (ataqueEspada == 0) {
                    
                    cout << "Ataque no disponible \n";
                    cout << "Elige tu abilidad de ataque con el enemigo: " << enemigo << " Atque magico [1] Ataque con punetazo [3] \n";
                    cin >> ataque;
                    
                    if (ataque == "1") {
                        cout << "has elegido el ataque: " << ataque << "\n";

                        heroDamage = heroMagicDmg;
                    }
                    else if (ataque == "3") {
                        cout << "has elegido el ataque: " << ataque << "\n";

                        heroDamage = heroPunoDmg;
                    }
            }
            else {
   
                heroDamage = heroEspadaDmg;
                ataqueEspada = ataqueEspada - 1;
            }
        }
        else if (ataque == "3") {
            cout << "has elegido el ataque: " << ataque << "\n";

            heroDamage = heroPunoDmg;
        }
        
        ataquefirstenemy();
   
}
void secondEnemy() {
    

        cout << "Elige tu abilidad de ataque con el enemigo: " << enemigo << " Atque magico [1] Ataque con espada [2] Ataque con punetazo [3] \n";
        cin >> ataque;

        if (ataque == "1") {
            cout << "has elegido el ataque: " << ataque << "\n";

            heroDamage = heroMagicDmg;
        }

        else if (ataque == "2") {
            cout << "has elegido el ataque: " << ataque << "\n";

            if (ataqueEspada == 0) {

                cout << "Ataque no siponible \n";
                cout << "Elige tu abilidad de ataque con el enemigo: " << enemigo << " Atque magico [1] Ataque con punetazo [3] \n";
                cin >> ataque;

                if (ataque == "1") {
                    cout << "has elegido el ataque: " << ataque << "\n";

                    heroDamage = heroMagicDmg;
                }
                else if (ataque == "3") {
                    cout << "has elegido el ataque: " << ataque << "\n";

                    heroDamage = heroPunoDmg;
                }
            }
            else {

                heroDamage = heroEspadaDmg;
                ataqueEspada = ataqueEspada - 1;
            }
        }

        else if (ataque == "3") {
            cout << "has elegido el ataque: " << ataque << "\n";

            heroDamage = heroPunoDmg;
        }
        
        ataquesecondenemy();
}
void gameIntro() {

    cout << "los enemigos " << enemyName << " y " << enemyName2 << " han aparecido \n";
    cout << "Como se llama el heroe? \n ";
    cin >> heroName;
    cout << "El nombre del presonaje es " << heroName << "\n";
    srand(time(NULL));

}
int opcioCorrecta() {
    
    int enemigoselecionado = 0;
    int correctChoice = 0;
    while (correctChoice == 0) {
        cout << "Escoje al enemigo que deseas atacar " << enemyName << " con el numero [1] " << enemyName2 << " con el numero [2]: \n";
        cin >> enemigoselecionado;
        if (enemigoselecionado == 1) {
            correctChoice = 1;
        }
        else if (enemigoselecionado == 2) {
            correctChoice = 1;
        }
        else{
            cout << "Escoje una opción váldia\n";
 
        }
    }
    return enemigoselecionado;
}


int main() {
    
    gameIntro();

    while (heroHP > 0 && (enemyHP > 0 || enemyHP2 > 0)) {

        enemigo = opcioCorrecta();

        if ((enemigo == 1) && (enemyIsAlive = true)) {

            firstEnemy();

        }
        else if ((enemigo == 2) && (enemyIsAlive2 = true)) {

            secondEnemy();

        }

        if (heroHP <= 0) {
            cout << "GAME OVER";
            PlaySound(TEXT("muerte.wav"), NULL, SND_RESOURCE | SND_ASYNC);
        }
        
        if (enemyHP < 0 && enemyHP2 < 0) {
            cout << "HAS GANADO LA PARTIDA";
        }
    }
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
