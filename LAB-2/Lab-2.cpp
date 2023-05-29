#include <iostream>
#include <vector>
using std::vector;

/// @brief Класс, хранящий матрицу и вычисляющий для каждой строки сумму и количество элементов, меньших некоторого заданного значения.
class Matrix_t {
  protected:
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
    void CalculateByRows(int q);
    
    /// @brief Печатает результат в поток вывода
    /// @param out поток вывода
    void OutputResoult(std::ostream& out); 
};

/// @brief Класс, хранящий матрицу и вычисляющий для всей матрицы или для каждой строки матрицы сумму и количество элементов, меньших некоторого заданного значения.
class MatrixModified_t : public Matrix_t {
  protected:
    bool isByRows;
    int matrCountLess, matrSumLess;
  public:
    MatrixModified_t(int m, int n);

    void CalculateByRows(int q);
    void CalculateInMatrix(int q);

    void OutputResoult(std::ostream & out);
    
};


int main() {
  int m, n, q;
  std::cin >> m >> n >> q;
  Matrix_t A(m, n);
  A.InputMatrix(std::cin);
  A.CalculateByRows(q);
  A.OutputResoult(std::cout);
  
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

void Matrix_t::CalculateByRows(int q) {
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

MatrixModified_t::MatrixModified_t(int m, int n): Matrix_t(m, n), isByRows(false), 
    matrSumLess(0), matrCountLess(0)
{}

void MatrixModified_t::CalculateByRows(int q) {
  isByRows = true;
  Matrix_t::CalculateByRows(q);
}

void MatrixModified_t::CalculateInMatrix(int q) {
  isByRows = false;
  matrSumLess = matrCountLess = 0;
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      if (matr[i][j] < q) {
        matrSumLess += matr[i][j];
        ++matrCountLess;
      }
    }
  }
}

void MatrixModified_t::OutputResoult(std::ostream & out) {
  if (isByRows) {
    Matrix_t::OutputResoult(out);
  } else {
    out << matrSumLess << ' ' << matrCountLess << '\n';
  }
}