#include <iostream>
using namespace std;

int main(){
	int row, column; 
	while((cin >> row >> column)){
		int matrix[row][column];
		//輸入矩陣資料 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < column; j++){
				cin >> matrix[i][j];
			}
		}
		//輸出矩陣翻轉 
		for(int j = 0; j < column; j++){
			for(int i = 0; i < row; i++){
				cout << matrix[i][j] << ' ';
			}
			cout << endl;
		}
	}
	
	return 0;
} 
