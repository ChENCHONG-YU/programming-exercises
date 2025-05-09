#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 產品類別
class Product {
public:
    string name;
    int quantity;
    int price;

	//Product建構子 
	/*
	:name(name), quantity(quantity), price(price)這段意思是把
	傳進來的name值指定給this->name
	傳進來的quantity值指定給this->quantity
	傳進來的price值指定給this->price 
	*/ 
    Product(string name, int quantity, int price)
        : name(name), quantity(quantity), price(price) {}

    void print() const {
        cout << "產品名稱：" << name << endl;
        cout << "產品數量：" << quantity << endl;
        cout << "產品價格：" << price << endl;
    }

    int subtotal() const {
        return quantity * price;
    }
};

// 訂單類別
class Order {
private:
    vector<Product> products;

public:
    void input() {
        int number;
        cout << "請輸入訂單數量：";
        cin >> number;

        for (int i = 0; i < number; i++) {
            string name;
            int quantity, price;

            cout << "輸入第" << i + 1 << "筆產品名稱：";
            cin >> name;
            cout << "輸入第" << i + 1 << "筆產品數量：";
            cin >> quantity;
            cout << "輸入第" << i + 1 << "筆產品價格：";
            cin >> price;

            products.emplace_back(name, quantity, price);
        }
    }

    void printSummary() const {
        int total = 0;
        cout << "------------------------------------------" << endl;
        for (size_t i = 0; i < products.size(); i++) {
            cout << "第" << i + 1 << "筆產品資訊：" << endl;
            products[i].print();
            total += products[i].subtotal();
        }
        cout << "價格總計：" << total << endl;
    }
};

int main() {
    Order order;
    order.input();
    order.printSummary();
    return 0;
}

