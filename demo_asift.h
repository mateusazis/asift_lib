#pragma once

#include "Eigen/Dense"
#include <vector>
#include <utility>

std::vector<std::pair<Eigen::Vector2f, Eigen::Vector2f>> computeMyASIFT(std::vector<float> ipixels1, std::vector<float> ipixels2, int w1, int h1, int w2, int h2);