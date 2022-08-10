# debugging-practice
Debugging Challenges

## Info
Most of these challenges are written in C/C++ 
and have been tested with GCC/G++/Clang.

You may see in the comments of a program some thing like this:
```c

// compile with: gcc bugx.c -Wformat-overflow=0

```
It is extremely important that you compile it with those exact arguments.

A program will be set up like this:

```C
#include includes
#define defines

// Type: Optional type here
// No. Bugs: xyz bugs
// Compile with: gcc wargames.c -fno-stack-protector

...
int main(){
  printf("Would you like to play a game?");
  ...
}
...
```