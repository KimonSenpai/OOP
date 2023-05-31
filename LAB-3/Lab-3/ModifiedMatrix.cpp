#include "pch.h"

ModifiedMatrix::ModifiedMatrix(int m, int n): Matrix(m, n)
{}

Tuple<int, int>^ ModifiedMatrix::CalculateInMatrix(int q)
{
    int matrSumLess, matrCountLess;
    matrSumLess = matrCountLess = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if ((*matr[i])[j] < q) {
                matrSumLess += (*matr[i])[j];
                ++matrCountLess;
            }
        }
    }

    return gcnew Tuple<int, int>(matrSumLess, matrCountLess);
}
