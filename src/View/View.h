#ifndef VIEW_H
#define VIEW_H
// Guardas

/* Mostrar menua y validar datos de entrada */
#include "../Model/ClassA.h"
#include "../Model/ClassB.h"
#include "../Model/ClassC.h"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class View
{
public:
    void probarClassA();
    void probarClassB();
    void probarClassC();
    int mostrarMenu();
    void verPrincipal();
    vector<ClassA *> probarPolimorfimo();
};
#endif
// #define