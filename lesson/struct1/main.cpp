#include <iostream>
#include <stdio.h>

using namespace std;

struct Ball{
    char color[10];
    double radius;
    int type;
};

int main()
{
    struct Ball balls[] = {
    {"red", 3.0,1},
    {"green", 5.0,2},
    {"blue", 10.0,3}
    };

    for(int i = 0; i < 3; i++) {
        cout << balls[i].color << endl << balls[i].radius << endl << balls[i].type;
    }
    return 0;
}
