#pragma once
#ifndef _VIDEO_H__
#define _VIDEO_H__

#include <iostream>
#include <string.h>
using namespace std;

class Video{
    public:
        Video(string strFilePath);
        void setVideoPath(string path);
        string getVideoPath();
        
    private:
        string filePath;
};

#endif