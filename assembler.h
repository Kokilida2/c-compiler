<<<<<<< HEAD
#ifndef ASSEMBLER
#define ASSEMBLER

#endif // ASSMEBLER
=======

#define NAME_MAX 1000
enum label_state {DATA, CODE, EXTERN};
enum special_state {NONE, ENTRY, EXTERN};

struct label{
  char* name;
  enum label_state state;
  enum special_state special;
  word address;
};

struct opWord {
    char dest : 2;
    char src : 2;
    char func : 4;
    char opCode : 4;
};

union convert {
    struct opWord a;
    struct word b;
};


struct word 
{
  unsigned int value:12;
};
>>>>>>> 240d2ced659552ed4251ac1822f97d4b593aaa6a
