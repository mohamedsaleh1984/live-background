
#include "ImagesGenerator.h"

const int FPS = 15;

ImagesGenerator::ImagesGenerator(Video &vidFile)
{
    this->videoFile = &vidFile;
}

vector<string> ImagesGenerator::generate()
{
    if (videoFile == nullptr)
        throw runtime_error("NO Video");

    fulshImageDirectory();
    string location(constants::IMAGES_LOCATION.c_str());

    string strCmd = "";

    // Structure which would store the metadata
    struct stat sb;
    if (stat(constants::IMAGES_LOCATION.c_str(), &sb) != 0)
    {
        // Create Directory
        strCmd = "cd / & mkdir" + location;
        // System Call to Create Images Directory
        system(strCmd.c_str());
    }

    vector<string> vec{0};

    strCmd = "cd " + location;

    system(strCmd.c_str());

    strCmd = "ffmpeg -i " + this->videoFile->getVideoPath() + " -vf fps=" + to_string(FPS) + " %05d.png";

    cout << "Please wait while creating the images..." << endl;

    system(strCmd.c_str());

    cout << "Done..." << endl;

    // TODO:: Load the images location into the vector

    return vec;
}

void ImagesGenerator::fulshImageDirectory()
{

    // Structure which would store the metadata
    struct stat sb;

    // If directory is exists
    if (stat(constants::IMAGES_LOCATION.c_str(), &sb) == 0)
    {
        string strCmd = "rm -f " + IMAGES_LOCATION;
        cout << "remnoving images..." << endl;
        system(strCmd.c_str());
    }
}
