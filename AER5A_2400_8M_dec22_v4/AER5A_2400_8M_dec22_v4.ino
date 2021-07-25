void setup() {
  DDRD = 0xFF; // PORT D OUT direction DAC Port
  DDRC = 0x0F; // PORT C/3 OUT direction GATE Port
  DDRB = 0x00; // PORT B/1 OUT direction, Pow Supply of Amplifier is ON 0x01 \ OFF = 0x00
  PORTC = 0x00; // GATE OFF = 0x00 \ GATE ON = 0x0F
  PORTC = 0x0F; // GATE is ON
  cli(); // сбрасываем флаг прерывания
}

void loop() {

register byte Reg00 = 0x00;
register byte Reg20 = 0x23;
register byte Reg28 = 0x2C;
register byte Reg30 = 0x33;
register byte Reg38 = 0x3C;
register byte Reg40 = 0x43;
register byte Reg48 = 0x4C;
register byte Reg50 = 0x53;
register byte Reg58 = 0x5C;
register byte Reg60 = 0x63;
register byte Reg68 = 0x6C;
register byte Reg70 = 0x73;

register byte Reg80 = 0x80;
register byte Reg90 = 0x90;
register byte RegA0 = 0xA0;
register byte RegA8 = 0xA8;
register byte RegB0 = 0xB0;
register byte RegB8 = 0xB8;
register byte RegC0 = 0xC0;
register byte RegC8 = 0xC8;
register byte RegD0 = 0xD0;
register byte RegD8 = 0xD8;
register byte RegE0 = 0xE0;
register byte RegFF = 0xFF;

  cli();
  PORTC = RegFF; // GATE is ON

  PORTD = Reg00; 
  //1MKS
  PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; 
  PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; 
  PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; 
  PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; 
  PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; 
  PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; 
  PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; 
  PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; 
  PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; 
  PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; 
  PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; 
  PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; 
  PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; 
  PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; 
  PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; 
  PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; 
  PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; 
  PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; 
  PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; 
  PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; 
  PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; 
  PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; 
  PORTD = Reg70; PORTD = RegFF; PORTD = Reg70; PORTD = RegFF; PORTD = Reg70; PORTD = RegFF; PORTD = Reg70; PORTD = RegFF; 
  PORTD = Reg70; PORTD = RegFF; PORTD = Reg70; PORTD = RegFF; PORTD = Reg70; PORTD = RegFF; PORTD = Reg70; PORTD = RegFF; 
  PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; 
  PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; PORTD = Reg68; PORTD = RegE0; 
  PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; 
  PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; PORTD = Reg60; PORTD = RegD8; 
  PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; 
  PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; PORTD = Reg58; PORTD = RegD0; 
  PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; 
  PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; PORTD = Reg50; PORTD = RegC8; 
  PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; 
  PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; PORTD = Reg48; PORTD = RegC0; 
  PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; 
  PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; PORTD = Reg40; PORTD = RegB8; 
  PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; 
  PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; PORTD = Reg38; PORTD = RegB0; 
  PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; 
  PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; PORTD = Reg30; PORTD = RegA8; 
  PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; 
  PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; PORTD = Reg28; PORTD = RegA0; 
  PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; 
  PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; PORTD = Reg20; PORTD = Reg90; 
  PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; 
  PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; PORTD = Reg00; PORTD = Reg80; 
  
  PORTC = Reg00; // GATE is OFF
  PORTD = Reg80;
  PORTC = Reg00; PORTC = Reg00; PORTC = Reg00; PORTC = Reg00; PORTC = Reg00; PORTC = Reg00; PORTC = Reg00; PORTC = Reg00; //1 mkS
 
}
