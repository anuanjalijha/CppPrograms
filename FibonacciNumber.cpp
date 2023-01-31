#include<iostream>
using namespace std;
int main(){
	int n,first_term=0,second_term=1,next_term;
	int last_no;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<first_term<<endl;
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;
	
	}
	
 last_no = second_term - first_term;
// cout<<last_no<<endl;
 int last_digit;
 last_digit = last_no % 10;
 cout<<last_digit;
 	
	
}
