#ifndef GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
#define GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H

#include <string>

class BitmapImage {
public:
    BitmapImage();

    ~BitmapImage();

    bool load(std::string name);
    bool save(std::string name);

    void resize(int newWidth, int newHeight);

private:
    int width, height;
    int *buffer;
    std::string name;
    char channels;
    char pixelDepth;
    bool saved;
};


#endif //GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
