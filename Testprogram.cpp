
#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n = rand()%30,first_term=0,second_term=1,next_term;
	int last_no;
	cout<<n<<endl;
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
 cout<<last_digit<<endl;
 	
	
	int first_teerm=0,second_teerm=1,next_teerm;
	int laast_no;
// 	cout<<m<<endl;
	for(int j=0;j<n;j++){
		first_teerm = first_teerm%10;
		cout<<first_teerm<<endl;
		next_teerm = first_teerm + second_teerm;
		first_teerm = second_teerm;
		second_teerm = next_teerm;
		
		}
		laast_no = second_teerm - first_teerm;
		cout<<laast_no<<endl;
	

if(laast_no == last_digit){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
}
	
	
	
	
