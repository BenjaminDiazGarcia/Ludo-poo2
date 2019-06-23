#ifndef LUDO_FICHA_H
#define LUDO_FICHA_H

#include "Casilla.h"

const int FICHA_RADIUS = 20;

class Ficha {
    int color;
    double x;
    double y;
    char estado;
    sf::CircleShape ficha_sprite;
public:

    Ficha(double x, double y, int color);
    // metodo posiblemente innecesario
    void mover(Casilla* casilla, char tipo_de_casilla); // se necesita el tipo de casilla para hacerle un dynamic_cast al parametro 'Casilla'

    double get_x() { return x; }
    double get_y() { return y; }
    double get_color() { return color; }
    char get_estado() { return estado; }

    void set_estado(char _estado) { estado = _estado; }

    void move_to(double x, double y);
    sf::CircleShape get_ficha_sprite() { return ficha_sprite; }
};


#endif //LUDO_FICHA_H
