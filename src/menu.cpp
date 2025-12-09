#include "menu.h"
#include "config.h"
#include <iostream>

void Menu::handleInput()
{
    if(IsKeyPressed(KEY_DOWN))
    {
        ++selectedOption;
        selectedOption %= menuOptions.size();
    }
    else if (IsKeyPressed(KEY_UP)) 
    {
        --selectedOption;
        if(selectedOption == -1) selectedOption = numOptions - 1;
    }
    else if (IsKeyPressed(KEY_ENTER))
    {
        switch(selectedOption)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            CloseWindow();
            break;
        }
   }
}

void Menu::draw()
{
     DrawText("MIO GIOCO", window::width / 2 - MeasureText("MIO GIOCO", 39)/2, titleY, titleFontSize, textColor);
        for (int i = 0; i < numOptions; i++)
        {
            if (i == selectedOption)
            {
                DrawText(menuOptions[i].data(), window::width /2 - MeasureText(menuOptions[i].data(), optionFontSize)/2, firstOptionY + i*spacing, optionFontSize, selectedColor);
            }
            else
            {
                DrawText(menuOptions[i].data(), window::width /2 - MeasureText(menuOptions[i].data(), optionFontSize)/2, firstOptionY + i*spacing, optionFontSize, textColor);
            }
        }
}