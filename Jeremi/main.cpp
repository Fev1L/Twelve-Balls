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
int hardBall = 3;

string game(){
    int arr[12] = {2,2,2,2,2,2,2,2,2,2,2,2};
    int l = rand() & 12;
    int h = rand() & 12;
    
    
    return "You are win!";
}

int main(int argc, const char * argv[]) {
    srand(time(0));
    cout<<game()<<endl;
    return 0;
}
