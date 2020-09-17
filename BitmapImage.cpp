#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), pixelDepth(8), saved(false) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    channels = 3;
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        return true;
    } else if (fileExt == "png") {
        // load image file
        // decompress into buffer
        return true;
    }
    saved = false;
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

bool BitmapImage::save(std::string name) {
    if (!saved) {
        //... save image
    }
    saved = true;
    return true;
}

void BitmapImage::resize(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;
    if (width < 1)
        width = 1;
    if (height < 1)
        height = 1;
}
