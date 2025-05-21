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
random_device rd;                           // ���ͦw�����üƺؤl
mt19937 gen(rd());							// �γo�Ӻؤl�ӫإ߶üƤ����]Mersenne Twister�^
uniform_int_distribution<> dist(1,100);		// ���w�H���Ȫ��d��

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
	int count;
	bool b = true;
	cout << "�Цۭq�z�����Y�ƶq(�̤֥u���J150)�G";
	cin >> count; 
	
	do{
		//�ˬd�̧C��J�ƶq 
		if(count < 150){
			cout << "�Цۭq�z�����Y�ƶq(�̧C�u���J150)�G";
			cin >> count;
			continue; 
		}
		
		//��d�]�w (�@�� -150�B�Q�� -1500)
		int drawTimes;
		cout << "�z�����Y�ƶq�ٳѤU�G" << count << endl; 
		cout << "�п�J�n��X��(�̤֩�@�s��̦h�Q�s��)�G";
		cin >> drawTimes;
		
		vector<shared_ptr<Card>> result;
		if(drawTimes == 1 || drawTimes == 10){
			if(count < 1500 && drawTimes == 10){
				cout << "���Y�ƧC��1500�L�k����Q�s��!!!" << endl; 
				continue;
			}
			for(int i = 0; i < drawTimes; i++){
				result.emplace_back(drawCard());
				count -= 150;
			}
			
		}else{
			cout << "�̦h�Q�s��̤֤@�s��!!!" << endl; 
			continue;	
		}
		
		//��d���G 
		cout << "======��d���G=======" << endl;
		for(auto & card: result){
			card->showInfo();
		}
		//�ˬd���Y�ƶq�O�_�C��150�A�p�G�C��150�����{�� 
		if(count < 150){
			cout << "�z�����Y�ƶq�ٳѤU�G"<< count << " (���Y�ƶq����)" << endl;
			cout << "==========��d�{������!!!===========" << endl; 
		    b = false;
		}
	}while(b);
		 
	
	return 0;
}
