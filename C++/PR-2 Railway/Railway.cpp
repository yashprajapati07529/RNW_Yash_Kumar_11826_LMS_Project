#include<iostream>

using namespace std;

class Ticket{
	
	private:
		int train_num;
		string train_name;
		string train_source;
		string train_destination;
		string train_time;
		
	public:
		void SetTrain(int number, string name, string source, string destination, string time){
			this->train_num = number;
			this->train_name = name;
			this->train_source = source;
			this->train_destination = destination;
			this->train_time = time;
			
		}
	
		void TrainRecord(){
			cout << "Enter train number:- ";
			cin >> train_num;
			cout << "Enter train name:- ";
			cin >> train_name;
			cout << "Enter train source:- ";
			cin >>train_source;
			cout << "Enter train destination:-";
			cin >>train_destination;
			cout << "Enter train time:- ";
			cin >> train_time;
		}
		
		void DisplayRecord(){
			cout <<"Train number:- " <<train_num << endl;
			cout <<"Train name:- "<<train_name << endl;
			cout <<"Train source:- "<<train_source<< endl;
			cout <<"Train destination:- " <<train_destination << endl;
			cout <<"Train time:- "<<train_time<< endl;
		}
		
		
};


int main(){
	Ticket train;
	
	cout <<"------Enter train details------" << endl;
	train.TrainRecord();
	
	
	cout <<"----Trian Information----"<< endl;
	train.DisplayRecord();
	
	
	
	
	
	return 0;
}