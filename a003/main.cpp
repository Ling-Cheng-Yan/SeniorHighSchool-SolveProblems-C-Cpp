#include <iostream>

using namespace std;

int main(){
    int M,D,S ;
    cin >> M >> D ;
    S=(M*2+D)%3 ;
    if(S==0){
        cout << "´¶³q" <<endl ;
    }
    else if(S==1){
        cout <<"¦N" <<endl ;
    }
    else if(S==2){
        cout <<"¤j¦N" <<endl ;
    }
    return 0;
}
