#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

/// @brief Класс, хранящий матрицу и вычисляющий для каждой строки сумму и количество элементов, меньших некоторого заданного значения.
class Matrix_t {
  private:
    const int M, N; // Размеры матрицы. В процессе работы менятся не должны
    vector<vector<int>> matr;
    vector<int> sumLess, countLess;
  public:

    //const int M = 4, N = 5;

    /// @brief Конструктор. Матрицу можно создать только с определенными размерами. По умолчанию все элементы равны нулю
    /// @param m количество строк
    /// @param n количество столбцов
    Matrix_t(int m, int n);

    /// @brief Считывает матрицу из потока ввода
    /// @param in поток ввода
    void InputMatrix(std::istream& in); 

    /// @brief Поиск суммы и количества элементов, меньших q
    /// @param q число, меньше которого должны быть элементы
    void Calculate(int q);
    
    /// @brief Печатает результат в поток вывода
    /// @param out поток вывода
    void OutputResoult(std::ostream& out); 
};


int main() {
  int m, n, q;
  cin >> m >> n >> q;
  Matrix_t A(m, n);
  A.InputMatrix(cin);
  A.Calculate(q);
  A.OutputResoult(cout);
  
}


Matrix_t::Matrix_t(int m, int n): M(m), N(n), matr(m, vector<int>(n, 0)), 
    sumLess(m, 0), countLess(m, 0)
{}

void Matrix_t::InputMatrix(std::istream& in) {
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      in >> matr[i][j];
    }
  }
}

void Matrix_t::Calculate(int q) {
  for (int i = 0; i < M; ++i) {
    sumLess[i] = 0;
    countLess[i] = 0;

    for (int j = 0; j < N; ++j) {
      if (matr[i][j] < q) {
        sumLess[i] += matr[i][j];
        ++countLess[i];
      }
    }
  }
}

void Matrix_t::OutputResoult(std::ostream& out) {
  for (int i = 0; i < M; ++i) {
    out << sumLess[i] << ' ' << countLess[i] << '\n';
  }
}
