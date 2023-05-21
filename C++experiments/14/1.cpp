#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

template <typename T>
class Vector
{
private:
    T *data{nullptr};
    size_t capacity{0};
    size_t n{0};

public:
    explicit Vector(int cap = 5);
    ~Vector();
    T &operator[](size_t i);
    const T &operator[](size_t i) const;
    Vector<T>(const Vector<T> &array);
    Vector<T> &operator=(const Vector<T> &rhs);
    bool push_back(const T &x);
    bool pop_back();
    size_t size() const { return n; }
};
template <typename T>
Vector<T>::Vector(int cap) : capacity(cap), n(0)
{
    data = new T[capacity];
}
template <typename T>
Vector<T>::~Vector()
{
    delete[] data;
}
template <typename T>
Vector<T>::Vector(const Vector<T> &array)
{
    capacity = array.capacity;
    n = array.n;
    data = new T[capacity];
    for (size_t i = 0; i < n; i++)
    {
        data[i] = array.data[i];
    }
}
// 下标运算符[]
template <typename T>
T &Vector<T>::operator[](size_t i)
{
    return data[i];
}
template <typename T>
const T &Vector<T>::operator[](size_t i) const
{
    return data[i];
}
template <typename T>
Vector<T>&Vector<T>::operator=(const Vector<T> &rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    delete[] data;
    capacity = rhs.capacity;
    n = rhs.n;
    data = new T[capacity];
    for (size_t i = 0; i < n; i++)
    {
        data[i] = rhs.data[i];
    }
    return *this;
}
// push_back
template <typename T>
bool Vector<T>::push_back(const T &x)
{
    if (n == capacity)
    {
        capacity *= 2;
        T *tmp = new T[capacity];
        for (size_t i = 0; i < n; i++)
        {
            tmp[i] = data[i];
        }
        delete[] data;
        data = tmp;
    }
    data[n++] = x;
    return true;
}
// pop_back
template <typename T>
bool Vector<T>::pop_back()
{
    if (n == 0)
    {
        return false;
    }
    n--;
    return true;
}
// 重载<<
template <typename T>
std::ostream &operator<<(std::ostream &os, const Vector<T> &rhs)
{
    for (size_t i = 0; i < rhs.size(); i++)
    {
        os << rhs[i] << " ";
    }
    return os;
}
// 重载>>
template <typename T>
std::istream &operator>>(std::istream &is, Vector<T> &rhs)
{
    T tmp;
    while (is >> tmp)
    {
        rhs.push_back(tmp);
    }
    return is;
}
//测试代码
int main()
{
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::cout << v << std::endl;
    v.pop_back();
    std::cout << v << std::endl;
    std::cout << v.size() << std::endl;
    Vector<int> v2 = v;
    std::cout << v2 << std::endl;
    Vector<int> v3;
    v3 = v2;
    std::cout << v3 << std::endl;
    std::cin >> v3;
    std::cout << v3 << std::endl;
    return 0;
}
