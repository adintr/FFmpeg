#include <SDL_events.h>
#include <stdint.h>
long check_SDL_PollEvent(void) { return (long) SDL_PollEvent; }
int main(void) { int ret = 0;
ret |= ((intptr_t)check_SDL_PollEvent) & 0xFFFF;
return ret; }