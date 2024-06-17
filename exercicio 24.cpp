
#include <iostream>
using namespace std;

int main() {
  int tabuleiro[3][3];
  // Leitura do tabuleiro
  cout << "Digite o tabuleiro (0 para vazio, -1 para sua pe�a, 1 para pe�a do oponente):" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> tabuleiro[i][j];
    }
  }
  // Verifica��o de jogadas vencedoras
  // Linhas
  for (int i = 0; i < 3; i++) {
    if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != 0) {
      cout << "O jogador " << tabuleiro[i][0] << " venceu!" << endl;
      return 0;
    }
  }
  // Colunas
  for (int j = 0; j < 3; j++) {
    if (tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != 0) {
      cout << "O jogador " << tabuleiro[0][j] << " venceu!" << endl;
      return 0;
    }
  }
  // Diagonais
  if ((tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != 0) ||
      (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != 0)) {
    cout << "O jogador " << tabuleiro[1][1] << " venceu!" << endl;
    return 0;
  }
  // Verifica��o de empate
  bool empate = true;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (tabuleiro[i][j] == 0) {
        empate = false;
        break;
      }
    }
    if (!empate) {
      break;
    }
  }
  if (empate) {
    cout << "Empate!" << endl;
    return 0;
  }
  // Determinando a pr�xima jogada
  int linha, coluna;
  // Prioriza jogadas que levam � vit�ria
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (tabuleiro[i][j] == 0) {
        // Testa se a jogada leva � vit�ria
        tabuleiro[i][j] = -1;
        if ((tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] == -1) ||
            (tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] == -1) ||
            (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] == -1) ||
            (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] == -1)) {
          linha = i;
          coluna = j;
          tabuleiro[i][j] = 0; // Desfaz a jogada para o tabuleiro original
          cout << "Pr�xima jogada: linha " << linha + 1 << ", coluna " << coluna + 1 << endl;
          return 0;
        }
        tabuleiro[i][j] = 0; // Desfaz a jogada para o tabuleiro original
      }
    }
  }
  // Prioriza bloquear jogadas do oponente que levam � vit�ria
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (tabuleiro[i][j] == 0) {
        tabuleiro[i][j] = 1; // Simula a jogada do oponente
        if ((tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] == 1) ||
            (tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] == 1) ||
            (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] == 1) ||
            (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] == 1)) {
          linha = i;
          coluna = j;
          tabuleiro[i][j] = 0; // Desfaz a jogada para o tabuleiro original
          cout << "Pr�xima jogada: linha " << linha + 1 << ", coluna " << coluna + 1 << endl;
          return 0;
        }
        tabuleiro[i][j] = 0; // Desfaz a jogada para o tabuleiro original
      }
    }
  }
  // Escolhe uma jogada aleat�ria em uma casa vazia
  srand(time(0));
  do {
    linha = rand() % 3;
    coluna = rand() % 3;
  } while (tabuleiro[linha][coluna] != 0);
  cout << "Pr�xima jogada: linha " << linha + 1 << ", coluna " << coluna + 1 << endl;
  return 0;
}
