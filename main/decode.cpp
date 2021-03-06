#include "WatermarkDecoder.h"

using namespace std;
using namespace cv;

int main(int argc, const char *argv[]) {
    if( argc != 2 )
    {
     cout <<" Usage: decode <picture-file> \n";
     return -1;
    }

    try {
        WatermarkDecoder decoder(argv[1]);
        decoder.decode("img_decoded.bmp");
        cout << "Decoded image written as img_decoded.bmp\n";
    } catch (...) {
        return -1;
    }

    
}
