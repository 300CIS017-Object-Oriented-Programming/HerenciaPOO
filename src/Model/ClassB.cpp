#include "ClassB.h"


//Aquí se puede observar el llamado al constructor de la clase A como parte del constructor de la clase B, luego la inicialización y luego la definición del valor del atributo1b
ClassB::ClassB()
    : ClassA(),
      atributo1b(20)
{
    cout << "*** Constructor class B \n";
}

void ClassB::metodoB()
{
    cout << "Yo como claseB defini " << atributo1b << "\n";
    cout << "Yo como claseB herede" << atributo2a << "\n";
}

void ClassB::mostrar() {
    cout << "Soy B \n";
}
