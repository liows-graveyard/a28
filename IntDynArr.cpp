// IntDynArr.cpp

#include <iostream>
#include "IntDynArr.h"

IntDynArr::IntDynArr(int size0)
{
    x = new int[size0];
    if (x == NULL)
    {
        std::cout << "ERROR:memory allocation returns NULL."
                  << std::endl;
    }
    else
    {
        for (int i = 0; i < size0; i++)
        {
            x[i] = 0;
            size = size0;
            capacity = size0;
        }
    }
}

IntDynArr::IntDynArr(int size0, int a[])
{
    x = new int[size0];
    if (x == NULL)
    {
        std::cout << "ERROR:memory allocation returns NULL."
                  << std::endl;
    }
    else
    {
        for (int i = 0; i < size0; i++)
        {
            x[i] = a[i];
            size = size0;
            capacity = size0;
        }
    }
}
/*
IntDynArr::IntDynArr(const IntDynArr & arr)
{

}
*/
IntDynArr::~IntDynArr()
{
    delete [] x;
}
/*
IntDynArr & operator=(const IntDynArr &)
{

}

bool operator==(const IntDynArr & arr) const
{

}

bool operator!=(const IntDynArr & arr) const
{

}
*/
void IntDynArr::resize(const int size0)
{
    this->size = size0; // update size
    if (this->capacity < this->size)
    {
        int x[this->size - 1]; // temporary array
        for (int i = 0; i < this->size - 1; i++)
        {
            x[i] = this->x[i]; // save values in temp array
        }
        this->capacity = this->size * 2; //  update capacity
        
        delete [] this->x; // delete x (not enough memory allocated!)
        this->x = new int[this->capacity]; // allocate new x

        for (int i = 0; i < this->size - 1; i++)
        {
            this->x[i] = x[i]; // return values saved in temp array
        }
    }
    if (this->capacity / 3 > this->size)
    {
        this->capacity = this->size * 2;
    }
}
/*
IntDynArr & operator+=(const IntDynArr & a)
{

}

IntDynArr operator+(const IntDynArr & a) const
{

}
*/
IntDynArr & IntDynArr::insert(int index, int val)
{
    (*this).resize(get_size() + 1);
    (*this).x[index] = val;
    return (*this);
}

IntDynArr & IntDynArr::remove(int index)
{
    for (int i = index; i < get_size() - 1; i++)
    {
        (*this).x[i] = (*this).x[i + 1];
    }
    (*this).resize(get_size() - 1);

    return (*this);
}

std::ostream & operator<<(std::ostream & cout, const IntDynArr & arr)
{
    cout << '{';
    if (arr.get_size() > 0)
    {
        for (int i = 0; i < arr.get_size() - 1; ++i)
        {
            cout << arr[i] << ", ";
        }
        cout << arr[arr.get_size() - 1];
    }
    cout << '}';
    
    return cout;
}

std::istream & operator>>(std::istream & cin, IntDynArr & a)
{
    int x;
    cin >> x;
    while (x != -1)
    {
        a.insert(a.get_size(), x);
        cin >> x;
    }
    return cin;
}
