#include "View.h"

//FUNCIONES DEL PROGRAMA

void View ::combinarReferencias()
{
}

ClassA* View::probarPolimorfimo(){

    vector<ClassA*> miVector;
    miVector.push_back(new ClassA());
    miVector.push_back(new ClassB());
    miVector.push_back(new ClassC());

    for (int i=0; i<miVector.size(); i++){
        miVector[i]->mostrar();
    }

}

void View::probarClassC()
{
    // Cree un apuntador de ClassC y llame los métodos propios de la clase. Observe que puede acceder a métodos definidos en ClassA y en ClassB
}

void View::probarClassB()
{
// Cree un apuntador de ClassB y llame los métodos propios de la clase
}

void View::probarClassA()
{
    // Cree un apuntador de ClassA y llame los métodos propios de la clase
}

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n"
         << std::endl;
    cout << "1. Probar class A" << std::endl;
    cout << "2. Probar class B" << std::endl;
    cout << "3. Probar class C" << std::endl;
    cout << "4. Pruebas combinadas" << std::endl;
    cout << "5. Probar polimorfimo \n";
    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
        case 1:
            probarClassA();
            break;
        case 2:
            probarClassB();
            break;
        case 3:
            probarClassC();
            break;
        case 4:
            combinarReferencias();
            break;
        case 5:
            probarPolimorfimo();
            break;
        }
    } while (opcion != 0);
}