/************************************************************************************
 *
 * File : main.cpp
 * Author:
 * Date :
 *
 * Description: This is the test program for the IntDynArr class.
 ***********************************************************************************/

#include <iostream>
#include "IntDynArr.h"
#define SIZE(x) (sizeof(x)/sizeof(int))

/*
void test_IntDynArr()
{
    IntDynArr a;
    std::cin >> a;
    std::cout << a << std::endl;
}
void test_IntDynArr_size()
{
    int size;
    std::cin >> size;
    IntDynArr a(size);
    std::cout << a << std::endl;
}
void test_IntDynArr_array()
{
    int x[] = {1, 2, -4, 0};
    IntDynArr a(SIZE(x), x);
    std::cout << a << std::endl;
}
void test_print()
{
    int x[] = {1, 2, -4, 0};
    IntDynArr a(SIZE(x), x);
    std::cout << a << std::endl;
}
void test_size()
{
    IntDynArr a;
    std::cin >> a;
    std::cout << a.get_size() << std::endl;
}
void test_get_capacity()
{
    IntDynArr a;
    std::cin >> a;
    std::cout << a.get_capacity() << std::endl;
}
void test_eq()
{
    IntDynArr a, b;
    std::cin >> a >> b;
    std::cout << (a == b) << std::endl;
}
void test_plus_eq()
{
    IntDynArr a, b;
    std::cin >> a >> b;
    std::cout << (a += b) << ' ';
    std::cout << a << ' ';
    std::cout << ((a += b) += b) << std::endl;
}
void test_remove()
{
    IntDynArr a;
    int i;
    std::cin >> a >> i;
    std::cout << a << ' ' << a.remove(i) << std::endl;
}
*/
int main()
{
    int option;
    std::cin >> option;
    switch (option)
    {
        /*
        case 1:
            test_IntDynArr();
            break;
        case 2:
            test_IntDynArr_size();
            break;
        case 3:
            test_IntDynArr_array();
            break;
        case 7:
            test_eq();
            break;
        case 17:
            test_remove();
            break;
        case 19:
            test_print();          
            break;
        */
    }
    
    return 0; 
}
