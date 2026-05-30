#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string asunto;
    int op = 0, i = 1, n = 0, com;
    bool salida = false;
    vector<string> lista;
    vector<int> nums;
    cout<<"**Bienvenido a tu lista de Tareas pendientes**\n";
    cout << "---------------------------------------------\n";
    cout<<endl;
    while(salida == false){
        
        cout<<"¿Que es lo que desea hacer?\n1. Agregar una tarea\n2. Ver la lista de tareas\n3. Agregar varias tareas\n4. Eliminar Tareas\n5. Salir\n"<<endl;
        cin >> op;
        cin.ignore();
        switch(op){
            case 1:
                cout<<"Escriba la tarea que desea agregar: \n";
                getline(cin,asunto);
                lista.push_back(asunto);
                cout<<"La tarea se agregó correctamente\n"<<endl;
                cout<<endl;
                
                break;
            case 2:
                n = 0;
                cout << "\n==============================\n";
                cout << "      TAREAS PENDIENTES       \n";
                cout << "==============================\n";
                cout<<endl;
                for(string list : lista){
                    n++;
                    cout<<n<<". "<<list <<endl;
                }
                break;
            case 3:
                cout << "Escriba S para Salir\n";
                cout<<endl;
                while(true){
                    cout << "Escriba la tarea #"<<i<<endl;;
                    getline(cin,asunto);
                    if(asunto != "S"){
                        lista.push_back(asunto);
                        i++;
                    }else{
                        cout << "Las tareas se registraron correctamnte\n"<<endl;
                        cout<<endl;
                        break;
                    }
                }
                break;
            case 4:
                n = 0;
                cout << "Escribe el número de la tarea que ya completaste?\n";
                for(string list : lista){
                    n++;
                    cout<<n<<". "<<list <<endl;
                }
                cin >> com;
                com = com - 1;
                lista.erase(lista.begin() + com);
                cout << "La tarea se eliminó con éxito"<<endl;
                cout<<endl;
                break;
            case 5:
                cout << "Gracias por usar esta ToDo list\n";
                salida = true;
                break;
            default:
                cout << "Seleccione una opción válida"<<endl;
                cout<<endl;
                break;
        }
    }
    return 0;
}
}