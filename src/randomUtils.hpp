#pragma once

#include <random>

namespace utils
{

    class Random
    {
        std::default_random_engine engine;

    public:
        Random() : engine(time(NULL)) {}

        float gaussian(int mean, int stddev)
        {
            std::normal_distribution<float> d(mean, stddev);
            return static_cast<int>(d(engine));
        }
        float uniform(int a, int b)
        {
            std::uniform_int_distribution<int> d(a, b);
            return d(engine);
        }
    };
}