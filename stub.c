/* Generate main header with gcc -I /usr/include/SDL -I /usr/include/GLES2 -E stub.c | grep -v '^#' > generated.h
#include <SDL.h>
#include <gl2.h>
