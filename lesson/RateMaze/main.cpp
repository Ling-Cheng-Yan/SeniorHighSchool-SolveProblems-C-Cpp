#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

void printmaze(int maze[][SIZE], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << setfill(' ') << setw(3) << maze[i][j];
        }
        cout << endl;
    }
}

int visit(int maze[][SIZE], int i, int j, int counter){
    cout << i << " " << j << " " << counter << endl;
    printmaze(maze,9);
    if(maze[i][j] == 2){
        cout << "finish";
        return 2;
    }
    else if (maze[i][j] ==0){
        cout << "*";
        counter++;
        maze[i][j] = 1;
        visit(maze, i, j-1,counter);
        visit(maze, i-1, j,counter);
        visit(maze, i, j+1,counter);
        visit(maze, i+1, j,counter);
        return 1;
    }
    else if(maze[i][j] == 1){
        return 1;
    }
    else if(maze[i][j] == -1){
        return -1;
    }
}


int main() {
    int n;
    char x;
    cin >> n;
    int arr[SIZE][SIZE];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x == '#'){
                arr[i][j] = -1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    arr[n-2][n-2] = 2;
    int counter = 0;
    visit(arr,1,1,counter);



    return 0;
}
