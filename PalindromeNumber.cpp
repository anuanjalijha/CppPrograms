#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int reverse=0;
	int original = n;
	while(n>0){
		int lastdigit = n%10;
		reverse = reverse*10 + lastdigit;
		  n = n/10;                                             
	}
	if(reverse==original){
		cout<<"Palindrome Number"<<endl;
	}
	else{
		cout<<"Not a Palindrome Number"<<endl;
	}
	return 0;
}
