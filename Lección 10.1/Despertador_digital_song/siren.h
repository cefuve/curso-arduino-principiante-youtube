int tempo = 100;

int melody[] = {
  NOTE_G5,5, NOTE_C6,5, 
  NOTE_G5,5, NOTE_C6,5, 
  NOTE_G5,5, NOTE_C6,5, 
  NOTE_G5,5, NOTE_C6,5, 
  NOTE_G5,5, NOTE_C6,5, 
  NOTE_G5,5, NOTE_C6,5, 
};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;
int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;