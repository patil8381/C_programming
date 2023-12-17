#ifndef  __TMUI__
#define  __TMUI__  TMUI

typedef enum __YES_NO{YES,NO}YES_NO;

void wait(const char *message);

YES_NO confirm(const char *message);

#endif
