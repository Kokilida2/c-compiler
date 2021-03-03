#ifndef ASSEMBLER
#define ASSEMBLER


enum label_state {DATA, CODE, EXTERN, ENTRY}

struct word 
{
  unsigned int value:12;
};

struct label{
  char* name;
  enum label_state state;
  struct word address;
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






#endif // ASSEMBLER