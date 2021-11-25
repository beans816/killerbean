
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];
   //find . -exec echo {} \; doesnt work in a string due to syntax issues 
   //see https://stackoverflow.com/questions/2432525/how-to-use-in-a-string-in-c-sharp
   //below is the fix (thank you stack overflow)

   strcpy(command, "cd echotest && find . -exec shred {} -v -z -u \\;" );
   printf(command);
   system(command);

   return(0);
} 
