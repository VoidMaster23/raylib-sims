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

    class GaussianSim {
        utils::Random rand;
        int x, y;

        public:

        GaussianSim(int width, int height) :  x{width/2}, y{height/2} {}

        void show() {
            DrawCircle(x, y, 20, Fade(GRAY, 0.25f));
        }

        void calculatePosition() {
            x = static_cast<int>(rand.gaussian(320.0f, 120.0f));
        }
    };
}
