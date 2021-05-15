//Question:-
//https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/factorial-official/ojquestion

//Code:-

#include<iostream>
using namespace std;

 int fact(int n){
 	if(n==1){
 		return 1;
	 }
	 int factorial;
	 factorial = n*fact(n-1);
 }
int main(){
	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}
