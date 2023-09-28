#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);

//    DrawLine(-320, 0, 319, 0, kColorGray);
//    DrawLine(0, -240, 0, 239, kColorGray);

//    "Japan"
//    FillRect(-300, -200, 600, 400, kColorWhite);
//    FillCircle(0, 0, 120, kColorRed);
    
//    "Italy"
//    FillRect(-300, -200, 200, 400, kColorGreen);
//    FillRect(-100, -200, 200, 400, kColorWhite);
//    FillRect(100, -200, 200, 400, kColorRed);
    
//    "Finland"
//    FillRect(-300, -200, 600, 400, kColorWhite);
//    FillRect(-300, -30, 600, 80, kColorBlue);
//    FillRect(-100, -200, 80, 400, kColorBlue);
    
//    "Seychelles"
    FillRect(-300, -200, 600, 400, kColorRed);
    FillTriangle(-300, -200, -300, 200, -140, 200, kColorBlue);
    FillTriangle(-300, -200, -140, 200, 70, 200, kColorYellow);
    FillTriangle(-300, -200, 300, 80, 300, -70, kColorWhite);
    FillTriangle(-300, -200, 300, -70, 300, -200, kColorGreen);
    
//    "Czech"
//    FillRect(-300, -200, 600, 200, kColorRed);
//    FillRect(-300, 0, 600, 200, kColorWhite);
//    FillTriangle(-300, -200, -300, 200, -20, 0, kColorBlue);
    
}

