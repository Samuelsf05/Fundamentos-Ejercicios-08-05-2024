#include <iostream>

using namespace std;

int main()
{
    char opcion, variable = 'x';

    do
    {
        cout << "Menu"<< "\n";
        cout << "A Caren asada"<< "\n";
        cout << "B pollo" << "\n";
        cout << "C cerdo" << "\n";
        cout << "Selecione una opcion: " << "\n";
        cin >> opcion;
        cout << "opcion selecionada" << opcion << "\n";
    }
    while (opcion != variable);

    return 0;
}