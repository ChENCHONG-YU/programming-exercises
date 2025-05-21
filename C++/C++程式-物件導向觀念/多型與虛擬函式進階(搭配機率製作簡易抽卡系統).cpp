#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <ctime> 
using namespace std;

// 基底類別(抽象) 
class Card{
	public:
		virtual void showInfo() = 0;
		virtual ~Card() {}
};

//各種子類別(不同稀有度) 
class SSRCard : public Card{
	public:
		void showInfo() override{
			cout << "抽中SSR: 最強角色!" << endl; 
		}
};
class SRCard : public Card{
	public:
		void showInfo() override{
			cout << "抽中SR: 實力角色!" << endl;
		}
};
class RCard : public Card{
	public:
		void showInfo() override{
			cout << "抽中R: 普通角色!" << endl; 
		}
};
 
//抽卡邏輯
random_device rd;                           // 產生安全的亂數種子
mt19937 gen(rd());			    // 用這個種子來建立亂數引擎（Mersenne Twister）
uniform_int_distribution<> dist(1,100);	    // 指定隨機值的範圍

shared_ptr<Card> drawCard(){
	
	int roll = dist(gen); //1~100
	
	if(roll <= 5){
		return make_shared<SSRCard>();  //5%機率 
	}else if(roll <= 25){
		return make_shared<SRCard>();   // 20%機率 
	}else{
	    return make_shared<RCard>();        // 75%機率 
	}
	 
}
 
int main(){
	int count;
	bool b = true;
	cout << "請自訂您的石頭數量(最少只能輸入150)：";
	cin >> count; 
	
	do{
		//檢查最低輸入數量 
		if(count < 150){
			cout << "請自訂您的石頭數量(最低只能輸入150)：";
			cin >> count;
			continue; 
		}
		
		//抽卡設定 (一抽 -150、十抽 -1500)
		int drawTimes;
		cout << "您的石頭數量還剩下：" << count << endl; 
		cout << "請輸入要抽幾次(最少抽一連抽最多十連抽)：";
		cin >> drawTimes;
		
		vector<shared_ptr<Card>> result;
		if(drawTimes == 1 || drawTimes == 10){
			if(count < 1500 && drawTimes == 10){
				cout << "石頭數低於1500無法抽取十連抽!!!" << endl; 
				continue;
			}
			for(int i = 0; i < drawTimes; i++){
				result.emplace_back(drawCard());
				count -= 150;
			}
			
		}else{
			cout << "最多十連抽最少一連抽!!!" << endl; 
			continue;	
		}
		
		//抽卡結果 
		cout << "======抽卡結果=======" << endl;
		for(auto & card: result){
			card->showInfo();
		}
		//檢查石頭數量是否低於150，如果低於150結束程式 
		if(count < 150){
			cout << "您的石頭數量還剩下："<< count << " (石頭數量不足)" << endl;
			cout << "==========抽卡程式結束!!!===========" << endl; 
		    b = false;
		}
	}while(b);
		 
	
	return 0;
}
