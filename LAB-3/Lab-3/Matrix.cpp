#include "pch.h"

Matrix::Matrix(int m, int n) : M(m), N(n), matr(gcnew List<List<int>^>(m))
{
    for (int i = 0; i < m; ++i) {
        matr->Add(gcnew List<int>(n));
        for (int j = 0; j < n; ++j) matr[i]->Add(0);
    }
}

int Matrix::GetVal(int i, int j)
{
    return (*matr[i])[j];
}

void Matrix::SetVal(int i, int j, int val)
{
    (*matr[i])[j] = val;
}

List<Tuple<int, int>^>^ Matrix::CalculateByRows(int q)
{
    auto res = gcnew List<Tuple<int, int>^>(M);
    for (int i = 0; i < M; ++i) {
        int sumLess = 0;
        int countLess = 0;

        for (int j = 0; j < N; ++j) {
            if ((*matr[i])[j] < q) {
                sumLess += (*matr[i])[j];
                ++countLess;
            }
        }
        res->Add(gcnew Tuple<int, int>(sumLess, countLess));
    }
    return res;
}
