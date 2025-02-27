#include <iostream>
using namespace std;

class Time{
	private:
		int hour;
		int minutes;
		int seconds;
	public:
		Time(){
			hour = 0;
			minutes = 0;
			seconds = 0;
		}
		Time(int h, int m, int s){
			hour = h;
			minutes = m;
			seconds = s;
		}
		
		int getHour(){
			return hour;
		}
		void setHour(int h){
			if(h >= 0 && h <= 23){
				hour = h;
			}else{
				cout << "hour值輸入超出合法範圍外!!!" << endl;
				hour = 0; 
			}
		}
		int getMinutes(){
			return minutes;
		}
		
		void setMinutes(int m){
			if(m >= 0 && m <= 59){
				minutes = m;
			}else{
				cout << "minutes值輸入超出合法範圍外!!!" << endl;
				minutes = 0; 
			}
		}
		int getSeconds(){
			return seconds;
		}
		void setSeconds(int s){
			if(s >= 0 && s <= 59){
				seconds = s;
			}else{
				cout << "seconds值輸入超出合法範圍外!!!" << endl;
				seconds = 0; 
			}
		}
		
		//操作
		void print(){
			cout << hour << "：" << minutes << "：" << seconds << endl; 
		}
			
		//計算時間差(秒)
		int diff(Time t2){
			return (hour - t2.hour) * 3600 +
				   (minutes - t2.minutes) * 60 +
				   (seconds - t2.seconds);
		} 	
};

int main(){
	Time previous(23,16,52);
	previous.print();
	Time current(23,52,20);
	current.print();
	cout << "兩個時間秒差：" <<current.diff(previous) << " 秒"<< endl;
	return 0;	
}
