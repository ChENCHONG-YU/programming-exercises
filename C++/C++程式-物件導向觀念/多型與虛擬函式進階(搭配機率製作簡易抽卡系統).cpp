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
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(1,100);

shared_ptr<Card> drawCard(){
	int roll = dist(gen); //1~100
	
	if(roll <= 5){
		return make_shared<SSRCard>(); //5%機率 
	}else if(roll <= 25){
		return make_shared<SRCard>(); // 20%機率 
	}else{
	    return make_shared<RCard>();  // 75%機率 
	}
	 
}
 
int main(){
	//為了要讓他可以循環執行所以這邊加入了do迴圈 
	do{
		int drawTimes;
		cout << "請輸入要抽幾次：";
		cin >> drawTimes;
		
		vector<shared_ptr<Card>> result;
		
		for(int i = 0; i < drawTimes; i++){
			result.emplace_back(drawCard());
		}
		
		cout << "======抽卡結果=======" << endl;
		for(auto & card: result){
			card->showInfo();
		}
	}while(true);
		 
	
	return 0;
}
