#include<bits/stdc++.h>
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Simple Constructor called"<<endl;
        name = new char[10];
    }

    // Parameterised Constructor
    Hero(int health){
        this->health = health;
    }
    Hero(int health,char level){
        this->level = level;
        this->health = health;
    }
    // Copy Constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"Copy Constructor called."<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[Name: "<<this->name<<" ,";
        cout<<"[Health: "<<this->health<<" ,";
        cout<<"[Level: "<<this->level<<" ]";
        cout<<endl<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout<<"Destructor called."<<endl;
    }
};

int Hero::timeToComplete = 5;

int main(){
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;

    // Static 
    // Hero a;
    // Dynamic
    // Hero *b = new Hero();
    // manually destructor call 
    // delete b; 

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('A');
    // char name[7] = "Malviya";
    // hero1.setName(name);

    // hero1.print();

    // use default copy constructor 

    // Hero hero2(hero1);
    // hero2.print();
    // Hero hero2 = hero1;

    // hero1.name[0]='G';
    // hero1.print();
    // hero2.print();
    // hero1 = hero2;
    // hero1.print();
    // hero2.print();

    // Hero tt;
    // object created statically
    // Hero ankit(10);
    // cout<<"Address of Ankit: "<<&ankit<<endl;
    // ankit.print();

    // dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22,'B');
    // temp.print();

    // Static Allocation 
    // Hero a;
    // a.setHealth(21);
    // a.setLevel('A');
    // cout<<"Level is: "<<a.level<<endl;
    // cout<<"Health is: "<<a.getHealth()<<endl;

    // dynamically 
    // Hero *b = new Hero();
    // b->setLevel('A');
    // b->setHealth(50);
    // cout<<"Level: "<<(*b).level<<endl;
    // cout<<"Health: "<<(*b).getHealth()<<endl;

    // cout<<"Level: "<<b->level<<endl;
    // cout<<"Health: "<<b->getHealth()<<endl;

    // Creation of Object 
    Hero ankit;
    cout<<"Size: "<<sizeof(ankit)<<endl;
    cout<<"Health: "<<ankit.getHealth()<<endl;
    // use setter 
    ankit.setHealth(100);
    ankit.level = 'A';

    cout<<"Health: "<<ankit.getHealth()<<endl;
    cout<<"Level: "<<ankit.level<<endl;


    return 0;
}

// 5
// 5
// Simple Constructor called
// Size: 24
// Health: 8
// Health: 100
// Level: A
// Destructor called.