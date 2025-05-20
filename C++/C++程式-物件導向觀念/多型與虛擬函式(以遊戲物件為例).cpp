#include <iostream>
#include <vector>
#include <memory>
using namespace std;

//��class(���O)����H���O(abstract class)
//�u�n���O���ܤ֥]�t�@�� �u�µ����禡�]pure virtual function�^�v�N����H���O(abstract class)
class GameObject{
    public:
        virtual void update() = 0;  //��s�޿�(�µ���) 
        virtual void render() = 0;  //ø���޿�(�µ���)
        virtual ~GameObject() {}    //�����غc�l(���n) 
};
class Player : public GameObject{
    public:
        void update() override{
            cout << "Player ���ʤ�..." << endl;
        }
        void render(){
            cout << "�e�X Player �Ϲ�" << endl;
        }
};
class Enemy : public GameObject{
    public:
        void update() override{
            cout << "Enemy�l��Player��..." << endl;
        }
        void render() override{
            cout << "�e�X Enemy �Ϲ�" << endl;
        }
};
class Item : public GameObject{
    public:
        void update() override{
            cout << "Item���ݳQ�ߨ�..." << endl;
        }
        void render() override{
            cout << "�e�X Item �Ϲ�" << endl;
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
