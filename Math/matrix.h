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

public:
    Matrix(int rows, int cols);
    Matrix(int rows, int cols, std::vector<std::vector<int>> &data);
    Matrix(const Matrix &mat);

    // Input matrix
    void input(void);

    // Output matrix
    void print(void);

    // Getters
    int getRows(void) const;
    int getCols(void) const;
};