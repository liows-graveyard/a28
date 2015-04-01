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
    IntDynArr(const IntDynArr &);
    ~IntDynArr();
    IntDynArr & operator=(const IntDynArr &);
    int get_size() const { return size; };
    int get_capacity() const { return capacity; };
    bool operator==(const IntDynArr & arr) const;
    bool operator!=(const IntDynArr & arr) const;
    void resize(const int size0);
    int operator[](int i) const { return x[i]; };
    int & operator[](int i) { return x[i]; };
    IntDynArr & operator+=(const IntDynArr & a);
    IntDynArr operator+(const IntDynArr & a) const;
    IntDynArr & insert(int index, int val);
    IntDynArr & remove(int index);
    IntDynArr subarray(int index, int length) const;
    void print() const;
private:
    int size;
    int capacity;
    int * x;
};

std::ostream & operator<<(std::ostream &, const IntDynArr & a);
std::istream & operator>>(std::istream &, IntDynArr & a);

#endif
