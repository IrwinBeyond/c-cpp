#include<iostream>
using namespace std;

int f(int x, int y){
    if(x==0 || y==0){
        return 1;
    }
    else {
        return f(x - 1, y) + f(x, y - 1);
    }
}

int g(int x, int y){
    if(x==0){
        return 1;
    }
    else{
        return g(x - 1, y) + f(x, y);
    }
}

int main(){
    cout << f(9, 5)<<endl;
    cout << g(10, 5);
    
}