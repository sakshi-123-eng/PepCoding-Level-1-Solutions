//Question:-
//https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/power-linear-official/ojquestion

//Code:-

#include<iostream>
using namespace std;


int count=0;
int powerr(int n,int x){
	count++;
	if(count>x){
		return 1;
	}
	int prod ;
	prod = n*powerr(n,x);
	return prod;
}
int main(){
	int n,x;
	cin>>n>>x;
	cout<<powerr(n,x);
	return 0;
}
