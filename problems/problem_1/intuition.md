Problem:

If we list all the natural numbers below 10 that are multiples of 3 or 5 we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all multiples of 3 or 5 below 1000.

Work (transcribed from paper):
<br>Obviously I can iterate n, mod by 3 or 5, then sum, but that's not fun.


My first thought is that there must be some sort of pattern that repeats among the multiples
whether n = 10, 20, 1000 or 100000....
<br>I think of this b/c we know that multiples repeat when you mod them so there are always patterns.


The first thing I'd do is to manually solve this problem for the first few `n`s like n={10, 20, 30, 40}
to find a pattern if there is any.
<br>    `n` is the "ceiling".
<br>    `k` is the set of multiples of 3 or 5 up to `n`.
<br>    `j` is the corresponding set to `k` denoting which multiple the number in `k` at the same idx of `j` belongs to.

    n = 10, k = {  3,  5,  6,  9}
            j = {  3,  5,  3,  3}
    n = 20, k = {  3,  5,  6,  9, 10, 12,   15,    18}
            j = {  3,  5,  3,  3, 5,   3, {3,5},    3}
    n = 30, k = {..., 18, 20, 21, 24, 25, 27}
            j = {       3,  5,  3,  3, 5,   3}
    n = 40, k = {..., 30, 33, 35, 36, 39} ... {40, 42, 45}...
            j = {   {3,5}, 3,  5,  3,  3, 5,   {3,5}, 3, 5}...


at this point i can see a clear pattern of the following:
    { 3, 5, 3, 3, 5, 3 } followed by a {3, 5} to mark the end of the pattern
or even {3, 5, 3} if you flatenned `j`, i.e. pop {...,{3, 5},...}

How is this useful?
