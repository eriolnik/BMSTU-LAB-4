// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <vector>

float mean(const std::vector<float> &v) {
    float sum = 0.;
    for (float value :  v) {
        sum += value;
  }
    return !v.empty() ? sum / v.size() : 0;

}
