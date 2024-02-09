
- Solve it 
    - https://www.spoj.com/problems/GAMES/ (done) [link](https://www.ideone.com/ZDjcMA)
    - https://www.codechef.com/problems/ANUUND (done) [link](https://paste.ubuntu.com/p/5Dh8wCDKVr/)
# Task started from here
Tasks from [link](https://blog.shahjalalshohag.com/topic-list/?fbclid=IwAR0oShLpT5SMYR6DKRA27ua_gWOziRR4LXmjEuIK1cmxUpfvo7XHxm6h46Q)
After complete the below all problems and topics them start with [task 2](https://github.com/the-hyp0cr1t3/CC)

Below are few topics to start with and problems related to those topic.

They are very basic stuffs and you can learn all you need to know by just googling.

“When i will get some time I will try to update and give more details about the topics a newbie should cover.”

Try to do all the problems stated below if you are a beginner.

- PRIMES
- Prime Check ( O(log n) also possible read about miller-rabbin )
- Factorization
- Number of factors
- Sum of factors
- Generating Primes using sieve of eratosthenes
- Bounds on number of primes till N
- Euler’s totient function

**Practice Problems** :

- http://www.spoj.com/problems/NDIV/
- http://codeforces.com/problemset/problem/431/B
- http://www.spoj.com/problems/GAMES/
- http://www.spoj.com/problems/GCJ101BB/
- http://www.spoj.com/problems/GCJ1C09A/
- http://www.spoj.com/problems/MAIN72/
- http://www.spoj.com/problems/WINDVANE/
- http://www.spoj.com/problems/NDIV/
- http://www.spoj.com/problems/PTIME/
- http://www.spoj.com/problems/NDIVPHI/
- http://www.spoj.com/problems/NOSQ/
- http://www.spoj.com/problems/AFS/
- http://www.codechef.com/MAY13/problems/WITMATH/
- http://www.spoj.com/problems/CUBEFR/

Try as many as you can.

Other things that you can read meanwhile
- Euler Totient function and Euler's theorem [[ READ ]]
- Modulo function and its properties
- Miller-Rabin Algorithm[[ READ ]]
- Extended Euclid's Algorithm[[ READ ]]
- Keep exploring STL
- Prove running time of HCF is O(log n)
- Try sorting of structures
- Practice few problems on several Online Judges
- Try to do + - * operations on large numbers(<1000 digits) using char array (for learning implementation)
- Number of factors and sum of factors in sqrt(n) time ,Number of primes till N

Go through these tutorials (The listed problems might be tough but do read the tutorial)

- http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=primalityTesting
- http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=combinatorics
- http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=math_for_topcoders
- http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=primeNumbers
- https://community.topcoder.com/tc?module=Static&d1=tutorials&d2=primeNumbers

### Basic Number Theory  

- Modulo operations and Inverse modulo
- How to compute a ^ b % p in O(log b), where p is prime
- Find Nth fibonacci number modulo p [Read Matrix exponentiation]
- n! % p  ( what if we have lots of test cases and n<10^6 and P is fixed)
- ETF ( calculation / calculation using sieve / properties ) [[ read Euler's_totient_function]]
- Euler theorem , Fermat’s little theorem , Wilson theorem[[ READ ]]
- nCr % p (inverse modulo) ( read about extended euclid algorithm)
- (p-1)! % p  for prime p (read wilson’s theorem), Use of fermat theorem in Miller-Rabin ( Probabilistic ) ( miller-rabin.appspot.com )
- 64 Choose 32 < 10^19 we can precompute till herein a 2 dimensional array [Learn use of the recursive relation : (n+1)Cr = nCr + nC(r-1)]
- Number of ways to traverse in 2D matrix[Catalan Number] ( what if some places are blocked ? Hint : DP)
- a^b % c . Given Hcf(a,c) = 1 .And  what if Hcf(a,c) ! = 1.  [[ READ Chinese Remainder Theorem, not used much in competition]]
- Matrix Exponentiation
- solving linear recurrence using matrix exponentiation(like fibonacci)

Practice problems:

- http://www.spoj.com/problems/DCEPC11B
- http://www.codechef.com/MAY13/problems/FTRIP/
- http://www.spoj.com/problems/FIBOSUM/
- http://www.spoj.com/problems/POWPOW/
- http://www.spoj.com/problems/POWPOW2 [[ CRT ]]

### Power of BITS

- Numbers are stored as binary bits in the memory so bits manipulation are alway faster.
- Bitwise or operator    : |
- Bitwise and operator : &
- Bitwise xor operator  : ^
- Bitwise left shift         : <<
- Bitwise right shift      : >>
- Memset and its uses using function : sizeof()
- Bitmask and use of Bitmask in Dynamic Programming [[subset DP]]

Some cool Tricks

n = n * 2 :: n = n << 1
n = n /2  :: n = n >> 1
checking if n is power of 2 (1,2,4,8…) ::checking !(n & (n-1))
if x is max power of 2 dividing n, then x = (n & -n)
Total number of bits which are set in n = __builtin_popcount(n)
setting xth bit of n  :: n |= (1<<x)
checking if xth bit of n is set :: checking if  n&(1<<x) is non zero
Problem : You are given N numbers and a numbers S. Check if there exist some subset of the given numbers which sums equal to S .What if you are asked to compute the number of such subsets ?

Practice :
- http://www.spoj.com/problems/SPCO/
- http://codeforces.com/problemset/problem/114/B
- http://www.spoj.com/problems/CLEANRBT/
More will be added later
Read this for further knowledge

http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=bitManipulation

Binary  Search :  

Try this : http://codeforces.com/problemset/problem/431/D
Understand the concept of binary search. Both left_binary_search and right_binary_search. Try to implement it on your own. Look at others implementation.
sample implementation :

int l = 0, r = 10000,  key_val = SOME_VALUE, m;

while (r - l > 1){

m = (l+r) >> 1;
int val = some_non_decreasing_function(m);
if(val < key_val) l = m;
else r = m;
}

if  (some_non_decreasing_function(l) == key_val ) return l;
else return r;

// this can be modified in a variety of ways, as required in the problem

Practice Problems:

- http://www.spoj.com/problems/AGGRCOW/
- http://codeforces.com/problemset/problem/431/D [[Learn’t something new ?]]
- http://www.spoj.com/problems/PIE/
- http://www.spoj.com/problems/TETRA/
- http://www.spoj.com/problems/KOPC12A/

### The Beauty of Standard Template Library of C++

Vectors in one dimension and two dimension

http://www.codechef.com/MAY14/problems/CHEFBM
solve : http://www.codechef.com/MAY14/problems/COMPILER

Now use stacks to taste its beauty and solve the following problem too.

http://codeforces.com/problemset/problem/344/D
Queue

http://www.spoj.com/problems/DONALDO/  
Priority Queue

http://codeforces.com/gym/100247/problem/I [[First try without using Priority queue]]
Set
http://www.spoj.com/problems/FACEFRND/ [[First try without using set ]]
What if I tell you that apart from scanning the input this problem can be done in 2 lines ? Interesting ? Think!
Map
- http://www.codechef.com/MARCH13/problems/TOTR/
- http://codeforces.com/gym/100247/problem/C
- http://www.spoj.com/problems/SETSTACK/ [[map, set, set_intersection / union]]
SomePractice Problems Before you proceed further

- http://www.spoj.com/problems/DCEPC11B/
- http://www.spoj.com/problems/AGGRCOW/
- http://www.codechef.com/problems/CHEFBM
- http://www.codechef.com/JUNE13/problems/PERMUTE
- http://www.spoj.com/problems/KOPC12A/ (recommended)
- http://www.codechef.com/MAY13/problems/WITMATH/ (recommended)
- http://codeforces.com/problemset/problem/431/D (recommended)
- http://www.spoj.com/problems/SPCO/
- http://www.spoj.com/problems/FIBOSUM/
- http://www.spoj.com/problems/POWPOW/ (recommended)
- http://www.codechef.com/AUG13/problems/CNTSOLS/
- http://www.spoj.com/problems/IOPC_14F/
- http://www.spoj.com/problems/NDIVPHI/ (recommended)
- http://www.spoj.com/problems/AU12/ (easy)
- http://www.spoj.com/problems/ETF/ (easy)
- http://codeforces.com/problemset/problem/114/B (easy)
- http://www.spoj.com/problems/HISTOGRA/ [[Hint : use stacks]]
- http://www.spoj.com/problems/HOMO/
- http://www.spoj.com/problems/NGM2/
- http://www.spoj.com/problems/RENT/ [[ recommended ]]

### GRAPHS

Try the following problems :
Prime Path
Prayatna PR
Any Ideas ?

Def : Think graphs as a relation between node , related nodes are connected via edge.

How to store a graph ? ( space complexity )

Adjacency Matrix ( useful in dense graph) using 2-D array of bool/ints.
Adjacency List (useful in sparse graph) O(min(deg(v),deg(u))) using vector of ints.
You must know the following terminologies regarding Graphs :

Neighbours
Node
Edge
Degree of vertices
Directed Graph
Connected Graph
Undirected Graph
Connected components
Articulation Points
Articulation Bridges
Tree [[ connected graph with N nodes and N-1 edges]]

Leaves
Children
Parent
Ancestor
Rooted Tree
Binary Tree
K-ary Tree
Cycle in graph

Path
Walk
Directed Acyclic Graph [[ DAG ]]

Topological Sorting (Not very important, in my opinion)
Bipartite Graph ( Tree is an example of Bipartite Graph . Interesting Isn’t it.)

Breadth First Search/Traversal (BFS) [[ very important, master it as soon as possible]]

Application : Shortest path in unweighted graphs
Depth First Search/Traversal (DFS) [[very very important, master it as soon as possible]]

Infinitely many applications, just kidding :P (But Its true, Indeed !)
Now try the problems given at the beginning !

Practice Problems :
http://www.codechef.com/JUNE14/problems/DIGJUMP
http://www.spoj.com/problems/PRATA/
http://www.spoj.com/problems/ONEZERO/
http://www.spoj.com/problems/PPATH/
http://www.spoj.com/problems/PARADOX/
http://www.spoj.com/problems/HERDING/
http://www.spoj.com/problems/PT07Z/
http://www.spoj.com/problems/NICEBTRE/
http://www.spoj.com/problems/CERC07K/
http://www.spoj.com/problems/BUGLIFE/
http://www.spoj.com/problems/COMCB/
http://www.spoj.com/problems/NAKANJ/
http://www.codechef.com/IOPC2013/problems/IOPC13N/
http://www.codechef.com/IOPC2013/problems/IOPC13G/
http://www.codechef.com/IOPC2013/problems/IOPC13C
Problem : You are given a Graph. Find the number of connected components in the Graph.

Hint : DFS or BFS.

Problem : You are given a grid with few cells blocked and others open. You are given a cell , call is source, and another cell , call it dest. You can move from some cell u to some another cell v if cell v is open and it is adjacent to cell u. You have to find the shortest path from source to dest.  

Hint : Try to think the grid as a Graph and apply some shortest path algorithm. Which one ? You think !

Problem : You are given a Tree. You need to find two vertices u and v such that distance between them maximum. [[http://www.spoj.com/problems/PT07Z/]]

Hint : Try to do it in O(1) number of DFS or BFS !

GREEDY ALGORITHMS

Greedy Algorithms are one of the most intuitive algorithms. Whenever we see a problem we first try to apply some greedy strategy to get the answer(we humans are greedy, aren’t we :P ? ).

Read this tutorial for further insight or you can directly attempt the problems most of the greedy approaches are quite simple and easy to understand/formulate.But many times the proving part might be difficult. But you should always try to prove your greedy approach because most the times it happens that you later realise that you solution does not give the optimal answer.

http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=greedyAlg

They are generally used in optimization problems and there exists an optimal substructure to the problem and solutions are generally O(n log n) (sorting) or O(n) (single pass).

Problems List:

http://www.spoj.com/problems/BAISED/
http://www.spoj.com/problems/BALIFE/
http://www.spoj.com/problems/GCJ101BB/
http://www.codechef.com/problems/FGFS
http://www.codechef.com/problems/KNPSK
http://www.codechef.com/problems/LEMUSIC
http://www.spoj.com/problems/ARRANGE/
http://www.spoj.com/problems/FASHION/
Q)A thief breaks into a shop and finds there are N items weight of ith item is Wi and cost of ith item is Ci and thief has a bag of which can carry at most W units of weight. Obviously thief wants to have maximum profit . What strategy he should choose if :

Case 1: If he is allowed to take fractional part of items (like assume item to be a bag of rice and you can take whatever fraction of rice you want). [Hint :: greedy])

Case 2:If he cannot break the items in fractional parts. Will now greedy work ? Try to make some test cases for which greedy will fail.

Most of time when greedy fails its the problem can be solved by Dynamic Programming(DP).

DYNAMIC PROGRAMMING [[ DP ]]

In my view this is one the most important topic in competitive programming. The problems are simple and easy to code but hard to master. Practice as many DP problems as much possible.

You must go through this topcoder tutorial and you must try to solve all the problems listed below in this doc.

( These are basic problems and some with few variations that we feel one should know. You must practice other DP problems too)

Problems list:

http://www.spoj.com/problems/COINS/
Read about Maximum Sum Subarray [I dint find exact question on any online judge as its very very basic]
http://www.codechef.com/problems/DELISH
http://www.codechef.com/problems/KSUBSUM/
Q)Finding NCR [Using above discussed recursion in math section and DP]
https://projecteuler.net/problem=18
Q)Given a matrix filled with numbers.You are initially at upper left corner , you have to reach to the lower right corner.In each step you can either go right or down.When ever you go to a cell you points increase by value of that cell.What is the maximim possible points you can gain?
http://www.codechef.com/JUNE13/problems/LEMOUSE
http://www.spoj.com/problems/MAXWOODS/
http://www.spoj.com/problems/EDIST/
http://www.spoj.com/problems/ADFRUITS/
http://www.spoj.com/problems/IOIPALIN/
http://www.codechef.com/problems/PPTEST/
http://www.codechef.com/problems/MAXPR
http://www.codechef.com/problems/LEBALONS
http://www.codechef.com/problems/DBOY/
http://www.codechef.com/problems/HAREJUMP
For further advanced topics you can follow topcoder tutorials.

This also might be helpful introduction to competitive programming - Stanford.
