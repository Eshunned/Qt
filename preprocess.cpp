#include "preprocess.h"
#include <algorithm>

std::vector<float> Preprocess::normalize(std::vector<float> &data) {
    float max_val = *std::max_element(data.begin(), data.end());
    for (auto &val : data) {
        val /= max_val;
    }
    return data;
}
