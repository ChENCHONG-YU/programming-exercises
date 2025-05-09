#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
	set<int> s;
	s.insert(3); s.insert(3);
	cout << s.count(3);
	
	return 0;
}
