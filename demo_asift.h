#pragma once

#include "Eigen/Dense"
#include <vector>
#include <utility>

std::vector<std::pair<Eigen::Vector2f, Eigen::Vector2f>> computeMyASIFT(const char* pngA, const char* pngB);