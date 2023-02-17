#include<iostream>
using namespace std;
int main(){
	int steps,climbs,goes_back;
	int time = 1;
	int total_steps,total_times;
	cout<<"No of steps: ";
	cin>>steps;
	cout<<"No of climb steps: ";
	cin>>climbs;
	cout<<"NO of goes back steps: ";
	cin>>goes_back;
	total_steps = climbs-goes_back;
	total_times = (steps-climbs)/time+total_steps;
	cout<<total_times<<endl;
	
}
