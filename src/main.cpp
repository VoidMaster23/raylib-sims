#include <raylib-cpp.hpp>

#include "walker.hpp"
#include "chartSim.hpp"

int main()
{
    // Initialization
    SetRandomSeed(time(NULL));
    int screenWidth = 800;
    int screenHeight = 450;
    section1::Walker walkie{screenWidth, screenHeight};
    section1::BarChartSim barChart{screenWidth, screenHeight};

    raylib::Color textColor(LIGHTGRAY);
    raylib::Window w(
        screenWidth, screenHeight, "Raylib C++ Starter Kit Example");

    // ClearBackground(RAYWHITE);
    SetTargetFPS(60);

    // Main game loop
    while (!w.ShouldClose()) // Detect window close button or ESC key
    {
        // Update
        // walkie.step();
        barChart.calculateFrequencies();

            // TODO: Update your variables here

            // Draw
            BeginDrawing();
        barChart.show();

        // walkie.show();

        EndDrawing();
    }

    return 0;
}