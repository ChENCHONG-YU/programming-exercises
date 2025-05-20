#include <iostream>
#include <vector>
#include <memory>
using namespace std;

//本class(類別)為抽象類別(abstract class)
//只要類別中至少包含一個 「純虛擬函式（pure virtual function）」就為抽象類別(abstract class)
class GameObject{
    public:
        virtual void update() = 0;  //更新邏輯(純虛擬) 
        virtual void render() = 0;  //繪圖邏輯(純虛擬)
        virtual ~GameObject() {}    //虛擬解構子(必要) 
};
class Player : public GameObject{
    public:
        void update() override{
            cout << "Player 移動中..." << endl;
        }
        void render() override{
            cout << "畫出 Player 圖像" << endl;
        }
};
class Enemy : public GameObject{
    public:
        void update() override{
            cout << "Enemy追蹤Player中..." << endl;
        }
        void render() override{
            cout << "畫出 Enemy 圖像" << endl;
        }
};
class Item : public GameObject{
    public:
        void update() override{
            cout << "Item等待被撿取..." << endl;
        }
        void render() override{
            cout << "畫出 Item 圖像" << endl;
        }
};

int main()
{
  vector<shared_ptr<GameObject>> objects;
  
  objects.emplace_back(make_shared<Player>());
  objects.emplace_back(make_shared<Enemy>());
  objects.emplace_back(make_shared<Item>());
  
  for(auto & obj:objects){
      obj->update();
      obj->render();
      cout << "------------------------" << endl;
  }
    
    return 0;
}
