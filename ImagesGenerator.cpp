
#include "ImagesGenerator.h"

ImagesGenerator::ImagesGenerator(Video& vidFile)
{
    this->videoFile = &vidFile;
}

vector<string> ImagesGenerator::generate()
{
    if (videoFile == nullptr)
    {
        throw runtime_error("NO Video");
    }

    fulshImageDirectory();

    vector<string> vec{0};

    return vec;
}

void ImagesGenerator::fulshImageDirectory(){
    cout << "remove old directory" << endl;
}
