#ifndef HUESPED_H
#define HUESPED_H

struct Habitaciones {
    int num_habi;
    char tipo[20];
};

struct Huesped {
    char Nombre[30];
    char Telefono[10];
    char dni[10];
    struct Habitaciones hab;
};
void huespedHotel(int &n_huesp, Huesped huespedes[30]);



#endif
