#pragma once

#include <random>

namespace utils
{

    class Random
    {
        std::default_random_engine engine;

    public:
        Random() : engine(time(NULL)) {}

        float gaussian(float mean, float stddev)
        {
            std::normal_distribution<float> d(mean, stddev);
            return d(engine);
        }
        float uniform(int a, int b)
        {
            std::uniform_int_distribution<int> d(a, b);
            return d(engine);
        }
    };
}