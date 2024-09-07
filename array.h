#include "number.h"
#ifndef ARRAY_H
#define ARRAY_H


class Array {
private:
    number* data;
    int size;
public:
    Array();
    Array(int len, number value = 0);
    ~Array();

    void Resize(int newSize);
    void Sort(bool isUp);
    number findSr();
    number findSKO();
    void in(int N);
    void print();
    void setElement(int index, number value);
    int getSize();
    number getElement(int index);
};

#endif // ARRAY_H
