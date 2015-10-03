#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
template <class T>
class nvec
{
    int capacity,size;
    vector<T*> references;
    public:
    nvec()
    {
        capacity=1;
        size=0;
    }
    nvec(int n)
    {
        size=n;
        capacity=int(pow(2,1+int(log2(n))));
        references.resize(int(log2(capacity)));
        for(int i=0;i<n;i++)
        {

        }
    }
    T& operator[] (int i)
    {
        int temp=int(log2(i));
        return *(references[temp]+i-int(pow(2,temp)));
    }
    void push_back(T t)
    {

    }
};
