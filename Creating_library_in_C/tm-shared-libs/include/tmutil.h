#ifndef  __TMUTIL__
#define  __TMUTIL__  TMUTIL

int swap_it(void *,void *,long unsigned int);
#define swap(e,f) swap_it(&e,&f,sizeof(e))

#endif
