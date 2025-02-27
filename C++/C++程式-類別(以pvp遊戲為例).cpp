#include <iostream>
#include <string> 
#include <cstdlib>  //引用C語言的函式庫，在C就是stdlib.h
#include <ctime>   //引用C語言的函式庫，在C就是time.h (隨機數)

using namespace std;

class Player{
	private:
		//資料
		 string name;  //名字 
		 int hp;	   //血量 
		 int atk;      //攻擊力 
	public:
		//行為
		
		//角色屬性 
		 Player(string n, int h, int a){
		 	name = n;
		 	hp = h;
		 	atk = a;
		 } 
		 
		 //攻擊動作 
		 void attack(Player& p2){
		 	p2.setHp(getHp() - atk);   //p2的HP減掉攻擊 
		 	
		 	cout << "---------------------" << endl;
		 	cout << name << "攻擊了" << p2.name << endl;
			cout << p2.name << "受到了" << atk << "點的傷害" << endl;
			cout << p2.name << "剩下" << p2.hp << "的血量" << endl;
			cout << "---------------------" << endl;
			cout << endl;
		 }
		 
		 //保護hp不會出現負數 
		 void setHp(int h){
		 	if(h < 0){
		 		hp = 0;
		 		return;
			 }
			 hp = h;
		 }
		 
		 int getHp(){
		 	return hp;
		 }
		 string getName(){
		 	return name;
		 }
		 
		 /*
		    C++：bool
			bool a = true;
			bool b = false; 
		 */
		 bool isAlive(){
		 	if(hp > 0){
		 		return true;
			 }else{
			 	return false;
			 }
		 }
		 
		 
};

int main(){
	
	/* 
	1. srand() 函數用於設置 rand() 生成隨機數的種子，確保隨機數序列的可重現性。
	2. srand(time(NULL));可以在每次運行程式時生成不同的隨機數。這樣可以確保每次產生的隨機數列都是不一樣的。
	3. 使用time()這個函式可以拿到目前的時間，通常裡面都會帶一個NULL。 
	4. srand()裡面不一定要使用時間，這裡只要想辦法讓他每次開程式的時候他能給出不一樣的值就可以了，這裡使用
	   時間的方式比較簡單。
	5. srand()裡面的值通常都要有記憶性，如果沒有記憶性就不可能跟上次執行不一樣，如果要跟上次執行的不一樣
	就必須要有上次執行的紀錄，時間就是有這樣的特性，時間是一個紀錄在電腦裡面他在幫你做tick，所以時間是有
	記憶性的。 
	*/
	srand(time(NULL));
	
	//rand() % 1000 + 1:取隨機數 1 ~ 1000 之間 ，如果是寫 rand() % 1000就表示取隨機數 0 ~ 999 之間 
	Player p1("勇者",rand() % 1000 + 1,rand() % 1000 + 1);
	Player p2("乂煞氣a魔王乂",rand() % 1000 + 1,rand() % 1000 + 1);
	
	//當p1與p2都還存活的時候p1可以攻擊p2、p2可以攻擊p1 
	while(p1.isAlive() && p2.isAlive()){
		p1.attack(p2);
		p2.attack(p1);
	}
	//如果 p1.isAlive() = true 則p1贏，否則如果p2.isAlive() = true 則p2贏，否則平手(表示兩個都等於false) 
	if(p1.isAlive()){
	    cout << p1.getName() << "WIN!" << endl;
	}else if(p2.isAlive()){
		cout << p2.getName() << "WIN!" << endl;
	}else{
		cout << "平手" << endl; 
	}
	
	return 0;	
}
