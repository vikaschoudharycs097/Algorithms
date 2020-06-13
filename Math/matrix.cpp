/***************************************
 * Implementation of Matrix class
 * 
 * @author Vikas Choudhary
 * @date 10.06.2020
 **************************************/

#include "matrix.h"
#include <iostream>

// Constructors
template<typename T>
Matrix<T>::Matrix(int rows, int cols): _rows(rows), _cols(cols)
{
    _createMatrix();
}

template<typename T>
Matrix<T>::Matrix(int rows, int cols, std::vector<std::vector<T>> &data):
_rows(rows), _cols(cols)
{
    _createMatrix();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; i++)
        {
            _matrix[i][j] = data[i][j];
        }
    }
}

template<typename T>
Matrix<T>::Matrix(const Matrix &mat): _rows(mat._rows), _cols(mat._cols)
{
    _createMatrix();    

    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; i++)
        {
            _matrix[i][j] = mat._matrix[i][j];
        }
    }
}

// Function to allocate memory for _matrix
template<typename T>
void Matrix<T>::_createMatrix(void)
{
    _matrix = new T*[_rows];
    for (int i = 0; i < _rows; i++)
    {
        _matrix[i] = new T[_cols];
    }
}

// Input matrix
template<typename T>
void Matrix<T>::input(void)
{
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            std::cin >> _matrix[i][j];
        }
    }
}

// Output matrix
template<typename T>
void Matrix<T>::print(void)
{
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            std::cout << _matrix[i][j] << "\t";
        }
        printf("\n");
    }
}

// Getters
template<typename T>
int Matrix<T>::getRows(void) const
{
    return _rows;
}

template<typename T>
int Matrix<T>::getCols(void) const
{
    return _cols;
}

// Operators
/**
 * Overloading + operator to perform
 * Addition of two matrices if they
 * are compatible
 */
template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix &mat)
{
    if (_rows == mat._rows && _cols == mat._cols)
    {
        Matrix<T> res(_rows, _cols);
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j < _cols; j++)
            {
                res[i][j] = _matrix[i][j] + mat._matrix[i][j];
            }
        }

        return res;
    }

    std::cerr << "Error: Matrices are not comptible\n";  
} 