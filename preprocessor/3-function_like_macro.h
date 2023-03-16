#ifndef ABS
#define ABS(x) x
#endif
#if ABS(x) < 0
#define ABS(x) (ABS(x) * -1)
#endif
