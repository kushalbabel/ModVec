#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
template <class T>
class nvec
{
    int capacity;		//fillee in reference
    int mySize;
    double currArraymySize;
    int currRefmySize;
    T* references[100];

    public:
    nvec()
    {	
    	currArraymySize =0.5;
        capacity=0;
        mySize=0;
        currRefmySize =0;
    }
    int size(){
    	return mySize;
    }
    // nvec(int n)
    // {
    //     mySize=n;
    //     capacity=int(pow(2,1+int(log2(n-1))))-1;
        
    //     //references.remySize(int(log2(capacity)));
    //     for(int i=0;i<n;i++)
    //     {

    //     }
    // }
    T& operator[] (int i)
    {	
    	if(i<mySize){
	        int temp=int(log2(i+1));
	        //return *(references[temp]+i-int(pow(2,temp)));
	    	return references[temp][i+1-int(pow(2,temp))];
    	}
    }
    void push_back(T t)
    {
    	if (mySize<capacity){
    		// cout<<"Normal"<<endl;
    		//cout<<currRefmySize<<" "<<(int(currArraymySize))<<endl;
    		references[currRefmySize-1][(int(currArraymySize))] = t;
    		currArraymySize++;
    		mySize++;
    	}
    	else if (mySize==capacity){
    		// cout<<"Allocated"<<endl;
    		references[currRefmySize] = new T[2*(int(currArraymySize))];
    		capacity+= 2*(currArraymySize);
    		currArraymySize=0;
    		references[currRefmySize][(int(currArraymySize))] = t;
    		currArraymySize++;
    		currRefmySize++; 	
    		mySize++;
    	}
    	else{
    		cout<<"Something terribly wrong!"<<endl;
    	} 
   }
   void pop_back(){
		if(currArraymySize>1&&mySize>0){
			mySize--;
			currArraymySize--;
		}
		else if(currArraymySize==1&&mySize>0){
			currRefmySize--;
			delete references[currRefmySize];
			currArraymySize = pow(2,currRefmySize-1);
			mySize--;
			capacity-=2*currArraymySize;
		}
		else{
			cout<<"Something terribly wrong!"<<endl;
		}
   }
   bool empty(){
   	return mySize==0;
   }
};
