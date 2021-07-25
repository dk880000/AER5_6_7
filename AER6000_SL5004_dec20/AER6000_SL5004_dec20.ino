void setup() {
  DDRD = 0xFF; // PORT D OUT direction DAC Port
  DDRC = 0x04; // PORT C/3 OUT direction GATE Port
  DDRB = 0x01; // PORT B/1 OUT direction, Pow Supply of Amplifier is ON 0x01 \ OFF = 0x00
  PORTC = 0x04; // GATE OFF = 0x04 \ GATE ON = 0x00
  PORTD = 120; // DAC Port, min Vtune = 0x00/ max Vtune = 0xFF
  //PORTC = 0x00; // GATE is ON
  PORTB = 0x01; // Pow Supply of Amplifier is ON
  delay(5);
  PORTC = 0x00; // GATE is ON
}

void loop() 
{
/*1*/  
    PORTD = 0x04;
    PORTD = 0x14;
    PORTD = 0x1C;
    PORTD = 0x24;    
    PORTD = 0x2C;    
    PORTD = 0x34;    
    PORTD = 0x3C;    
    PORTD = 0x44;    
    PORTD = 0x4C;    
    PORTD = 0x54;    
    PORTD = 0x5C;    
    PORTD = 0x64;    
    PORTD = 0x6C;    
    PORTD = 0x74;    
    PORTD = 0x7C;    
    PORTD = 0x84;    
    PORTD = 0x8C;    
    PORTD = 0x94;    
    PORTD = 0x9C;    
    PORTD = 0xA4;    
    PORTD = 0xAC;    
    PORTD = 0xB4;    
    PORTD = 0xBC;
    PORTD = 0xC4;    
    PORTD = 0xCC;    
    PORTD = 0xD4;    
    PORTD = 0xDC;    
    PORTD = 0xE4;    
    PORTD = 0xEC;    
    PORTD = 0xF4;
    PORTD = 0xFC;    
    PORTD = 0xF4;
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xFC;    
    PORTD = 0xF4;    
    PORTD = 0xEC;    
    PORTD = 0xE4;    
    PORTD = 0xDC;    
    PORTD = 0xD4;    
    PORTD = 0xCC;    
    PORTD = 0xC4;    
    PORTD = 0xBC;    
    PORTD = 0xB4;    
    PORTD = 0xAC;    
    PORTD = 0xA4;    
    PORTD = 0x9C;    
    PORTD = 0x94;    
    PORTD = 0x8C;    
    PORTD = 0x84;    
    PORTD = 0x7C;    
    PORTD = 0x74;    
    PORTD = 0x6C;    
    PORTD = 0x64;    
    PORTD = 0x5C;    
    PORTD = 0x54;    
    PORTD = 0x4C;    
    PORTD = 0x44;    
    PORTD = 0x3C;    
    PORTD = 0x34;    
    PORTD = 0x2C;    
    PORTD = 0x24;    
    PORTD = 0x1C;    
    PORTD = 0x14;    
    PORTD = 0x0C;    
    PORTD = 0x04;
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*2*/
PORTD = 0x04;
    PORTD = 0x14;
    PORTD = 0x1C;
    PORTD = 0x24;    
    PORTD = 0x2C;    
    PORTD = 0x34;    
    PORTD = 0x3C;    
    PORTD = 0x44;    
    PORTD = 0x4C;    
    PORTD = 0x54;    
    PORTD = 0x5C;    
    PORTD = 0x64;    
    PORTD = 0x6C;    
    PORTD = 0x74;    
    PORTD = 0x7C;    
    PORTD = 0x84;    
    PORTD = 0x8C;    
    PORTD = 0x94;    
    PORTD = 0x9C;    
    PORTD = 0xA4;    
    PORTD = 0xAC;    
    PORTD = 0xB4;    
    PORTD = 0xBC;
    PORTD = 0xC4;    
    PORTD = 0xCC;    
    PORTD = 0xD4;    
    PORTD = 0xDC;    
    PORTD = 0xE4;    
    PORTD = 0xEC;    
    PORTD = 0xF4;
    PORTD = 0xFC;    
    PORTD = 0xF4;
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xFC;    
    PORTD = 0xF4;    
    PORTD = 0xEC;    
    PORTD = 0xE4;    
    PORTD = 0xDC;    
    PORTD = 0xD4;    
    PORTD = 0xCC;    
    PORTD = 0xC4;    
    PORTD = 0xBC;    
    PORTD = 0xB4;    
    PORTD = 0xAC;    
    PORTD = 0xA4;    
    PORTD = 0x9C;    
    PORTD = 0x94;    
    PORTD = 0x8C;    
    PORTD = 0x84;    
    PORTD = 0x7C;    
    PORTD = 0x74;    
    PORTD = 0x6C;    
    PORTD = 0x64;    
    PORTD = 0x5C;    
    PORTD = 0x54;    
    PORTD = 0x4C;    
    PORTD = 0x44;    
    PORTD = 0x3C;    
    PORTD = 0x34;    
    PORTD = 0x2C;    
    PORTD = 0x24;    
    PORTD = 0x1C;    
    PORTD = 0x14;    
    PORTD = 0x0C;    
    PORTD = 0x04;
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*3*/  
PORTD = 0x04;
    PORTD = 0x14;
    PORTD = 0x1C;
    PORTD = 0x24;    
    PORTD = 0x2C;    
    PORTD = 0x34;    
    PORTD = 0x3C;    
    PORTD = 0x44;    
    PORTD = 0x4C;    
    PORTD = 0x54;    
    PORTD = 0x5C;    
    PORTD = 0x64;    
    PORTD = 0x6C;    
    PORTD = 0x74;    
    PORTD = 0x7C;    
    PORTD = 0x84;    
    PORTD = 0x8C;    
    PORTD = 0x94;    
    PORTD = 0x9C;    
    PORTD = 0xA4;    
    PORTD = 0xAC;    
    PORTD = 0xB4;    
    PORTD = 0xBC;
    PORTD = 0xC4;    
    PORTD = 0xCC;    
    PORTD = 0xD4;    
    PORTD = 0xDC;    
    PORTD = 0xE4;    
    PORTD = 0xEC;    
    PORTD = 0xF4;
    PORTD = 0xFC;    
    PORTD = 0xF4;
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xFC;    
    PORTD = 0xF4;    
    PORTD = 0xEC;    
    PORTD = 0xE4;    
    PORTD = 0xDC;    
    PORTD = 0xD4;    
    PORTD = 0xCC;    
    PORTD = 0xC4;    
    PORTD = 0xBC;    
    PORTD = 0xB4;    
    PORTD = 0xAC;    
    PORTD = 0xA4;    
    PORTD = 0x9C;    
    PORTD = 0x94;    
    PORTD = 0x8C;    
    PORTD = 0x84;    
    PORTD = 0x7C;    
    PORTD = 0x74;    
    PORTD = 0x6C;    
    PORTD = 0x64;    
    PORTD = 0x5C;    
    PORTD = 0x54;    
    PORTD = 0x4C;    
    PORTD = 0x44;    
    PORTD = 0x3C;    
    PORTD = 0x34;    
    PORTD = 0x2C;    
    PORTD = 0x24;    
    PORTD = 0x1C;    
    PORTD = 0x14;    
    PORTD = 0x0C;    
    PORTD = 0x04;
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*4*/  
PORTD = 0x04;
    PORTD = 0x14;
    PORTD = 0x1C;
    PORTD = 0x24;    
    PORTD = 0x2C;    
    PORTD = 0x34;    
    PORTD = 0x3C;    
    PORTD = 0x44;    
    PORTD = 0x4C;    
    PORTD = 0x54;    
    PORTD = 0x5C;    
    PORTD = 0x64;    
    PORTD = 0x6C;    
    PORTD = 0x74;    
    PORTD = 0x7C;    
    PORTD = 0x84;    
    PORTD = 0x8C;    
    PORTD = 0x94;    
    PORTD = 0x9C;    
    PORTD = 0xA4;    
    PORTD = 0xAC;    
    PORTD = 0xB4;    
    PORTD = 0xBC;
    PORTD = 0xC4;    
    PORTD = 0xCC;    
    PORTD = 0xD4;    
    PORTD = 0xDC;    
    PORTD = 0xE4;    
    PORTD = 0xEC;    
    PORTD = 0xF4;
    PORTD = 0xFC;    
    PORTD = 0xF4;
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xFC;    
    PORTD = 0xF4;    
    PORTD = 0xEC;    
    PORTD = 0xE4;    
    PORTD = 0xDC;    
    PORTD = 0xD4;    
    PORTD = 0xCC;    
    PORTD = 0xC4;    
    PORTD = 0xBC;    
    PORTD = 0xB4;    
    PORTD = 0xAC;    
    PORTD = 0xA4;    
    PORTD = 0x9C;    
    PORTD = 0x94;    
    PORTD = 0x8C;    
    PORTD = 0x84;    
    PORTD = 0x7C;    
    PORTD = 0x74;    
    PORTD = 0x6C;    
    PORTD = 0x64;    
    PORTD = 0x5C;    
    PORTD = 0x54;    
    PORTD = 0x4C;    
    PORTD = 0x44;    
    PORTD = 0x3C;    
    PORTD = 0x34;    
    PORTD = 0x2C;    
    PORTD = 0x24;    
    PORTD = 0x1C;    
    PORTD = 0x14;    
    PORTD = 0x0C;    
    PORTD = 0x04;
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*5*/  
PORTD = 0x04;
    PORTD = 0x14;
    PORTD = 0x1C;
    PORTD = 0x24;    
    PORTD = 0x2C;    
    PORTD = 0x34;    
    PORTD = 0x3C;    
    PORTD = 0x44;    
    PORTD = 0x4C;    
    PORTD = 0x54;    
    PORTD = 0x5C;    
    PORTD = 0x64;    
    PORTD = 0x6C;    
    PORTD = 0x74;    
    PORTD = 0x7C;    
    PORTD = 0x84;    
    PORTD = 0x8C;    
    PORTD = 0x94;    
    PORTD = 0x9C;    
    PORTD = 0xA4;    
    PORTD = 0xAC;    
    PORTD = 0xB4;    
    PORTD = 0xBC;
    PORTD = 0xC4;    
    PORTD = 0xCC;    
    PORTD = 0xD4;    
    PORTD = 0xDC;    
    PORTD = 0xE4;    
    PORTD = 0xEC;    
    PORTD = 0xF4;
    PORTD = 0xFC;    
    PORTD = 0xF4;
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xFC;    
    PORTD = 0xF4;    
    PORTD = 0xEC;    
    PORTD = 0xE4;    
    PORTD = 0xDC;    
    PORTD = 0xD4;    
    PORTD = 0xCC;    
    PORTD = 0xC4;    
    PORTD = 0xBC;    
    PORTD = 0xB4;    
    PORTD = 0xAC;    
    PORTD = 0xA4;    
    PORTD = 0x9C;    
    PORTD = 0x94;    
    PORTD = 0x8C;    
    PORTD = 0x84;    
    PORTD = 0x7C;    
    PORTD = 0x74;    
    PORTD = 0x6C;    
    PORTD = 0x64;    
    PORTD = 0x5C;    
    PORTD = 0x54;    
    PORTD = 0x4C;    
    PORTD = 0x44;    
    PORTD = 0x3C;    
    PORTD = 0x34;    
    PORTD = 0x2C;    
    PORTD = 0x24;    
    PORTD = 0x1C;    
    PORTD = 0x14;    
    PORTD = 0x0C;    
    PORTD = 0x04;
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    



/*1*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*2*/
PORTD = 0x04;


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*3*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


      
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*4*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

   
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*5*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    





    PORTD = 0x00;    
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;

    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;

    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;






    

    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
   

/*2*/
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*3*/  


      PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*4*/  


     PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
    

    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
   

/*2*/
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*3*/  


      PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*4*/  


     PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;


    
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
   

/*2*/
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*3*/  


      PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*4*/  


     PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;







/*1*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*2*/
PORTD = 0x04;


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*3*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


      
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*4*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

   
    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
/*5*/  


    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;


    
    PORTD = 0x24;   
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;

    PORTD = 0x04;
    PORTD = 0x24;    
    PORTD = 0x44;    
    PORTD = 0x64;    
    PORTD = 0x84;    
    PORTD = 0xA4;    
    PORTD = 0xC4;    
    PORTD = 0xE4;    
    PORTD = 0xFF;

    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    

        






    PORTD = 0x00;    
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;

    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;

    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;






    

    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
   

/*2*/
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*3*/  


      PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*4*/  


     PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;




    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
   

/*2*/
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*3*/  


      PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*4*/  


     PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;


    
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
   

/*2*/
    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*3*/  


      PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
/*4*/  


    PORTD = 0xFF;
    PORTD = 0xE4;    
    PORTD = 0xC4;
    PORTD = 0xA4;
    PORTD = 0x84;
    PORTD = 0x64;
    PORTD = 0x44;
    PORTD = 0x24;
    PORTD = 0x04;
    PORTD = 0x00;
   
    PORTD = 0x04;
    PORTD = 0x24;
    PORTD = 0x44;
    PORTD = 0x64;
    PORTD = 0x84;
    PORTD = 0xA4;
    PORTD = 0xC4;
    PORTD = 0xE4;
    

   
    PORTD = 0xFF;    
    PORTD = 0xF0;
    PORTD = 0xE0;
    PORTD = 0xD0;
    PORTD = 0xC0;
    PORTD = 0xB0;
    PORTD = 0xA0;
    PORTD = 0x90;
    PORTD = 0x80;    
    PORTD = 0x70;
    PORTD = 0x60;
    PORTD = 0x50;
    PORTD = 0x40;
    PORTD = 0x30;
    PORTD = 0x20;
    PORTD = 0x10;
    PORTD = 0x00;

    PORTD = 0x10;
    PORTD = 0x20;
    PORTD = 0x30;
    PORTD = 0x40;    
    PORTD = 0x50;
    PORTD = 0x60;    
    PORTD = 0x70;
    PORTD = 0x80;    
    PORTD = 0x90;
    PORTD = 0xA0;    
    PORTD = 0xB0;
    PORTD = 0xC0;    
    PORTD = 0xD0;
    PORTD = 0xE0;    
    PORTD = 0xF0;
    
    PORTD = 0xE0;    
    PORTD = 0xB0;    
    PORTD = 0x80;
    PORTD = 0x40;
    PORTD = 0x00;

    PORTD = 0x40;    
    PORTD = 0x80;    
    PORTD = 0xB0;
    PORTD = 0xF0;
}
