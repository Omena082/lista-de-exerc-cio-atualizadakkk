#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numeroAluno;
    double altura;
    int alunoMaisBaixo = 0, alunoMaisAlto = 0;
    double alturaMaisBaixa = std::numeric_limits<double>::max(), alturaMaisAlta = 0.0;

    for (int i = 0; i < 10; i++) {
        cout << "Insira o número do aluno: ";
        cin >> numeroAluno;
        cout << "Insira a altura (em metros): ";
        cin >> altura;

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            alunoMaisBaixo = numeroAluno;
        }
        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            alunoMaisAlto = numeroAluno;
        }
    }

    cout << "Aluno mais baixo: " << alunoMaisBaixo << "\n Altura: " << alturaMaisBaixa << " metros" << endl;
    cout << "Aluno mais alto: " << alunoMaisAlto << "\n Altura: " << alturaMaisAlta << " metros" << endl;

    return 0;
}
