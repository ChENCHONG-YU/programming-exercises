#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <cctype>

using namespace std;

// 判斷是否為運算子
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
}

// 設定運算子的優先級
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return 0;
}

// 執行基本的數學運算
int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b == 0 ? 0 : a / b; // 避免除以 0
        case '%': return b == 0 ? 0 : a % b; // 避免取模 0
    }
    return 0;
}

// 計算數學表達式
int evaluate(const string &expression) {
    stack<int> values;  // 儲存數字
    stack<char> ops;    // 儲存運算子
    
    istringstream iss(expression);
    string token;
    
    while (iss >> token) {
        if (isdigit(token[0])) {  // 如果是數字
            values.push(stoi(token));
        } else if (token == "(") {  // 左括號
            ops.push('(');
        } else if (token == ")") {  // 右括號
            while (!ops.empty() && ops.top() != '(') {
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.pop(); // 移除 '('
        } else if (isOperator(token[0])) {  // 運算子
            while (!ops.empty() && precedence(ops.top()) >= precedence(token[0])) {
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(token[0]);
        }
    }
    
    // 計算剩餘的運算
    while (!ops.empty()) {
        int val2 = values.top(); values.pop();
        int val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        values.push(applyOp(val1, val2, op));
    }
    
    return values.top();
}

int main() {
    string line;
    while (getline(cin, line)) {  // 讀取直到 EOF
        if (!line.empty()) {
            cout << evaluate(line) << endl;
        }
    }
    return 0;
}
