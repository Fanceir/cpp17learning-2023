#include <bits/stdc++.h>
using namespace std;
// 实现矩阵
class Matrix
{
    double *data;
    int n{}, m{};

public:
    Matrix(const int m = 0, const int n = 0);
    explicit Matrix(const int m) : Matrix(m, m) {}
    double operator()(const int i, const int j) const;
    double &operator()(const int i, const int j);
    Matrix(const Matrix &A) : Matrix(A.m, A.n)
    {
        memcpy(data, A.data, sizeof(double) * m * n);
    }
    Matrix &operator+=(const Matrix &A)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                (*this)(i, j) += A(i, j);
            }
        }
        return *this;
    }
    Matrix &operator-=(const Matrix &A)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                (*this)(i, j) -= A(i, j);
            }
        }
        return *this;
    }
    Matrix &operator*=(const Matrix &A)
    {
        Matrix C(m, A.n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < A.n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    C(i, j) += (*this)(i, k) * A(k, j);
                }
            }
        }
        *this = C;
        return *this;
    }
    Matrix &operator=(const Matrix &A)
    {
        if (this == &A)
            return *this;
        if (m != A.m || n != A.n)
        {
            delete[] data;
            m = A.m;
            n = A.n;
            data = new double[m * n];
        }
        memcpy(data, A.data, sizeof(double) * m * n);
        return *this;
    }
    // 拷贝构造函数
    ~Matrix()
    {
        delete[] data;
    }
    friend Matrix operator+(const Matrix &A, const Matrix &B)
    {
        Matrix C(A);
        C += B;
        return C;
    }
    friend Matrix operator-(const Matrix &A, const Matrix &B)
    {
        Matrix C(A);
        C -= B;
        return C;
    }
    friend Matrix operator*(const Matrix &A, const Matrix &B)
    {
        Matrix C(A);
        C *= B;
        return C;
    }
};
Matrix::Matrix(const int m, const int n) : m(m), n(n)
{
    data = new double[m * n];
    memset(data, 0, sizeof(double) * m * n);
}
double Matrix::operator()(const int i, const int j) const
{
    return data[i * n + j];
}
double &Matrix::operator()(const int i, const int j)
{
    return data[i * n + j];
}

int main()
{
    Matrix A(3, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            A(i, j) = i * 4 + j;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << A(j, k) << " ";
        }
        cout << endl;
    }
    Matrix B(3, 4);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B(i, j) = i * 4 + j;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << B(j, k) << " ";
        }
        cout << endl;
    }
    Matrix C = A + B;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << C(j, k) << " ";
        }
        cout << endl;
    }
    Matrix D = A - B;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << D(j, k) << " ";
        }
        cout << endl;
    }
    Matrix E = A * B;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << E(j, k) << " ";
        }
        cout << endl;
    }
    return 0;
}
//实验的心得体会
// 1. 本次实验的难度较大，需要对之前的知识进行复习，同时还需要学习新的知识，比如矩阵的运算，这些都是之前没有接触过的知识，所以在实验的过程中，我遇到了很多的问题，比如矩阵的运算，我在实验的过程中，一直在思考如何实现矩阵的运算，最后我在网上查找资料，发现了一种方法，就是通过重载运算符来实现矩阵的运算，这样就可以很方便的实现矩阵的运算，这样就解决了我在实验中遇到的问题。