﻿#pragma once
#include "pch.h"
/// @brief Класс, хранящий матрицу и вычисляющий для каждой строки сумму и количество элементов, меньших некоторого заданного значения.
ref class Matrix
{
protected:
    const int M, N; // Размеры матрицы. В процессе работы менятся не должны.
    List<List<int>^>^ matr;
public:

    //const int M = 4, N = 5;

    /// @brief Конструктор. Матрицу можно создать только с определенными размерами. По умолчанию все элементы равны нулю.
    /// @param m количество строк.
    /// @param n количество столбцов.
    Matrix(int m, int n);
    
    /// @brief Получение значения в ячейке.
    /// @param i Номер строки.
    /// @param j Номер столбца.
    /// @return значение в ячейке.
    int GetVal(int i, int j);

    /// @brief Задание значения в ячейке.
    /// @param i Номер строки.
    /// @param j Номер столбца.
    /// @param val Устанавливаемое значение.
    void SetVal(int i, int j, int val);

    /// @brief Поиск суммы и количества элементов, меньших q.
    /// @param q число, меньше которого должны быть элементы.
    /// @return Список пар (сумма, количество) для каждой строки.
    List<Tuple<int, int>^>^ CalculateByRows(int q);
    
};

