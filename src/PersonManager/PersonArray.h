#ifndef PAOO_TEMA_II_PERSONARRAY_H
#define PAOO_TEMA_II_PERSONARRAY_H

#include <iostream>
using namespace std;

template <typename T> class PersonArray {
private:
    T* ptr;
    int size;

public:
    PersonArray(T arr[], int s);
    void print();
};

template <typename T> PersonArray<T>::PersonArray(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T> void PersonArray<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

#endif //PAOO_TEMA_II_PERSONARRAY_H
