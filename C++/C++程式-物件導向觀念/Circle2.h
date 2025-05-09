#include <string>
using namespace std; 
class Circle2{
	private:
		string name;
		int radius;
		int height;
	public:
		Circle2(){
			name = "Unset";
			radius = 1;
			height = 1;	
		}
		double getGirth();
		double getArea();
		double getVolume();
		void setRadius(int r);
		void setHeight(int h);
		String getName();
		void setName(string n);
};
double Circle2::getGirth(){
	return radius * 2 * 3.14159;
}
double Circle2::getArea(){
	return radius * radius * 3.14159;
}
double Circle2::getVolume(){
	return getArea() * height;
}
void Circle2::setRadius(int r){
	if(r >= 1 && r <= 1000){
		radius = r;
	}
}
void Circle2::setHeight(int h){
	if(h >= 1 && h <= 1000){
		height = h;
	}	
}
string Circle2::getName(){
	return name;
}
void Circle2::setName(string n){
	//n[0] == 'C' 表示說我輸入的字串第一個字要大寫 
	if(n.length() <= 10 && n[0] == 'C'){
		name = n;
	}
}


