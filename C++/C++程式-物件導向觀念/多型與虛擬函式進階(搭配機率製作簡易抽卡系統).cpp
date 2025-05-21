#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <ctime> 
using namespace std;

// �����O(��H) 
class Card{
	public:
		virtual void showInfo() = 0;
		virtual ~Card() {}
};

//�U�ؤl���O(���P�}����) 
class SSRCard : public Card{
	public:
		void showInfo() override{
			cout << "�⤤SSR: �̱j����!" << endl; 
		}
};
class SRCard : public Card{
	public:
		void showInfo() override{
			cout << "�⤤SR: ��O����!" << endl;
		}
};
class RCard : public Card{
	public:
		void showInfo() override{
			cout << "�⤤R: ���q����!" << endl; 
		}
};
 
//��d�޿�
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dist(1,100);

shared_ptr<Card> drawCard(){
	int roll = dist(gen); //1~100
	
	if(roll <= 5){
		return make_shared<SSRCard>(); //5%���v 
	}else if(roll <= 25){
		return make_shared<SRCard>(); // 20%���v 
	}else{
	    return make_shared<RCard>();  // 75%���v 
	}
	 
}
 
int main(){
	//���F�n���L�i�H�`������ҥH�o��[�J�Fdo�j�� 
	do{
		int drawTimes;
		cout << "�п�J�n��X���G";
		cin >> drawTimes;
		
		vector<shared_ptr<Card>> result;
		
		for(int i = 0; i < drawTimes; i++){
			result.emplace_back(drawCard());
		}
		
		cout << "======��d���G=======" << endl;
		for(auto & card: result){
			card->showInfo();
		}
	}while(true);
		 
	
	return 0;
}
