#include<iostream>
using namespace std;
int main(){
	const int SIZE=10;
	int rollNo[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int PF[SIZE]={85,75,90,60,95,80,70,88,92,77};
	int OOP[SIZE]={80,65,85,55,90,78,72,91,89,69};
	int DSA[SIZE]={82,70,87,58,94,76,68,84,90,73};
	int searchRoll;
	cout<<"enter roll no to search:";
	cin>>searchRoll;
	int index=-1;
	for(int i=0;i<SIZE;i++){
		if(rollNo[i]==searchRoll)
		index=i;
		break;
	}

if(index!=-1)
{
	int total=PF[index]+OOP[index]+DSA[index];
	float percentage=(total/300.0)*100;
	cout<<"\n record found\n";
	cout<<"roll no:"<<rollNo[index]<<endl;
	cout<<"PF marks: "<<PF[index]<<endl;
	cout<<"OOP marks:"<<OOP[index]<<endl;
	cout<<"DSA marks:"<<DSA[index]<<endl;
	cout<<"total marks:"<<total<<"/300"<<endl;
	cout<<"percentage:"<<percentage<<"%"<<endl;
}
else{
	cout<<"\n record not found!"<<endl;
}
return 0;
}