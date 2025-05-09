#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ���~���O
class Product {
public:
    string name;
    int quantity;
    int price;

	//Product�غc�l 
	/*
	:name(name), quantity(quantity), price(price)�o�q�N��O��
	�Ƕi�Ӫ�name�ȫ��w��this->name
	�Ƕi�Ӫ�quantity�ȫ��w��this->quantity
	�Ƕi�Ӫ�price�ȫ��w��this->price 
	*/ 
    Product(string name, int quantity, int price)
        : name(name), quantity(quantity), price(price) {}

    void print() const {
        cout << "���~�W�١G" << name << endl;
        cout << "���~�ƶq�G" << quantity << endl;
        cout << "���~����G" << price << endl;
    }

    int subtotal() const {
        return quantity * price;
    }
};

// �q�����O
class Order {
private:
    vector<Product> products;

public:
    void input() {
        int number;
        cout << "�п�J�q��ƶq�G";
        cin >> number;

        for (int i = 0; i < number; i++) {
            string name;
            int quantity, price;

            cout << "��J��" << i + 1 << "�����~�W�١G";
            cin >> name;
            cout << "��J��" << i + 1 << "�����~�ƶq�G";
            cin >> quantity;
            cout << "��J��" << i + 1 << "�����~����G";
            cin >> price;

            products.emplace_back(name, quantity, price);
        }
    }

    void printSummary() const {
        int total = 0;
        cout << "------------------------------------------" << endl;
        for (size_t i = 0; i < products.size(); i++) {
            cout << "��" << i + 1 << "�����~��T�G" << endl;
            products[i].print();
            total += products[i].subtotal();
        }
        cout << "�����`�p�G" << total << endl;
    }
};

int main() {
    Order order;
    order.input();
    order.printSummary();
    return 0;
}

