#include<iostream> 
using namespace std;
#define MAX 5
class ticketqueue{
	int queue[MAX];
	int front ,rear;
	
	public:
		ticketqueue(){
			front=-1;
			rear=-1;
			
		}
		bool isfull(){
			return(rear==MAX-1);
		}
		bool isempty(){
			return(front==-1||front>rear);
		}
		void addticket(int ticketNo){
			if(isfull()){
			cout<<"queue is full!.\n";	
			}else{
				if(front==-1)
				front=0;
				queue[++rear]=ticketNo;
				cout<<"ticket"<<ticketNo<<"add successfully.\n";
			}
	}
	//dequeue
	void processticket(){
		if(isempty()){
			cout<<"queue is empty.\n";
		}else{
			cout<<"processing ticket:"<<queue[front]<<endl;
			front++;
		}
	}
	//display all tickets
	void displaytickets(){
		if(isempty()){
			cout<<"no pendind tickets.\n";
			
		}else{
			cout<<"pending tickets:";
			for(int i=front;i<=rear;i++){
				cout<<queue[i]<<" ";
			}
			cout<<endl;
		}
	}
	//cancel specific ticket
	void cancelticket(int ticketNo){
		if(isempty()){
			cout<<"queue is empty.\n";
			return;
		}
		int i;
		for(i=front;i<=rear;i++){
			if(queue[i]==ticketNo)
			break;
		}
		if(i>rear){
			cout<<"ticket not found.\n";
		}else{
			for(int j=i;j<rear;j++){
				queue[j]=queue[j+1];
			}
			rear--;
			cout<<"ticket"<<ticketNo<<"cancelled successfully.\n";
		}
	}
};
int main()
{
	ticketqueue tq;
	tq.addticket(101);
	tq.addticket(102);
	tq.addticket(103);
	tq.displaytickets();
	tq.processticket();
	tq.displaytickets();
	tq.addticket(104);
	tq.addticket(105);
	tq.addticket(106);
	tq.cancelticket(103);
	tq.displaytickets();
	return 0;
}