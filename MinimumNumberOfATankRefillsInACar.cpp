#include<iostream>
using namespace std;
int main(){
	int d;
	cout<<"Total Distance Covered by a car: ";
	cin>>d;
	int distance_bw_two_petrol_pump = 1;
	int no_of_petrol_pump = d/distance_bw_two_petrol_pump;
	int capacity_of_car;
	cout<<"Max diatance travelled with tank full: ";
	cin>>capacity_of_car;
	int min_no;
	
//	if(capacity_of_car>distance_bw_two_petrol_pump){
//		return true;
//	}
//	else{
//		cout<<"Can not determined";
//		return false;
//		
//	}
	
	if(d%capacity_of_car == 0){
		min_no = (d/capacity_of_car)-1;
	}
	else{
	min_no = d/capacity_of_car;
	
	}
	cout<<min_no<<endl;
	
}
