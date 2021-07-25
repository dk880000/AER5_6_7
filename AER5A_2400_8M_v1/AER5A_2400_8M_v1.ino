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
  //Main cycle 
  for (int c = 0; c < 127; c = c + 4)
  {
    PORTC = 0x0F; // GATE is ON
    
    //Maximum frequensy and amplitude
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    //PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c;  
    c = c + 4;
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    //PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c;  
    c = c + 4;
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    //PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c;  
    c = c + 4;
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; 
    //PORTD = 0 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 0 + c;PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c; PORTD = 128 + c; PORTD = 0 + c; PORTD = 128 + c;  
    
    PORTD = c;  
    PORTC = 0x00; // GATE is OFF
    }
}
