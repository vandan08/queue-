#include<iostream>
using namespace std;
#define n 100


class queue{
	int* arr;
	int front;
	int back;
	
	public:
		queue(){
			arr = new int[n];
			front = -1;
			back= -1;	
		}
		
		//push operation 	
		void enqueue(int x){
			if(back == n-1)
			{
				cout<<"queue overflow "<<endl;
				
				return;
			}
//			cout<<back;
			back++;
			arr[back]=x;
			
			if(front==-1)
			{
				front++;
//				cout<<"hope";
			}

		}
	
		//pop operation 
		int dequeue(){
			if(front == -1 || front>back) 
			{
				cout<<"queue is empty "<<endl;
				return -1;
			}
			
			front++;
		}
		
		int peek(){
			if(front == -1 || front>back) 
				{
					cout<<"queue is empty "<<endl;
					return -1;
				}
				
				return arr[front];
		}
		
		bool empty(){
			
			if(front == -1 || front>back) 
			{
				return true;
			}
			
			return false;
		}
	
		void display(){
			if(front == -1 || front>back) 
			{
				cout<<"queue is empty "<<endl;
				return;
			} 
			
			for(int i=0; i<=back;i++){
				cout<<arr[i]<<" "<<endl;
			}
			
			
		}
	
	
	
};


int main(){
	 queue v;
	 v.enqueue(10);  //first 
	 v.enqueue(112); //second 
	 v.enqueue(132); //third 
	 v.enqueue(98);
	 v.display();
	 
	 
	 cout<<v.peek()<<endl;
	 cout<<v.empty()<<endl;
	 
	 v.dequeue();
	cout<<v.peek()<<endl;
	 
	 return 0;
}
