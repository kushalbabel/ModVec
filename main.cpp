#include "nvec.h"
#include<iostream>
using namespace std;
int main(){
	nvec<int> test;
	test.push_back(5);
	test.push_back(4);
	 test.push_back(3);
	test.push_back(3);
	test.push_back(2);
	test.push_back(1);
	test.pop_back();
	test.pop_back();
	for (int i=0;i<test.size();i++){
		cout<<test[i]<<endl;	
	}
	test.pop_back();
	for (int i=0;i<test.size();i++){
		cout<<test[i]<<endl;	
	}
	test.pop_back();
	for (int i=0;i<test.size();i++){
		cout<<test[i]<<endl;	
	}
	test.pop_back();
	test.pop_back();
	for (int i=0;i<test.size();i++){
		cout<<test[i]<<endl;	
	}
	test.pop_back();

	cout<<"here"<<endl;
	for (int i=0;i<test.size();i++){
		cout<<test[i]<<endl;	
	}
	
	return 0;
}