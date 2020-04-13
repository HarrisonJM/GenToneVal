#include <iostream>
#include <cmath>

const double R = 44100; // Sample rate
const double F = R / 256; // bytebeat freq of 1*t due to 8-bit truncation
const double V = 127; // Volume constant

uint8_t genTone(double toneHz, int t);

int main() {

    const double C = 261.625565; // Freq of middle C
    const double G = 392.00;

    for (int t = 0; t < 1000000; t++) {
//        std::cout << genTone(C, t);
        std::cout << genTone(G, t);
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

uint8_t genTone(double toneHz, int t) {

    return (std::sin(t * 2 * 3.14159265 / R * toneHz) + 1) * V;

}