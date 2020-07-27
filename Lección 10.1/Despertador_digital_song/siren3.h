int tempo = 180;

int melody[] = {
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
  NOTE_A5,8, NOTE_F6,4, REST, 1,
};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;
int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;