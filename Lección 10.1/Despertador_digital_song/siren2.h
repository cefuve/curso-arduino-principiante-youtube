int tempo = 280;

int melody[] = {
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
  NOTE_A5,3, NOTE_F6,3, REST, 5,
};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;
int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;