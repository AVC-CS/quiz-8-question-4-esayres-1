#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MAXNUM = 10;
const int MAXLEN = 100;

int splitline(string, char, char[][MAXLEN]);

int splitline(string txt, char delimiter, char array[][MAXLEN]){
    int i = 0;
    int j = 0;
    int cnt = 0;


    while(txt[i] != '\0'){
        array[cnt][j] = txt[i];
        j++;

    }
}