#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)

// Function to calculate the size of a grayscale BMP image
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
   // Each pixel in a grayscale image uses 1 byte
   // Calculate the total size of the image in bytes
    return w * h;
}


