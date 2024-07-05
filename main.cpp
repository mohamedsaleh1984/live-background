#include <iostream>
#include "Video.h"
#include "ImagesGenerator.h"
using namespace std;


int main(int argc,char** argv){
    
     string strInput="/home/moe/0001/CPP/live-background/trial/01.mp4";
    // getline(cin,strInput);

    Video vid(strInput);
    ImagesGenerator imGen(vid);
    imGen.generate();

    return 0;
}