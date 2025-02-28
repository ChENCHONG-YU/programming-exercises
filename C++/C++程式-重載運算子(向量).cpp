#include <iostream>
#include <cmath>
using namespace std;

class Vector{
	private:
	//資料(變數) 
	float x;
	float y;
	
	public:
	//操作、方法(函式)
	Vector(){
		x = 0;
		y = 0;
	}
	Vector(float newx, float newy){
		x = newx;
		y = newy;
	}
	
	float getLenght(){
		return sqrt(x*x + y*y);
	}
	
	Vector add(Vector other){
		Vector result(x + other.x, y + other.y);
		return result;
	}
	/*
	operator顧名思義就是運算子的意思 
	operator() 可以用來重載函式呼叫運算子，
	使得物件可以像函式一樣被調用，這是一種常見的用法。
	operator+ 可以表示說我要定義一個加法運算子的意思。 
	*/
	Vector operator+(Vector& other){
		//這裡其實也可以不用再宣告一個變數可以直接用Vector()寫在return就可以了 (這裡維持不動) 
		Vector result(x + other.x, y + other.y);
		return result;
	} 
	
	Vector operator*(float vlaue){
		//這裡其實也可以不用再宣告一個變數可以直接用Vector()寫在return就可以了 (這裡使用這種方式) 
		return Vector(x * vlaue, y * vlaue);
	}
	
};

int main(){
	
	Vector v1(1,1), v2(2,3);
//	Vector sumVector = v1.add(v2);

	/*
	加法原本有定義的在C語言C++裡面原本已經定義好的東西他有定義他自己的加號行為，但是這裡自己做的
	Vector是沒有定義加法行為的，所以這裡的v1 + v2程式不知道這裡是要如何加，到底是要x+x?還是y+y?
	所以如果想要這麼做就必須在上面自己定義自己的Vector，於是在上方就定義了operator函式，這麼一來
	 v1 + v2就可以正常使用了。 
	 */ 
//	Vector sumVector = v1 + v2; //也相等於Vector sumVector =  v1.operator+(v2);
	Vector sumVector = (v1 + v2) * 3.0; //也相當於 Vector sumVector = (v1 + v2).operator*(3.0);
	cout << "V向量的長度：" << sumVector.getLenght() << endl;  
	
	return 0;
}
