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

IntDynArr::IntDynArr(const IntDynArr & arr)
{
    
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
