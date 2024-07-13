#include <iostream>
using namespace std;

class Enemy {
public:
    int health;
    int x, y; // Position

    Enemy(int h, int xPos, int yPos) : health(h), x(xPos), y(yPos) {}

    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void takeDamage(int damage) {
        health -= damage;
    }

    void displayStatus() {
        std::cout << "Enemy at (" << x << ", " << y << ") with health: " << health << std::endl;
    }
};

int main() {
    const int numEnemies = 5;
    Enemy enemies[numEnemies] = {
        Enemy(100, 0, 0),
        Enemy(80, 10, 10),
        Enemy(120, 20, 20),
        Enemy(90, 30, 30),
        Enemy(110, 40, 40)
    };

    // Move all enemies
    for (int i = 0; i < numEnemies; ++i) {
        enemies[i].move(1, 1);
        enemies[i].displayStatus();
    }

    return 0;
}
