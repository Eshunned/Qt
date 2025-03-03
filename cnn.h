#ifndef CNN_H
#define CNN_H

#include <vector>

class CNN {
public:
    CNN();
    void trainModel(std::vector<std::vector<float>> &dataset);
    std::vector<float> predict(std::vector<float> &input);

private:
    std::vector<std::vector<std::vector<float>>> weights;
    std::vector<float> forward(std::vector<float> &input);
};

#endif // CNN_H
