<------------------------------How To Compile and Run The Source Code--------------------------->

Open a UNIX shell window or command prompt if linux is nstalled (windows and macs)
Compile the ``.c'' file containing the source code with a command such as
gcc -Wall -g -c fibonacci.c 
Do same for other two
The -c in the command is important--it tells C to produce an object file called (in this case) ``fibonacci.o''. The -Wall part is optional but is strongly encouraged--it tells C to produce all possible warning messages. A warning message will usually lead you to a bug in your program. The -g tells the compiler to include information needed by the debugger.

Link the ``.o'' file to produce an executable with a command such as
gcc -o fibo fibonacci.o -lm
The -o hello in the command is important--it tells C what to name the executable. The -lm part tells C to link in the math libraries. If your program doesn't use any of the match functions from ``math.h'', you can leave this part out.

Run the executable in the usual way.
If your entire program is contained within a single file, you can do the compilation and linking in one step by entering the command

gcc -Wall -g -o fibo fibonacci.c -lm

The Compile This File... option of Emacs' Compile menu (or equivalently, M-x compile) is a handy feature which can also be used when your entire program is contained with one file. 

<-------------------------------------FILE1---------------------------------------------->

-->the fibonacci.c contains algorithm for a iterative relation.

<---------------------pros-------------------->

-->Its time and space complexity is O(n), which is good. 
-->it is less prone to stack overflow.

<---------------------cons-------------------->

-->it has code complexity and difficult to read.

<-------------------------------------FILE2----------------------------------------------->

-->The backsubstitution.c file contains an algorithm that make use of memoization.

<---------------------pros-------------------->

-->The algorithm reduces computation redundancy as a result, reduces time complexity.
-->The big O notation by Time t =>t(n) = O(n)+O(n)=O(2n) =O(n) //constants are rounded to 1 or 0, hence time complexity is good.
-->It is self optimizing with memoization.

<---------------------cons-------------------->

-->The space complexity of this algorithm is not good.

<-------------------------------------FILE3---------------------------------------------->

-->The recursive.c contains algorithm for a recursive relation.

<---------------------pros-------------------->

-->code is highly reusable.
-->it is highly used to solve problems that have sub problems or need to be decomposed. 
-->The algorithm's got simplicity and readability
-->Time complexity is O(n) which is fairly good.
<---------------------cons-------------------->

-->Due to high stack manipulation, there is tendency of stack overflow if not written or optimized well.
-->There is also performance overhead as a result of function calls and call stack maintenance, this consumes memory usage, meaning space complexity is O(n).
