# Estimating Efficiency

By calculating the time complexity of an algorithm, you can check if it will be quick
enough to be an acceptable solution to a given problem.

Modern computers can compute hundreds of millions of operations in a second.

## Example

If you have an input of $n=10^5$, and a solution with $O(n^2)$ time complexity, then
the algorithm will perform $\approx 10^10$ operations. This will take tens of seconds
for the computer to solve, which is considered too slow. However, you must always remember that there are constant factors. For example, an $O(n)$ algorithm may actually be doing $n/2$ or $5n$ operations. Additionally, you may call functions that also have time complexities, such as premade sorting functions.

## Guessing time complexity given input size

| input size   | required time complexity |
|--------------|--------------------------|
| $n<=10$      | $O(n!)$                  |
| $n<=20$      | $O(2^n)$                 |
| $n<=500$     | $O(n^3)$                 |
| $n<=5000$    | $O(n^2)$                 |
| $n<=10^6$    | $O(n \log n)$ or $O(n)$   |
| $n$ is large | $O(1)$ or $O(\log n)$    |