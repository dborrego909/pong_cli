#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	string user_response;
	cout << "Welcome to Ping Pong" << endl;
	cout << "Would you like to play?"<< getline(cin, user_response);
	if (user_response == "yes") {
		cout<<"Hello World"<<endl;
	} else if (user_response == "no") {
		cout<<"Goodbye World"<< endl;
	} else {
		cout<< "Please type in yes or no" << endl;
	}
}
