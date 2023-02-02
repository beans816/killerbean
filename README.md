# killerbean 4k
Remote bash execution using c and system(): shreds and unlinks files using shred()
Killer bean is a deadly bean and __no information__ will come back to life afer files have been overwritten.
__READ THE CODE FIRST___ before you start using it and make alterations.

# Man Page exerpt:

       CAUTION: Note that shred relies on a very important assumption: that the file system overwrites data in place.  This is the traditional way
       to  do  things,	but  many  modern file system designs do not satisfy this assumption.  The following are examples of file systems on which
       shred is not effective, or is not guaranteed to be effective in all file system modes:

       * log-structured or journaled file systems, such as those supplied with AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)

       * file systems that write redundant data and carry on even if some writes fail, such as RAID-based file systems

       * file systems that make snapshots, such as Network Appliance's NFS server

       * file systems that cache in temporary locations, such as NFS version 3 clients

       * compressed file systems

       In the case of ext3 file systems, the above disclaimer applies (and shred is thus of limited  effectiveness)  only  in  data=journal  mode,
       which  journals file data in addition to just metadata.	In both the data=ordered (default) and data=writeback modes, shred works as usual.
       Ext3 journaling modes can be changed by adding the data=something option to  the  mount	options  for  a  particular  file  system  in  the
       /etc/fstab file, as documented in the mount man page (man mount).

       In  addition,  file system backups and remote mirrors may contain copies of the file that cannot be removed, and that will allow a shredded
       file to be recovered later.

*Won't exec without root priveledges*

# Securely remove files forever with shred() - it will be GONE FOREVER

How to use this:
Ubuntu: 

`sudo apt-get update --fix-missing`

`sudo apt install git`

`sudo apt upgrade git`

`sudo apt-get install libc6-dev`(Arch users ` sudo pamac install gcc`)


`git clone https://github.com/beans816/killerbean`

`cd killerbean`

`make killerbean` (or `gcc -o killerbean killerbean.c`)

`./killerbean`


