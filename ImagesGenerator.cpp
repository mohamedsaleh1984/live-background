
#include "ImagesGenerator.h"

const int FPS = 15;
const string strSuppressOutput = " >out.dat 2>out.dat";

ImagesGenerator::ImagesGenerator(Video &vidFile)
{
    this->videoFile = &vidFile;
}

void ImagesGenerator::generate()
{
    if (videoFile == nullptr)
        throw runtime_error("NO Video");

    // fulshImageDirectory();
    createImageDirectory();

    string location(constants::IMAGES_LOCATION.c_str());

    string strCmd = "";

    strCmd = "cd " + location;

    system(strCmd.c_str());

    strCmd = "ffmpeg -i " + 
            this->videoFile->getVideoPath() +
            " -vf fps=" + to_string(FPS) + " " + 
            constants::IMAGES_LOCATION + "/%05d.png" +
            strSuppressOutput;

    cout << "Please wait while creating the images..." << endl;

    system(strCmd.c_str());

    cout << "Image Generating Completed..." << endl;

    strCmd = "rm out.dat";
    system(strCmd.c_str());
}

void ImagesGenerator::fulshImageDirectory()
{
    // Structure which would store the metadata
    struct stat sb;

    // If directory is exists
    if (stat(constants::IMAGES_LOCATION.c_str(), &sb) == 0)
    {
        cout << "remnoving images..." << endl;
        string strCmd = "rm -r " + constants::IMAGES_LOCATION + "/*";
        system(strCmd.c_str());
        cout << "removed old images..." << endl;
    }
}

void ImagesGenerator::createImageDirectory()
{
    // Structure which would store the metadata
    struct stat sb;
    if (stat(constants::IMAGES_LOCATION.c_str(), &sb) != 0)
    {
        cout << "Creating " + constants::IMAGES_LOCATION << endl;
        // Create Directory
        string strCmd = "cd / & mkdir " + constants::IMAGES_LOCATION;
        // System Call to Create Images Directory
        system(strCmd.c_str());
    }
}