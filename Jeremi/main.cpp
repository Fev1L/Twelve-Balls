//
//  main.cpp
//  Jeremi
//
//  Created by Fev1L on 05.03.2025.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int normalBall = 2;
int lightBall = 1;
int heavyBall = 3;

string game(){
    int arr[12] = {2,2,2,2,2,2,2,2,2,2,2,2};
    int l = rand() % 11;
    int h = rand() % 11;
    
    int x,y,z;
    
    int lChoise, hChoise;
    
    bool win = false;
    if(h == l){
        do{
            h = rand() & 11;
        }while(h != l);
    }
    
    
    cout<<"h: "<<h<<"l: "<<l<<endl;
    
    for(int i = 0;i<12;i++){
        if(i == l){
            arr[i] = 1;
        }
        if(i == h){
            arr[i] = 3;
        }
    }
    
    for(int i = 0;i<12;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    do{
        cout<<"Please chose first ball [From 0 - 11]: "<<endl;
        cin>>x;
        cin>>y;
        cin>>z;
        cout<<"Averege masa is: "<<arr[x] + arr[y] + arr[z]<<endl;
        cout<<"Chose light ball (you can chose randomly if you dont know): "<<endl;
        cin>>lChoise;
        cout<<"Chose heavy ball (you can chose randomly if you dont know): "<<endl;
        cin>>hChoise;
        if(lChoise == l && hChoise == h){
            win = true;
        }else if(lChoise == l && hChoise != h){
            cout<<"light ball is correct"<<endl;
        }else if(lChoise != l && hChoise == h){
            cout<<"heavy ball is correct"<<endl;
        }else{
            cout<<"Nice try"<<endl;
        }
    }while(win != true);
    
    return "You are win!";
}



int main(int argc, const char * argv[]) {
    srand(time(0));
    cout<<game()<<endl;
    return 0;
}
