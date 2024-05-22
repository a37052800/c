#ifndef _ARRAY_H_
#define _ARRAY_H_
#define SIZE 1000

#include <iostream>
#include <cstring>

class Array
{
public:
    Array()
    {
        this->pos = 0;
        memset(this->arr, 0, sizeof(int) * SIZE);
    };
    ~Array(){};
    Array &operator+(const Array &);
    Array &operator+(const int);
    Array &operator=(const Array &);
    Array &operator=(const int);
    Array &operator+=(const int);
    int &operator[](const int);
    friend std::ostream &operator<<(std::ostream &, const Array &);

    void insert(){};
    int size()
    {
        return pos;
    }

private:
    int arr[SIZE];
    int pos;
};
Array &Array::operator+(const Array &other)
{
    memcpy(this->arr + this->pos, other.arr, sizeof(int) * other.pos);
    this->pos += other.pos;
    return *this;
}
Array &Array::operator+(const int num)
{
    this->arr[this->pos++] = num;
    return *this;
}
Array &Array::operator=(const Array &other)
{
    memcpy(this->arr, other.arr, sizeof(int) * SIZE);
    this->pos = other.pos;
    return *this;
};
Array &Array::operator=(const int num)
{
    memset(this->arr, 0, sizeof(int) * SIZE);
    this->pos = 0;
    this->arr[this->pos++] = num;
    return *this;
}
Array &Array::operator+=(const int num)
{
    *this = *this + num;
    return *this;
}
int &Array::operator[](const int index)
{
    return this->arr[index];
}
std::ostream &operator<<(std::ostream &os, Array &arr)
{
    os << "Array:";
    for (int i = 0; i < arr.size() - 1; i++)
    {
        os << arr[i] << ',';
    }
    os << arr[arr.size() - 1] << '\n';
    return os;
}

#endif