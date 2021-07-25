void setup() {
  DDRD = 0xFF; // PORT D OUT direction DAC Port
  DDRC = 0x04; // PORT C/3 OUT direction GATE Port
  DDRB = 0x01; // PORT B/1 OUT direction, Pow Supply of Amplifier is ON 0x01 \ OFF = 0x00
  PORTB = 0x01; // Pow Supply of Amplifier is ON
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
  PORTC = Reg00; // GATE is ON

  PORTD = Reg00; 
  //1MKS
  PORTD = Reg20; PORTD = Reg00; 
  PORTD = Reg28; PORTD = Reg00; 
  PORTD = Reg30; PORTD = Reg00; 
  PORTD = Reg38; PORTD = Reg00; 
  //2MKS
  PORTD = Reg40; PORTD = Reg00; 
  PORTD = Reg48; PORTD = Reg00; 
  PORTD = Reg50; PORTD = Reg00; 
  PORTD = Reg58; PORTD = Reg00; 
  //3MKS
  PORTD = Reg60; PORTD = Reg00; 
  PORTD = Reg68; PORTD = Reg00; 
  PORTD = Reg70; PORTD = Reg00; 
  PORTD = Reg80; PORTD = Reg00; 
  //4MKS
  PORTD = Reg90; PORTD = Reg00; 
  PORTD = RegA0; PORTD = Reg00; 
  PORTD = RegA8; PORTD = Reg00; 
  PORTD = RegB0; PORTD = Reg00; 
  //5MKS
  PORTD = RegB8; PORTD = Reg00; 
  PORTD = RegC0; PORTD = Reg00; 
  PORTD = RegC8; PORTD = Reg00; 
  PORTD = RegD0; PORTD = Reg00; 
  //6MKS
  PORTD = RegD8; PORTD = Reg00; 
  PORTD = RegE0; PORTD = Reg00;
  PORTD = RegFF; 
  PORTD = RegE0; PORTD = RegFF; 
  PORTD = RegD8; PORTD = RegFF; 
  //7MKS
  PORTD = RegD0; PORTD = RegFF; 
  PORTD = RegC8; PORTD = RegFF; 
  PORTD = RegC0; PORTD = RegFF; 
  PORTD = RegB8; PORTD = RegFF; 
  //8MKS
  PORTD = RegB0; PORTD = RegFF; 
  PORTD = RegA8; PORTD = RegFF; 
  PORTD = RegA0; PORTD = RegFF; 
  PORTD = Reg90; PORTD = RegFF; 
  //9MKS
  PORTD = Reg80; PORTD = RegFF; 
  PORTD = Reg70; PORTD = RegFF; 
  PORTD = Reg68; PORTD = RegFF; 
  PORTD = Reg60; PORTD = RegFF; 
  //10MKS
  PORTD = Reg58; PORTD = RegFF; 
  PORTD = Reg50; PORTD = RegFF; 
  PORTD = Reg48; PORTD = RegFF; 
  PORTD = Reg40; PORTD = RegFF; 
  //11MKS
  PORTD = Reg38; PORTD = RegFF; 
  PORTD = Reg30; PORTD = RegFF; 
  PORTD = Reg28; PORTD = RegFF; 
  PORTD = Reg20; PORTD = RegFF; 
  //12MKS
  PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg20; PORTD = Reg20; PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg28; PORTD = Reg28; PORTD = Reg00; PORTD = Reg00; 
  //13MKS
  PORTD = Reg30; PORTD = Reg30; PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg38; PORTD = Reg38; PORTD = Reg00; PORTD = Reg00; 
  //14MKS
  PORTD = Reg40; PORTD = Reg40; PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg48; PORTD = Reg48; PORTD = Reg00; PORTD = Reg00; 
  //15MKS
  PORTD = Reg50; PORTD = Reg50; PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg58; PORTD = Reg58; PORTD = Reg00; PORTD = Reg00; 
  //16MKS
  PORTD = Reg60; PORTD = Reg60; PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg68; PORTD = Reg68; PORTD = Reg00; PORTD = Reg00; 
  //17MKS
  PORTD = Reg70; PORTD = Reg70; PORTD = Reg00; PORTD = Reg00; 
  PORTD = Reg80; PORTD = Reg80; PORTD = Reg00; PORTD = Reg00; 
  //18MKS
  PORTD = Reg90; PORTD = Reg90; PORTD = Reg00; PORTD = Reg00; 
  PORTD = RegA0; PORTD = RegA0; PORTD = Reg00; PORTD = Reg00; 
  //19MKS
  PORTD = RegA8; PORTD = RegA8; PORTD = Reg00; PORTD = Reg00; 
  PORTD = RegB0; PORTD = RegB0; PORTD = Reg00; PORTD = Reg00; 
  //20MKS
  PORTD = RegB8; PORTD = RegB8; PORTD = Reg00; PORTD = Reg00; 
  PORTD = RegC0; PORTD = RegC0; PORTD = Reg00; PORTD = Reg00; 
  //21MKS
  PORTD = RegC8; PORTD = RegC8; PORTD = Reg00; PORTD = Reg00; 
  PORTD = RegD0; PORTD = RegD0; PORTD = Reg00; PORTD = Reg00; 
  //22MKS
  PORTD = RegD8; PORTD = RegD8; PORTD = Reg00; PORTD = Reg00; 
  PORTD = RegE0; PORTD = RegE0; PORTD = Reg00; PORTD = Reg00;
  //23MKS
  PORTD = RegFF; PORTD = RegFF; 
  PORTD = RegE0; PORTD = RegE0; PORTD = RegFF; PORTD = RegFF; 
  PORTD = RegD8; PORTD = RegD8; PORTD = RegFF; PORTD = RegFF; 
  //24MKS
  PORTD = RegD0; PORTD = RegD0; PORTD = RegFF; PORTD = RegFF; 
  PORTD = RegC8; PORTD = RegC8; PORTD = RegFF; PORTD = RegFF; 
  //25MKS
  PORTD = RegC0; PORTD = RegC0; PORTD = RegFF; PORTD = RegFF; 
  PORTD = RegB8; PORTD = RegB8; PORTD = RegFF; PORTD = RegFF; 
  //26MKS
  PORTD = RegB0; PORTD = RegB0; PORTD = RegFF; PORTD = RegFF; 
  PORTD = RegA8; PORTD = RegA8; PORTD = RegFF; PORTD = RegFF; 
  //27MKS
  PORTD = RegA0; PORTD = RegA0; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg90; PORTD = Reg90; PORTD = RegFF; PORTD = RegFF; 
  //28MKS
  PORTD = Reg80; PORTD = Reg80; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg70; PORTD = Reg70; PORTD = RegFF; PORTD = RegFF; 
  //29MKS
  PORTD = Reg68; PORTD = Reg68; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg60; PORTD = Reg60; PORTD = RegFF; PORTD = RegFF; 
  //30MKS
  PORTD = Reg58; PORTD = Reg58; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg50; PORTD = Reg50; PORTD = RegFF; PORTD = RegFF; 
  //31MKS
  PORTD = Reg48; PORTD = Reg48; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg40; PORTD = Reg40; PORTD = RegFF; PORTD = RegFF; 
  //32MKS
  PORTD = Reg38; PORTD = Reg38; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg30; PORTD = Reg30; PORTD = RegFF; PORTD = RegFF; 
  //33MKS
  PORTD = Reg28; PORTD = Reg28; PORTD = RegFF; PORTD = RegFF; 
  PORTD = Reg20; PORTD = Reg20; PORTD = RegFF; PORTD = RegFF; 
  //34MKS

  PORTD = Reg40; PORTD = Reg40; PORTD = RegC0; PORTD = RegC0; 
  PORTD = Reg48; PORTD = Reg48; PORTD = RegC0; PORTD = RegC0; 
  //35MKS
  PORTD = Reg50; PORTD = Reg50; PORTD = RegC0; PORTD = RegC0; 
  PORTD = Reg58; PORTD = Reg58; PORTD = RegC0; PORTD = RegC0; 
  //36MKS
  PORTD = Reg60; PORTD = Reg60; PORTD = RegC0; PORTD = RegC0; 
  PORTD = Reg68; PORTD = Reg68; PORTD = RegC0; PORTD = RegC0;  
  //37MKS
  PORTD = Reg70; PORTD = Reg70; PORTD = RegC0; PORTD = RegC0; 
  PORTD = Reg70; PORTD = Reg80; PORTD = RegC0; PORTD = RegC0; 
  //38MKS
  PORTD = Reg90; PORTD = Reg90; PORTD = RegC0; PORTD = RegC0; 
  PORTD = RegA0; PORTD = RegA0; PORTD = RegC0; PORTD = RegC0; 
  //39MKS
  PORTD = RegA8; PORTD = RegA8; PORTD = RegC0; PORTD = RegC0; 
  PORTD = RegB0; PORTD = RegB0; PORTD = RegC0; PORTD = RegC0; 
  //40MKS
  PORTD = RegB8; PORTD = RegB8; PORTD = Reg40; PORTD = Reg40; 
  PORTD = RegB0; PORTD = RegB0; PORTD = Reg40; PORTD = Reg40; 
  //41MKS
  PORTD = RegA8; PORTD = RegA8; PORTD = Reg40; PORTD = Reg40; 
  PORTD = RegA0; PORTD = RegA0; PORTD = Reg40; PORTD = Reg40; 
  //42MKS
  PORTD = Reg90; PORTD = Reg90; PORTD = Reg40; PORTD = Reg40; 
  PORTD = Reg80; PORTD = Reg80; PORTD = Reg40; PORTD = Reg40; 
  //43MKS
  PORTD = Reg70; PORTD = Reg70; PORTD = Reg40; PORTD = Reg40; 
  PORTD = Reg68; PORTD = Reg68; PORTD = Reg40; PORTD = Reg40; 
  //44MKS
  PORTD = Reg60; PORTD = Reg60; PORTD = Reg40; PORTD = Reg40; 
  PORTD = Reg58; PORTD = Reg58; PORTD = Reg40; PORTD = Reg40; 
  //45MKS
  PORTD = Reg50; PORTD = Reg50; PORTD = Reg40; PORTD = Reg40; 
  PORTD = Reg48; PORTD = Reg48; PORTD = Reg40; PORTD = Reg40; 
  

  PORTC = RegFF; // GATE is OFF
  PORTD = Reg80;
  PORTC = RegFF; PORTC = RegFF; PORTC = RegFF; PORTC = RegFF; PORTC = RegFF; PORTC = RegFF; PORTC = RegFF; PORTC = RegFF; 
}
