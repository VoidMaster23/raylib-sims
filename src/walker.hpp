#pragma once

#include <raylib-cpp.hpp>

namespace section1
{
    class Walker
    {
        int x, y;

    public:
        Walker(int width, int height) : x{width / 2}, y{height / 2} {}

        void show()
        {
            // DrawPixel(x, y, GREEN);
            DrawCircle(x, y, 2.0, GREEN);
        }

        void step()
        {
            int choice_x = GetRandomValue(-1, 1);
            int choice_y = GetRandomValue(-1, 1);

            this->x += choice_x*2;
            this->y += choice_y*3;
        }
    };
}
