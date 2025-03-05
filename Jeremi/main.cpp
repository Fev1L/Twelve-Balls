//
//  main.cpp
//  Jeremi
//
//  Created by Fev1L on 05.03.2025.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int l = rand() % 11;
int h = rand() % 11;

class twelwBalls{
private:
    
    
    int x,y,z;
    
    int lChoise, hChoise;
    
    bool win = false;
public:
    void endGame(){
        cout<<"Chose light ball (you can chose randomly if you dont know): "<<endl;
        cin>>lChoise;
        cout<<"Chose heavy ball (you can chose randomly if you dont know): "<<endl;
        cin>>hChoise;
        
        if(lChoise == l && hChoise == h){
            cout<<"You are win";
            exit(0);
        }else if(lChoise == l && hChoise != h){
            cout<<"light ball is correct"<<endl;
            exit(0);
        }else if(lChoise != l && hChoise == h){
            cout<<"heavy ball is correct"<<endl;
            exit(0);
        }else{
            cout<<"Nice try"<<endl;
            exit(0);
        }
    }
    void balls(int arr[12]){
        cout<<"Please chose three balls [From 0 - 11]: "<<endl;
        cin>>x;
        cin>>y;
        cin>>z;
        if(x != y && x != z && y != z){
            cout<<"Averege masa is: "<<arr[x] + arr[y] + arr[z]<<endl;
        }else{
            cout<<"Dont cheat! Chose not similar"<<endl;
        }
    }
};

int main(int argc, const char * argv[]) {
    bool end = false;
    string answear;
    srand(time_t(0));
    int arr[12] = {2,2,2,2,2,2,2,2,2,2,2,2};
    if(h == l){
        do{
            h = rand() & 11;
        }while(h != l);
    }
    
    for(int i = 0;i<12;i++){
        if(i == l){
            arr[i] = 1;
        }
        if(i == h){
            arr[i] = 3;
        }
    }
    twelwBalls obj;
    do{
        cout<<"Chose comands[stop,balls,chose]: "<<endl;
        cin>>answear;
        if(answear == "stop"){
            end = true;
            exit(0);
        }else if(answear == "chose"){
            obj.endGame();
        }else if(answear == "balls"){
            obj.balls(arr);
        }
    }while(end == false);
    return 0;
}
