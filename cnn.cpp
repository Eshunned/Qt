#include "cnn.h"
#include <iostream>

CNN::CNN() {
    weights.resize(2, std::vector<std::vector<float>>(3, std::vector<float>(3, 0.1f)));
}

void CNN::trainModel(std::vector<std::vector<float>> &dataset) {
    for (int epoch = 0; epoch < 5; epoch++) {
        std::cout << "Epoch " << epoch + 1 << " Training..." << std::endl;
    }
}

std::vector<float> CNN::predict(std::vector<float> &input) {
    return forward(input);
}

std::vector<float> CNN::forward(std::vector<float> &input) {
    std::vector<float> output(input.size(), 0.5f);
    return output;
}
