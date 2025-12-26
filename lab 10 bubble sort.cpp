#include<iostream>
using namespace std;
//function to perform bubble sort in ascending order
void bubblesort(int salary[],int n){
	int temp;
	//loop for passes
	for(int i=0;i<n-1;i++){
		//loop for comparison
		for(int j=0;j<n-i-1;j++){
			if(salary[j]>salary[j+1]){
				temp=salary[j];
				salary[j]=salary[j+1];
				salary[j+1]=temp;
			}
		}
	}
}
//function to display salary
void display(int salary[],int n){
	for(int i=0;i<n;i++){
		cout<<salary[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int salary[10]={45000,38000,52000,30000,47000,60000,35000,49000,41000,56000};
	int n=10;
	cout<<"original salary list:\n";
	display(salary,n);
	bubblesort(salary,n);
	cout<<"\nsorted salary list (ascending order):\n";
	display(salary,n);
	return 0;
}