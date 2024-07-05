#pragma once
#ifndef __IMAGE_GENERATOR_H__
#define __IMAGE_GENERATOR_H__

#include "Global.h"
#include "Video.h"
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


class ImagesGenerator
{
public:
    ImagesGenerator(Video& vidFile);
    vector<string> generate();
private:
    Video* videoFile = nullptr;
    void fulshImageDirectory();
};

#endif