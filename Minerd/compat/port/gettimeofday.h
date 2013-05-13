#ifndef GETTIMEOFDAY_H
#define GETTIMEOFDAY_H

#include <windows.h>
#include <time.h>

int gettimeofday(struct timeval * tp, struct timezone * tzp);

#endif //GETTIMEOFDAY_H