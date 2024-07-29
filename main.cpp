// main.cpp
#include <iostream>
#include <cassert>
#include "colorcoder.h"
#include "colorcoder_test.h"

// Main function with test cases
int main() {
    
    // Original test cases
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    // Optionally print the reference manual
    /*
    std::string manual = TelCoColorCoder::GetReferenceManual();
    std::cout << manual;
    */

    return 0;
}
