#include <raylib-cpp.hpp>

#include "walker.hpp"

int main()
{
    // Initialization
    SetRandomSeed(time(NULL));
    int screenWidth = 800;
    int screenHeight = 450;
    section1::Walker walkie{screenWidth, screenHeight};

    raylib::Color textColor(LIGHTGRAY);
    raylib::Window w(
        screenWidth, screenHeight, "Raylib C++ Starter Kit Example");
        
        // ClearBackground(RAYWHITE);
    SetTargetFPS(60);
    

    // Main game loop
    while (!w.ShouldClose()) // Detect window close button or ESC key
    {
        // Update
        walkie.step();

        // TODO: Update your variables here

        // Draw
        BeginDrawing();
        
        textColor.DrawText("Congrats! You created your first window!",
                           190, 200, 20);

        walkie.show();

        EndDrawing();
    }

    return 0;
}