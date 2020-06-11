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

    // Input matrix
    void input(void);

    // Output matrix
    void print(void);

    // Getters
    int getRows(void) const;
    int getCols(void) const;
};