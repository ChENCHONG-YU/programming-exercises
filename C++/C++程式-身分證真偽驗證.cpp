#include <iostream>
#include <unordered_map>
using namespace std;

// 建立英文字母對應數字的映射表
/*
1.unordered_map<char, int> 是 C++ 標準函式庫 <unordered_map> 提供的一種 雜湊表 (Hash Table) 容器，
它的作用類似 字典 (Dictionary)，可以讓我們使用 鍵 (key) 快速查找對應的 值 (value)。
2.unordered_map 是一種 映射容器 (Mapping Container)，它允許我們建立「鍵值對 (Key-Value Pair)」的關係。
char 是鍵 (Key)：這裡的鍵是 字母 (A-Z)，用來對應台灣身分證字號的第一個字母。
int 是值 (Value)：這裡的值是 對應的數字代碼，例如 'A' 代表 10、'B' 代表 11。 

*/ 
unordered_map<char, int> letterMap = {
    {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
    {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35}, {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
    {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31}, {'Z', 33}
};

// 驗證台灣身分證字號是否合法
bool validateTaiwanID(const string &id) {
    if (id.length() != 10 || !isalpha(id[0])) return false; // 確保長度為 10 且第一碼為英文字母
    /*
	1.isalpha(id[0])是C++標準函式庫<cctype>提供的函式，它用來檢查一個字符是否為英文字母(A~Z或a~z)。
	id[0]代表輸入的身分證字號的第一個字元。 
	2. !isalpha(id[0]): 當isalpha(id[0])回傳true(代表id[0]是英文字母)時，加上!後 變成false，表示符合
	規則。
	3.當 isalpha(id[0])回傳false(代表id[0]不是英文字母，例如數字或符號)時，加上!後變成true ，表示這是
	一個無效的身分證號碼。 
	*/ 
    
    
    int num = letterMap[id[0]]; // 取得英文字母對應的數字
    int sum = (num % 10) * 9 + (num / 10); // 計算英文字母數值：個位數 * 9 + 十位數 
    /*
	(num % 10) * 9 + (num / 10); 這裡作法其實就是把第一個的英文字母對應的數字 十位數 + 個位數 *9
	EX:如果第一個英文數字是A對應的數字是10 計算方式就是 1 + 0 * 9  = 1，
	如果是B對應的數字是11 計算方式就是 1 + 1 * 9  = 10。 
    */
    
    for (int i = 1; i < 9; ++i) { // 從第二位開始處理數字
        if (!isdigit(id[i])) return false; // 確保所有數字部分為數字
        sum += (id[i] - '0') * (9 - i); // 依序乘以 8, 7, 6, ..., 1，並累加到總和 。id[i] - '0'表示把原本的字串型態轉成數字 
    }
    
    // 最後一碼 (檢查碼)
    if (!isdigit(id[9])) return false; // 確保最後一碼為數字
    sum += (id[9] - '0'); // 加上最後一碼
    
    return sum % 10 == 0; // 若總和能被 10 整除，則為合法身分證字號
}

int main() {
    string id;
    while (cin >> id) { // 持續讀取輸入直到 EOF
        cout << (validateTaiwanID(id) ? "real" : "fake") << endl; // 輸出判斷結果
    }
    return 0; // 結束程式
}
