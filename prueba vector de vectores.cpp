#include <iostream>
#include <vector>

int main()
{
    int fil, col;
    int val = 0; //<-- ESTE VALOR AUMENTARA
    std::vector<int> papu;
    std::vector< std::vector<int> > matriz;

    std::cout << "FILAS: ";
    std::cin >> fil;
    std::cout << "COLUMNAS: ";
    std::cin >> col;

    for (int i = 0;i < fil;i++){
        //Almacena los elementos de la columna
        std::vector<int> v1;

        for (int j = 0; j < col; j++) {
            std::cout << "Valor [" << i << "][" << j << "] = ";
            std::cin >> val;
            v1.push_back(val);
        }
        //Agregamos los elementos de las columas (por fila)
        matriz.push_back(v1);
    }

    
    //Mostrar matriz
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size();j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    system("pause");
    std::cout << "\nALTERANDO LOS ELEMENTOS!!!" << std::endl;
    int nuevos;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << "Valor [" << i << "][" << j << "] = ";
            std::cin >> nuevos;
            matriz[i][j] = nuevos;

        }
    }
    //Mostrar matriz
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    system("pause");
}
