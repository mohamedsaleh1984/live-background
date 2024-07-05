#pragma once
#ifndef __IMAGE_GENERATOR_H__
#define __IMAGE_GENERATOR_H__

#include "Global.h"
#include <iostream>
#include "Video.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
using namespace std;
using namespace constants;


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