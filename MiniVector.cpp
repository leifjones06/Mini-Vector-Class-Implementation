class MiniVector
{
    MiniVector::MiniVector()
    { 
        size = 0;
        capacity = 4; //random number to begin with, will be changed as needed
        data = new int[capacity];
    }
    MiniVector::~MiniVector()
    {
        delete[] data;
    }
    void MiniVector::push_back(int value)
    {
        if(size < capacity)  //add values if capacity isn't full
        {
            data[size] = value;
            size++;
        }
        else //allocate new memory if needed
        {
            int newCap = capacity * 2;
            int* newData = new int[newCap];
            for(int i = 0; i < size; i++) //copy old elements to new array w/ more memory
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = newCap;
            data[size] = value;
            size++;
        }
    }
    int& operator[](int index) //lets user modify elements like typical array
    {
        return data[index];
    }
    void remove(int index) //lets user delete element at specific index while keeping other elements in order
    {
        for(int i = index; i < (size - 1); i++)
        {
            data[i] = data[i+1];
        }
        size--;
    }
};