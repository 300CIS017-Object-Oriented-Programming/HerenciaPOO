#ifndef ClassC_H
#define ClassC_H

#include <iostream>
#include "ClassB.h"

using std::cout;

class ClassC : public ClassB
{
private:
    int atributo1c;

public:
    ClassC();
    virtual ~ ClassC() = default; // Toda clase debe tener un destructor que sea virtual
    void metodoC();
    //Note que ClaseC no redefine mostrar pq usará la implementación definida para la clase A .
};

#endif // ClassC_H
