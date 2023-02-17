#include<iostream>
using namespace std;
int main(){
//	int notes[] = {1000,500,200,100,50,5,2,1};
int notes[] = {10,5,1};
	cout<<"Enter amount: ";
	int amount;
	cin>>amount;
	int min_notes_count[4] = {0};
	for(int i =0;i<4;i++){
	min_notes_count[i] = amount/notes[i];
	amount = amount - notes[i]*min_notes_count[i];
	if(amount==0) break;
	}
	for(int i =0;i<4;i++){
		if(min_notes_count[i]!=0){
			cout<<notes[i]<<":"<<min_notes_count[i]<<endl;
		}
	}
	return 0;
}
