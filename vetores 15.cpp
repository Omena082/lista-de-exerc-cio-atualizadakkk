#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetor(20);
    std::vector<int> result;

    // Lendo o vetor de 20 números
    std::cout << "Digite 20 numeros:" << std::endl;
    for(int i = 0; i < 20; i++) {
        std::cin >> vetor[i];
    }

    // Eliminando elementos repetidos
    for(int i = 0; i < 20; i++) {
        bool isUnique = true;
        // Verificando se o elemento já existe no vetor resultado
        for(int j = 0; j < result.size(); j++) {
            if(vetor[i] == result[j]) {
                isUnique = false;
                break;
            }
        }
        // Se o elemento não é repetido, adiciona ao vetor resultado
        if(isUnique) {
            result.push_back(vetor[i]);
        }
    }

    // Imprimindo os elementos do vetor sem repetidos
    std::cout << "Vetor sem elementos repetidos:" << std::endl;
    for(int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
