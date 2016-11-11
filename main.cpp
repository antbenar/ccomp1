#include <iostream>
#include <vector>
#define MINI(a,b)((a>b)?b:a)

template<typename T>
T mini(T a,T b){
    if (a>b)
        return b;
    return a;
}

template<typename T>
class Stack{
    static std::vector<T>a;
    public:
        Stack(){
            a.resize(0);
        }
        bool Empty(){
            if (a.size()!=0)
                return 0;
            return 1;
        }
        void Push(const T&item){
            a.resize(a.size()+1);
            a[a.size()-1]=item;
        }
        T &Top(){
            T *p=&a[a.size()-1];
            return p;
        }
        void Pop(){
            a.resize(a.size()-1);
        }
        void Imprimir(){
            for(int i=0; i<a.size()-1; i++)
                std::cout<<a[i]<<" , ";
            std::cout<<a[a.size()-1]<<std::endl;
        }

        friend Stack operator+(Stack<T> a1, Stack<T> b1){
            Stack<T>temp;
            temp.a.resize(a1.size()+b1.size());
            for(int i=0;i<a1;i++)
                temp.a.push_back(a1[i]);
            for(int i=0;i<b1;i++)
                temp.a.push_back(b1[i]);
            return temp;
        }

};



int main()
{
    std::cout <<mini(2.2,3.60)<<std::endl;
    std::cout <<MINI(2.8,3.4);
    //////////////////////////
    Stack<int> a;
    a.Push(2);
    a.Push(3);
    a.Push(4);
    a.Imprimir();
    a.Pop();
    a.Imprimir();
    Stack<int> b;
    b.Push(1);
    b.Push(2);
    Stack<int> c;
    c=a+b;
    std::cout<<"*** el stack es vacio si 1, de lo contrario 0: "<<a.Empty();*/

}
