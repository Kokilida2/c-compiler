<<<<<<< HEAD
#ifndef ASSEMBLER
#define ASSEMBLER

#endif // ASSMEBLER
=======

#define NAME_MAX 1000
enum label_state {DATA, CODE, EXTERN, ENTRY}

struct label{
  char* name;
  enum label_state state;
  word address;
};

struct word 
{
  int value:12;
};
>>>>>>> 240d2ced659552ed4251ac1822f97d4b593aaa6a
