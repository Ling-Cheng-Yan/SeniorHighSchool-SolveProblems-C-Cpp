#include <iostream>

using namespace std;

int main(){
    for(int i=0;i<200;i++){
        cout << i+1 ;
        if(i%6==0){
            cout <<"便當A" ;
        }
        else if(i%6==1){
            cout <<"便當B" ;
        }
        else if(i%6==2){
            cout <<"便當C" ;
        }
        else if(i%6==3){
            cout <<"便當D" ;
        }
        else if(i%6==4){
            cout <<"便當E" ;
        }
        else if(i%6==5){
            cout <<"便當F" ;
        }
        else if(i%6==6){
            cout <<"便當G" ;
        }
        cout <<endl ;
        }

    return 0;
}
