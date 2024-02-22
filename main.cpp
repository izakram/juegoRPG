#include <iostream>
#include "Player/Player.h"
#include "Enemy/Enemy.h"

int main() {
    Player *player = new Player("Victor", 100, 8, 4, 10);
    Enemy *enemy = new Enemy("Estudiante de Redes", 50, 5, 2, 5, 10);

    cout << player->toString() << endl;
    cout << enemy->toString() << endl;

    cout << "=====================" << endl;

    while (player->getHealth() > 0 && enemy->getHealth() > 0) {
        player->doAttack(enemy);
        if (enemy->getHealth() <= 0) {
            cout << "Ganaste" << endl;
            break;
        }
        enemy->doAttack(player);
        if (player->getHealth() <= 0) {
            cout << "You're old, you're predictable, and you never stood a chance " << endl;
            break;
        }
        cout << player->toString() << endl;
        cout << enemy->toString() << endl;
        cout << "=====================" << endl;
    }
    delete player;
    delete enemy;
    return 0;
}
