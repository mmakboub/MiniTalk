# MiniTalk
Minitalk is a compact data exchange program that challenges you to implement communication between clients and servers using UNIX signals.  As you embark on this coding journey, you'll create a seamless communication system where the server acknowledges messages and supports Unicode characters as a bonus feature.
Explore the world of UNIX signals and challenge yourself to create a robust communication system between clients and servers.
   ## Key Features

   - **Client-Server Communication:** Implement a client and server system where the server displays received strings quickly.
   - **UNIX Signals:** Utilize only SIGUSR1 and SIGUSR2 for communication between client and server.
   - **Error Handling:** Thoroughly handle errors to ensure the program doesn't quit unexpectedly, and no memory leaks occur.
   - **Bonus Features:** Acknowledge every received message and add support for Unicode characters.
  
## Table of Contents

- [Common Instructions](#common-instructions)
- [Project Instructions](#project-instructions)
- [Mandatory Part](#mandatory-part)
- [Bonus Part](#bonus-part)
- [Submission and Peer-evaluation](#submission-and-peer-evaluation)

## Common Instructions

- Your project must be written in C.
- Adhere to the Norm, including bonus files/functions.
- Ensure functions do not quit unexpectedly; otherwise, it will be considered non-functional.
- Free all heap-allocated memory space; no memory leaks tolerated.
- Submit a Makefile that compiles source files with flags -Wall, -Wextra, and -Werror.
- Include rules $(NAME), all, clean, fclean, and re in your Makefile.
- For bonuses, add a bonus rule to your Makefile and separate bonus files (_bonus.{c/h} if not specified otherwise).
- If using libft, copy its sources and Makefile into a 'libft' folder.
- Create test programs for your project for testing purposes during defense.

## Project Instructions

- Name your executable files 'client' and 'server.'
- Use a Makefile that compiles source files without relinking.
- You can use your libft.
- Handle errors thoroughly; the program should not quit unexpectedly.
- No memory leaks allowed.
- One global variable per program is allowed; justify their use.
- Use the following functions for the mandatory part:
  - write
  - ft_printf (or equivalent)
  - signal
  - sigemptyset
  - sigaddset
  - sigaction
  - kill
  - getpid
  - malloc
  - free
  - pause
  - sleep
  - usleep
  - exit

## Mandatory Part

Create a communication program with a client and server:
- Start the server first, printing its PID.
- The client takes the server PID and a string to send.
- The client sends the string to the server.
- The server displays the received string quickly.
- The server should handle multiple clients without restarting.
- Communication between client and server is done only using UNIX signals (SIGUSR1 and SIGUSR2).

## Bonus Part

Bonus List:
- The server acknowledges every message received by sending a signal back to the client.
- Unicode characters support.
