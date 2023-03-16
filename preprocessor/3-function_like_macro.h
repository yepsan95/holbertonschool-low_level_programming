#ifndef ABS
#define ABS(x) x
#if ABS(x) < 0
#define ABS(x) (ABS(x) * -1)
#endif
