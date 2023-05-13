unsigned long t_debounce_1, t_debounce_2 = 0;
int dt = 500;

ISR(INT0_vect)
{
  // cod întrerupere externă
  unsigned long t_int = millis();
  if (t_int - t_debounce_1 > 300) {    
    t_debounce_1 = t_int;
    dt += 100;
  }
}

ISR(PCINT2_vect) {
  // cod întrerupere de tip pin change
  if ((PIND & (1 << PD4)) == 0) {
    // întrerupere generată de pinul PD4 / PCINT20

    unsigned long t_int = millis();
    if (t_int - t_debounce_2 > 300) {
      t_debounce_2 = t_int;
      if (dt > 100) {
         dt -= 100;
      }      
    }
  }
}

void setup_interrupts() {
  // buton 1: PD2 / INT0
  // buton 2: PD4 / PCINT20
  cli();

  // input
  DDRD &= ~(1 << PD2) & ~(1 << PD4);
  // input pullup
  PORTD |= (1 << PD2) | (1 << PD4);

  // configurare intreruperi
  // intreruperi externe
  EICRA |= (1 << ISC01);    // set INT0 to trigger on falling edge (1-0)
  // întreruperi de tip pin change (activare vector de întreruperi)
  PCICR |= (1 << PCIE2); // enable the pin change interrupt, set PCIE2 to enable PCMSK2 scan

  // activare intreruperi
  // intrerupere externa
  EIMSK |= (1 << INT0);     // Turns on INT0
  // întrerupere de tip pin change
  PCMSK2 |= (1 << PCINT20); // Turns on PCINT20 (PD4)

  sei();
}


void setup() {
  setup_interrupts();
  // test led
  DDRD |= (1 << PD7);
  PORTD &= ~(1 << PD7);
}

void loop() {  
  PORTD |= (1 << PD7);
  delay(dt);
  PORTD &= ~(1 << PD7);
  delay(dt);
}
