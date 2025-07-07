#pragma once

#include <raylib-cpp.hpp>

#include "randomUtils.hpp"

namespace section1
{
    class Walker
    {
        int x, y;
        utils::Random rand;

    public:
        Walker(int width, int height) : x{width / 2}, y{height / 2} {}

        void show()
        {
            // DrawPixel(x, y, GREEN);
            DrawCircle(x, y, 2.0, GREEN);
        }

        void step()
        {

            Vector2 mousePosition{GetMousePosition()};

            // int step_size{rand.uniform(0,100)};

            int choice_x = rand.uniform(-1, 2);
            int choice_y = rand.uniform(-1, 2);

            this->x += choice_x * 2;
            this->y += choice_y * 3;
        }
    };
}
