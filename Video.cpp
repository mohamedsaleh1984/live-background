
#include "Video.h"
#include <stdexcept>

Video::Video(string strFilePath)
{
    setVideoPath(strFilePath);
}

void Video::setVideoPath(string path)
{
    if (path.size() == 0)
        throw runtime_error("Video file path is not valid");
    this->filePath = path;
}

string Video::getVideoPath()
{
    return filePath;
}
