// IntDynArr.h

#ifndef INTDYNARR_H
#define INTDYNARR_H

class IntDynArr
{
public:
    IntDynArr(int size0);
    IntDynArr(int size0, int a[]);
    IntDynArr(const IntDynArr &);
    ~IntDynArr() { delete [] x; };
    IntDynArr & operator=(const IntDynArr &);
    int get_size() const { return size; };
    int get_capacity() const;
    bool operator==(const IntDynArr & arr) const;
    bool operator!=(const IntDynArr & arr) const;
    void resize(const int size0) { size = size0; };
    int operator[](int i) const { return x[i]; };
    int & operator[](int i) { return x[i]; };
    IntDynArr & operator+=(const IntDynArr & a);
    IntDynArr operator+(const IntDynArr & a) const;
    IntDynArr & insert(int index, int val);
    IntDynArr & remove(int index);
    IntDynArr subarray(int index, int length = -1) const;
    void print() const;
private:
    int size;
    int capacity;
    int * x;
};

std::ostream & operator<<(std::ostream &, const IntDynArr & a);
std::istream & operator>>(std::istream &, IntDynArr & a);

#endif
