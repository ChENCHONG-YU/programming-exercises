#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string, int> score;
	score["Alice"] = 80;
	score["Bob"] = 90;
	cout << score["Alice"] << endl;
	return 0;
} 
