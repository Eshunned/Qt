#include "dataset.h"
#include <cstdlib>

Dataset::Dataset() {}

std::vector<std::vector<float>> Dataset::loadDataset() {
    return {{0.1f, 0.2f, 0.3f}, {0.4f, 0.5f, 0.6f}};
}

std::vector<float> Dataset::getSample() {
    return {0.1f, 0.2f, 0.3f};
}
