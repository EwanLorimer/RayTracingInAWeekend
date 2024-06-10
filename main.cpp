#include <iostream>
#include "vec3.h"
void firstImage() {
    int numRows = 200;
    int numCols = 100;
    std::cout << "P3\n" << numRows << " " << numCols << "\n255\n";
    for (int j = numCols-1; j >= 0; j--) {
        for (int i = 0; i < numRows; i++) {
            vec3 col(float(i) / float(numRows), float(j) / float(numCols), 0.2);
            int red = int(col[0] * 255.99);
            int green = int(col[1] * 255.99);
            int blue = int(col[2] * 255.99);
            std::cout << red << " " << green << " " << blue << "\n";
        }
    }
}
void blackBackground() {
    int numCols = 200;
    int numRows = 300;
    std::cout <<"P3\n" << numRows << " " << numCols << "\n255\n";
    for (int j = numCols-1; j >= 0; j--) {
        for (int i = 0; i < numRows; i++) {
            std::cout << 0 << " " << 0 << " " << 0 << "\n";
        }
    }

}
int main() {
    firstImage();
    return 0;
}
