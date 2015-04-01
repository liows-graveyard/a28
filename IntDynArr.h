// IntDynArr.h

#ifndef INTDYNARR_H
#define INTDYNARR_H

class IntDynArr
{
public:
    IntDynArr()
        : size(0), capacity(0), x(new int[0])
    {}
    IntDynArr(int size0);
    IntDynArr(int size0, int a[]);
    IntDynArr(const IntDynArr &); // NEED
    ~IntDynArr();
    IntDynArr & operator=(const IntDynArr &); // NEED
    int get_size() const { return size; };
    int get_capacity() const { return capacity; };
    bool operator==(const IntDynArr & arr) const; // NEED
    bool operator!=(const IntDynArr & arr) const; // NEED
    void resize(const int size0);
    int operator[](int i) const { return x[i]; };
    int & operator[](int i) { return x[i]; };
    IntDynArr & operator+=(const IntDynArr & a); // NEED
    IntDynArr operator+(const IntDynArr & a) const; // NEED
    IntDynArr & insert(int index, int val);
    IntDynArr & remove(int index);
    // The above function is working but... whenever you print
    // "std::cout << a << ' ' << a.remove(i) << std::endl;"
    // you'll notice it is already missing from both. I'm
    // not sure why this is happening.
    IntDynArr subarray(int index, int length = -1) const; // NEED
    void print() const; // NEED
private:
    int size;
    int capacity;
    int * x;
};

std::ostream & operator<<(std::ostream &, const IntDynArr & a);
std::istream & operator>>(std::istream &, IntDynArr & a);

#endif
