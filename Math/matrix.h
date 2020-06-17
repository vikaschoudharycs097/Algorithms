/***************************************
 * Interface of Matrix class
 * 
 * @author Vikas Choudhary
 * @date 10.06.2020
 **************************************/
#include <vector>

template<typename T>
class Matrix
{
private:
    int _rows;
    int _cols;
    T **_matrix;

    // Function to allocate memory for _matrix
    void _createMatrix(void);

public:
    Matrix(int rows, int cols);
    Matrix(int rows, int cols, std::vector<std::vector<T>> &data);
    Matrix(const Matrix &mat);
    ~Matrix();

    // Input matrix
    void input(void);

    // Output matrix
    void print(void);

    // Getters
    int getRows(void) const;
    int getCols(void) const;
    int getValue(int i, int j) const;

    // Operators
    Matrix<T> operator+(const Matrix &mat);
    Matrix<T> operator-(const Matrix &mat);
    Matrix<T> operator*(const Matrix &mat);

    // Matrix op scaler
    Matrix<T> operator+(T n);
    Matrix<T> operator-(T n);
};

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

// Destructor
template<typename T>
Matrix<T>::~Matrix()
{
    for (int i = 0; i < _rows; i++)
    {
        delete []_matrix[i];
    }

    delete []_matrix;
}

template<typename T>
Matrix<T>::Matrix(const Matrix &mat): _rows(mat._rows), _cols(mat._cols)
{
    _createMatrix();    

    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
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

// Return value at given index
template<typename T>
int Matrix<T>::getValue(int i, int j) const
{
    if (i < 0 || i >= _rows || j < 0 || j >= _cols)
    {
        std::cerr << "Error: Invalid index\n";
    }
    else 
    {
        return _matrix[i][j];
    }
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
                res._matrix[i][j] = _matrix[i][j] + mat._matrix[i][j];
            }
        }

        return res;
    }

    std::cerr << "Error: Matrices are not comptible\n";

    return Matrix<T>(0, 0); 
}

/**
 * Overloading - operator to perform
 * Substraction of two matrices if they
 * are compatible
 */
template<typename T>
Matrix<T> Matrix<T>::operator-(const Matrix &mat)
{
    if (_rows == mat._rows && _cols == mat._cols)
    {
        Matrix<T> res(_rows, _cols);
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j < _cols; j++)
            {
                res._matrix[i][j] = _matrix[i][j] - mat._matrix[i][j];
            }
        }

        return res;
    }

    std::cerr << "Error: Matrices are not comptible\n";

    return Matrix<T>(0, 0);  
}

/**
 * Overloading * operator to perform
 * multiplication of two matrices if they
 * are compatible
 */
template<typename T>
Matrix<T> Matrix<T>::operator*(const Matrix &mat)
{
    if (_cols == mat._rows)
    {
        Matrix<T> res(_rows, mat._cols);
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j < mat._cols; j++)
            {
                res._matrix[i][j] = 0;
                for (int k = 0; k < _cols; k++)
                {
                    res._matrix[i][j] += _matrix[i][k] * mat._matrix[k][j];
                }
            }
        }

        return res;
    }

    std::cerr << "Error: Matrices are not comptible\n"; 

    return Matrix<T>(0, 0); 
}

/**
 * Adding an scaler to matrix
 */
template<typename T>
Matrix<T> Matrix<T>::operator +(T n)
{
    Matrix<T> res(_rows, _cols);
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            res._matrix[i][j] = _matrix[i][j] + n;
        }
    }

    return res;
}

/**
 * Substracting an scaler from matrix
 */
template<typename T>
Matrix<T> Matrix<T>::operator -(T n)
{
    Matrix<T> res(_rows, _cols);
    for (int i = 0; i < _rows; i++)
    {
        for (int j = 0; j < _cols; j++)
        {
            res._matrix[i][j] = _matrix[i][j] - n;
        }
    }

    return res;
}

