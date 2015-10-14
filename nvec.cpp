#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
template <class T>
class nvec
{
    int capacity 		//fillee in reference
    int size;
    int currArraySize;
    int currRefSize;
    T* references[100];

    public:
    nvec()
    {	
    	currArraySize =0;
        capacity=0;
        size=0;
        currSize =0;
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
    	if (size<capacity){
    		references[currRefSize[currArraySize] ] = t;
    		currArraySize++;
    		
    	}
    }
};
