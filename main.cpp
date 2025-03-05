#include <iostream>
#include <cstdlib>
using namespace std;
int normalBall = 2;
int lightBall = 1;
int heavyBall = 3;
int answer;
int ball1,ball2,ball3;
int l_choice;
int h_choice;

int game(){
    cout<<"The average weight is 2kg, to win you have to find balls the weights 3 and 1 kg, you can choose 3 balls to measure their weigth at one time pressing 1, to end the game press 0, to say your answers press 2, have a nice game)";
    int arr[12] = {2,2,2,2,2,2,2,2,2,2,2,2};
    int l = rand() % 11;
    int h = rand() % 11;
    
    while(l == h){
        h = rand() % 11;
    }
    
    for(int i = 0; i < 12; i++){
        if(i == h){
            arr[i] = 3;
        }if(i == l){
            arr[i] = 1;
        }
    }
    
    for(int i = 0; i <100000; i++){
        cout<<endl;
        cout<<"What are you going to do? ";
        cin>>answer;
        
        if(answer == 0){
            cout<<"The game is over"<<endl;
            return -1;
        }
        if(answer == 1){
            cout<<"What balls you want to choose?";
            cin>>ball1;
            cin>>ball2;
            cin>>ball3;
            if(ball1 < 0 || ball1 > 11){
                cout<<"No such balls existing ";
            }else if(ball2 < 0 || ball2 > 11){
                cout<<"No such balls existing ";
            }else if(ball3 < 0 || ball3 > 11){
                cout<<"No such balls existing ";
            }else if(ball1 == ball2 || ball1 == ball3 || ball2 == ball3){
                cout<<"You can't choose same balls!!!";
            }else{
                cout<<"The sum is "<<arr[ball1]+arr[ball2]+arr[ball3]<<endl;
                cout<<"What do you want to choose next? 0(end the game), 1(another choice), 2(say your answers)";
            }
        }
        if(answer == 2){
            cout<<"What ball is heavy? ";
            cin>>h_choice;
            
            cout<<"What ball is light? ";
            cin>>l_choice;
            
            if(l_choice == l && h_choice == h){
                cout<<"You have won"<<endl;
                return 1;
                
            }else{
                cout<<"some of your calculations went wrong"<<endl;
                return 0;
            }
        }else if(answer <0 || answer > 2){
            cout<<"There is no such choice!!!"<<endl;
        }
    }
    return 2;
}

int main(int argc, const char * argv[]) {
    srand(time(0));
    game();
    return 0;
}
