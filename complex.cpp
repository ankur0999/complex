#include<iostream>
using namespace std;

class complex{
    private:
        float x;
        float y;
    public:
        // constructor
        complex(float x, float y){
             this->x = x;
             this->y = y;
             }
             // default constructor
         complex(){}
         //copy constructor
         complex(complex &c){
             this->x = c.x;
             this->y = c.y;
             }
	 complex(int x){
		 this->x = x;
		 this->y = 0;
	 }
        complex operator +(complex c){
            complex tmp;
                tmp.x = this->x + c.x;
                tmp.y = this->y + c.y;
                return tmp;
                }
        complex operator +(int x){
            complex tmp;
                tmp.x = this->x + x;
                tmp.y = this->y + 0;
                return tmp;
                }
        complex operator *(complex c){
             complex tmp;
             tmp.x = this->x*c.x - this->y*c.y;
             tmp.y = this->x*c.y + this->y*c.x;
             return tmp;
             }
        complex operator *(int x){
             complex tmp;
             tmp.x = this->x*x - this->y*0;
             tmp.y = this->x*0 + this->y*x;
             return tmp;
             }
        void show_data(){
            cout<<x<<" "<<y<<endl;
            }
            };
            
int main(){
    complex c1(1,2), c2(2,3), c3,c4, c6(1);
    
    c3 = c1+c2+2;
    //c3.show_data();
    //c4 = c3*c2;
    //complex c5(c4);
    //c5.show_data();
    //c6 = c1+c2*c4;
    c3.show_data();
    
    }
    
