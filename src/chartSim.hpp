#pragma once

#include <random>
#include <iostream>

#include <raylib-cpp.hpp>

#include "randomUtils.hpp"

namespace section1
{
    class BarChartSim
    {
        utils::Random rand;
        std::array<int, 15> frequencies;
        int screenWidth, screenHeight;

    public:
        BarChartSim(int width, int height) :  screenWidth{width}, screenHeight{height}
        {
            frequencies.fill(0);
        }

        void show()
        {
            int width = screenWidth / frequencies.size();

            for (size_t i = 0; i < frequencies.size(); ++i)
            {
                DrawRectangle(i * width, screenHeight - frequencies[i], width - 1, frequencies[i], GRAY);
            }
        }

        void calculateFrequencies()
        {
            int value = rand.uniform(0, 14);

            std::cout << value << std::endl;

            frequencies[value] += 1;

        }
    };
}
