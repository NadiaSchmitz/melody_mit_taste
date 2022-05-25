int musik_array[] = {262, 196, 196, 220, 196, 242, 262};
  int index = 0;
  int taste_zustand = 0;
  int letzter_taste_zustand = 0;

void setup() {
  
  pinMode(1, INPUT);

}

void loop() {
  
  taste_zustand = digitalRead(1);
  if (taste_zustand != letzter_taste_zustand) {
    if (taste_zustand == LOW) {
      tone(11, musik_array[index]);
      index++;

        if (index > 6) {
          index = 0;
        }
        
    } else {
      noTone(11);  
    } 
  }
  letzter_taste_zustand = taste_zustand;
}
