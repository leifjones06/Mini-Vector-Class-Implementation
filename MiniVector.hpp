#ifndef MINIVECTOR_H
#define MINIVECTOR_H

class MiniVector
{
    private:
    int* data;
    int size;
    int capacity;
    public:
    MiniVector();
    ~MiniVector();
    void push_back(int value);
    int& operator[](int index);
    void remove(int index);
};
#endif
