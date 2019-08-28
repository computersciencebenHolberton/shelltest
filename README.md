# Building the simple shell by Moscovics and Quinones

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

# Building a simple shell that includes the basic functionality of a traditional Unix command line user 
 
 That includes functions access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write. 
 
 - All the files will be compiled on Ubuntu 14.04 LTS
 - Using gcc -Wall -Werror -Wextra -pedantic *.c -o hsh to compile
 - All your files should end with a new line
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 

![](https://en.opensuse.org/images/e/e2/Flow1.jpg)

# The shell has 4 very important rolls 

* It should be able to read information.
* It should be able to interpret the information given.
* It should be able to execute the command. 
* It should be able to free up used memory and shut down. 

## Output of error with sh 
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

## Output of error with hsh
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Compilation
Shell will be compiled this way:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Testing 
shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
but also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Fetures
* uses the PATH
* implements builtins
* handels command line arg
* handels comments
* handels ;
* a getline funtion
* handels && || functions
* aliases

## Builtins
* exit
* env
* setenv
* unsetenv
* cd 
* help
* history 

## example of shell use 
```

```
