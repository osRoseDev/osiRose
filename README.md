osiROSE Project Readme
=========================
This is an emulator for RoseOnline (pre-evo).
You can find everything about this project on the [forums](http://forum.dev-osrose.com/viewforum.php?f=22&sid=2412f221f4fecf90b46ed994534d6985)

The project is written in C++ and compiled using CodeBlocks and the MinGW compiler. 

### Project Developers
- FransK  (osrosedev@gmail.com)
- April 2017

**Supported Client:** SHO ( seven h )766_Setup.exe


This Server now works with the 766 client. Download from this Mega repository.[here](https://mega.nz/#F!8AkG3TzJ!6eoMc65tHmF_d_6nAvf8ZA)

Get the client connected to the servers on your local workstation using this command:
```
TRIGGERDETECT.EXE @TRIGGER_SOFT@ _server 127.0.0.1
```

## Revision Log
#### [REV 88.1] 
* Removed all clutter from the filesystem. This project is now clean.
#### [REV 88.1]
* Cleaned up some more.
#### [REV 88]
-[x] Fixed a client crash when returning to Char Select	

## BugList / To Do 
This will be tracked on Github see [here](https://github.com/osRoseDev/osiRose/issues)

## Client Issues
** Known issues**
- Sometimes the character name is not displayed. This has something todo with the graphics card Driver. I've noticed this on nVidia cards mostly. It is not a server/nor a client issue. Perhaps updating the graphics card driver will solve this problem.

=========================
=========================
# Database Setup
## Prerequisites:

1) Get the latest MySQL Server Community edition of MySQL Server Here.
2) Get the latest MySQL Workbench edition here.
3) Install the server and workbench. make a mental note of your SQL 'root' password.


## Configure the database:
1) Open the SQL Workbench and create a new schema. The schema is the name of the database; osiRose would be nice.
2) Press File | Open SQL Script
3) Browse to the \database folder and find osirose.sql
4) Execute it. Your database setup is now complete.

## Configure the server configuration files.
browse to the \binaries folder and find:
- worldserver.conf
- charserver.conf
- loginserver.conf

open each file and replace the values on these lines with your database, username and password.
If you're running on your own computer, the database IP should be 127.0.0.1
```
[DATABASE]
mysql_host=localhost
mysql_user=root
mysql_pass=@#sql
mysql_database=osirose
````

-you are now done with the database setup.
