#include "raylib.h"
#include <array>
#include <string>

class Menu
{
public: 
    void handleInput();
    void draw();
    
private: 
    static constexpr Color textColor = WHITE;
    static constexpr Color selectedColor = PURPLE;
    int numOptions = 3;
    int selectedOption = 0;
    int titleFontSize = 40;
    int optionFontSize = 20;
    int titleY = 100;
    int firstOptionY = 200;
    int spacing = 40;
    const std::array<std::string, 3> menuOptions = {"Gioca","Impostazioni","Esci"};
};
