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
