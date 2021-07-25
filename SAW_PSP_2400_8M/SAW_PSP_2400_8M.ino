void setup() {
  DDRD = 0xFF; // PORT D OUT direction DAC Port
  DDRC = 0x0F; // PORT C/3 OUT direction GATE Port
  DDRB = 0x00; // PORT B/1 OUT direction, Pow Supply of Amplifier is ON 0x01 \ OFF = 0x00
  PORTC = 0x00; // GATE OFF = 0x00 \ GATE ON = 0x0F
  PORTD = 120; // DAC Port, min Vtune = 0x00/ max Vtune = 0xFF
  PORTC = 0x0F; // GATE is ON
  delay(1);
}

void loop() 
{
  //pause 1 ms
  //Amplifier is off
  for (int p = 0; p < 1500; p++)
  {
  PORTC = 0x00; // GATE is OFF
  }
  PORTC = 0x0F; // GATE is ON
  // Amplifier is on

  //Main cycle 
  for (int c = 0; c < 40; c++)
  {
    PORTC = 0x0F; // GATE is ON
    PORTC = 0x0F; // GATE is ON
    PORTC = 0x0F; // GATE is ON

    //gitter
    for (int g = 16; g < 241; g = g + 8)
    {
    PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; 
    PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; 
    }

    //SAW
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
    
    //Maximum frequensy and amplitude
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; 
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255;
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; 
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255;
    
    //SAW
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;
    
    //gitter
    for (int g = 16; g < 241; g = g + 8)
    {
      PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; 
      PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; 
    }
    
    //SAW
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
        
    //SAW gitter
    for (int n = 0; n < 256; n = n + 8)
    {
      PORTD = 0 + n; 
    }

    //SAW
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
    
    //Maximum frequensy and amplitude
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; 
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255;
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; 
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255; PORTD = 0; PORTD = 255; PORTD = 255;
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; PORTD = 0; PORTD = 240; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; 
    PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255; PORTD = 92; PORTD = 255;

    //SAW
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;

    //gitter
    for (int g = 16; g < 241; g = g + 8)
    {
      PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; 
      PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; PORTD = g + 15; PORTD = g - 15; 
    }
    //SAW
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
    
    //SAW gitter
    for (int m = 0; m < 256; m = m + 8)
    {
      PORTD = 255 - m; 
    }

    //SAW
    PORTD = 0x04; PORTD = 0x14; PORTD = 0x1C; PORTD = 0x24; PORTD = 0x2C; PORTD = 0x34; PORTD = 0x3C; PORTD = 0x44; PORTD = 0x4C;    
    PORTD = 0x54; PORTD = 0x5C; PORTD = 0x64; PORTD = 0x6C; PORTD = 0x74; PORTD = 0x7C; PORTD = 0x84; PORTD = 0x8C; PORTD = 0x94;    
    PORTD = 0x9C; PORTD = 0xA4; PORTD = 0xAC; PORTD = 0xB4; PORTD = 0xBC; PORTD = 0xC4; PORTD = 0xCC; PORTD = 0xD4; PORTD = 0xDC;    
    PORTD = 0xE4; PORTD = 0xEC; PORTD = 0xF4; PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xFF;
    PORTD = 0xFC; PORTD = 0xF4; PORTD = 0xEC; PORTD = 0xE4; PORTD = 0xDC; PORTD = 0xD4; PORTD = 0xCC; PORTD = 0xC4; PORTD = 0xBC;    
    PORTD = 0xB4; PORTD = 0xAC; PORTD = 0xA4; PORTD = 0x9C; PORTD = 0x94; PORTD = 0x8C; PORTD = 0x84; PORTD = 0x7C; PORTD = 0x74;    
    PORTD = 0x6C; PORTD = 0x64; PORTD = 0x5C; PORTD = 0x54; PORTD = 0x4C; PORTD = 0x44; PORTD = 0x3C; PORTD = 0x34; PORTD = 0x2C;    
    PORTD = 0x24; PORTD = 0x1C; PORTD = 0x14; PORTD = 0x0C; PORTD = 0x04;
    
    PORTC = 0x00; // GATE is OFF
    PORTC = 0x00; // GATE is OFF
    PORTC = 0x00; // GATE is OFF
    }
}