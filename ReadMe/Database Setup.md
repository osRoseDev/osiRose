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
