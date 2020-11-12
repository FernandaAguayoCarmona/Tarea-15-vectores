#include <iostream>
#include <vector>
#include <algorithm>
// #include <stdlib.h>

using namespace std;

int main () 
{
    vector <string> cadenas;
    string opcion;
    
// MENU    
    while (true)
    {   // Opciones. 
        cout << "============== M E N U ============== " << endl;
        cout << "1.- Agregar al final" << endl;
        cout << "2.- Mostrar" << endl;
        cout << "3.- Inicializar" << endl;
        cout << "4.- Frente" << endl;
        cout << "5.- Ultimo" << endl;
        cout << "6.- Ordenar" << endl;
        cout << "7.- Insertar" << endl;
        cout << "8.- Eliminar" << endl;
        cout << "9.- Eliminar el Ultimo" << endl;

        cout << "0.- Salir" << endl;
        cout << "Opcion: ";
        getline (cin, opcion);
//        system("CLS");

        // Opcion 1.- Agregar al final
        if (opcion == "1")
            {   
                string cadena;
                cout << "Escriba una cadena de caracteres:  ";
                cin >> cadena;
                
                cin.ignore();
                cadenas.push_back(cadena);
            }

        // Opcion 2.- Mostrar
        else if (opcion == "2")
            { 
                cout << "Cadena de caracteres: ";
                for (size_t i = 0; i < cadenas.size(); i++)
                    {   //  Imprimir elementos
                        cout << cadenas [i] << ", ";
                    }
                    cout << endl;
            }

        // Opcion 3.- Inicializar 
         else if (opcion == "3")
            {  
                size_t n;
                string cadena;

                cout << "Tamaño: ";
                cin >> n;
                cout << "Cadena: ";
                cin >> cadena;
                cin.ignore();

                cadenas = vector <string> (n,cadena);    
            }
        
        // Opcion 4.- Frente 
         else if (opcion == "4")
            { 
                if (cadenas.empty())
                {
                    cout << "El vector esta vacio"<< endl;
                }
                    else
                    {
                        cout << cadenas.front() << endl;
                    }
            }

        // Opcion 5.- Ultimo 
         else if (opcion == "5")
            { 
                if (cadenas.empty())
                {
                    cout << "El vector esta vacio"<< endl;
                }
                    else
                    {
                        cout << cadenas.back() << endl;
                    }
            }

        // Opcion 6.- Ordenar
        else if (opcion == "6")
            {  
                sort(cadenas.begin(), cadenas.end());
            }

        // Opcion 7.- Insertar
        else if (opcion == "7")
            {
                size_t p;
                string cadena;

                cout << "Posicion: ";  
                cin >> p;
                cout << "Cadena: ";
                cin >> cadena; 
                cin.ignore();

                if (p >= cadenas.size())  
                    {
                        cout << "posicion no valida" << endl;
                    }  
                        else 
                            {
                                cadenas.insert(cadenas.begin()+p, cadena);
                            }      
            }
 
        // Opcion 8.- Eliminar
        else if (opcion == "8")
            {
                size_t p;
                cout << "Posicion: ";  
                cin >> p;
                cin.ignore();
                
                 if (p >= cadenas.size())  
                    {
                        cout << "posicion no valida" << endl;
                    }  
                        else 
                            {
                                cadenas.erase(cadenas.begin()+p);
                            }   

            }

        // Opcion 9.-  Eliminar el ultimo
        else if (opcion == "9")
            {
                if (cadenas.empty())
                {
                    cout << "El vector esta vacio" << endl;
                } 
                    else 
                        { 
                            cadenas.pop_back();
                        }
            }

        // Opcion 0.- Salir
        else if (opcion == "0")
            {
                cout << "Usted ha salido del programa"<< endl;
                // Es cuando termina la ejecucion del programa.
                break; 
            }
    }

    return 0;
}
