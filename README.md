# Matrix Vector Operations in C++

### Description

This project demonstrates basic operations on a 2D matrix using vectors in C++. The main functionalities include creating a matrix based on user input, displaying the matrix, and modifying the matrix values. The project is suitable for beginners learning about dynamic data structures and input/output operations in C++.

### Features

-   Dynamic matrix creation based on user input for rows and columns.
-   Input values for each element of the matrix.
-   Display the initial matrix.
-   Modify the matrix elements based on new user input.
-   Display the modified matrix.

### Code Snippets

**Matrix Creation and Initial Display:**

```cpp
#include <iostream>
#include <vector>

int main() {
    int fil, col;
    int val = 0;
    std::vector< std::vector<int> > matriz;

    std::cout << "FILAS: ";
    std::cin >> fil;
    std::cout << "COLUMNAS: ";
    std::cin >> col;

    for (int i = 0; i < fil; i++) {
        std::vector<int> v1;
        for (int j = 0; j < col; j++) {
            std::cout << "Valor [" << i << "][" << j << "] = ";
            std::cin >> val;
            v1.push_back(val);
        }
        matriz.push_back(v1);
    }

    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    system("pause");
}
```
**Matrix Modification and Display:**
```cpp
    std::cout << "\nALTERANDO LOS ELEMENTOS!!!" << std::endl;
    int nuevos;
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << "Valor [" << i << "][" << j << "] = ";
            std::cin >> nuevos;
            matriz[i][j] = nuevos;
        }
    }

    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    system("pause");
}
```

### How to Run

1.  Compile the code using a C++ compiler, e.g., `g++ -o matrix matrix_vector_ops.cpp`.
2.  Run the executable, e.g., `./matrix`.
3.  Follow the on-screen prompts to input the matrix dimensions and values.
4.  View the initial matrix.
5.  Modify the matrix values as prompted and view the updated matrix.

### Requirements

-   C++ compiler
-   Standard Library
