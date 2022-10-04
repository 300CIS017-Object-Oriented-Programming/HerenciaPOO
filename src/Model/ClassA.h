#ifndef ClassA_H
#define ClassA_H

#include <iostream>

using std::cout;

class ClassA
{
private:
    int atributo1a;

protected:
    int atributo2a;

public:
    ClassA();
    virtual ~ ClassA() = default; // Toda clase debe tener un destructor que sea virtual
    void metodoA();
    void mostrar();
    //virtual void mostrar();
};
#endif // ClassA_H
