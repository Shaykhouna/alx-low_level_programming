THIS IS THE README FILE
this file contain the short explanation of the differents program

You should not remove the path before the name of the program
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 0-whatsmyname.c
    
1. Silence is argument carried out by other means
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a program that prints the number of arguments passed into it.

Your program should print a number, followed by a new line
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 1-args.c
    
2. The best argument against democracy is a five-minute conversation with the average voter
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a program that prints all arguments it receives.

All arguments should be printed, including the first one
Only print one argument per line, ending with a new line
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 2-args.c
    
3. Neither irony nor sarcasm is argument
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a program that multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new 
