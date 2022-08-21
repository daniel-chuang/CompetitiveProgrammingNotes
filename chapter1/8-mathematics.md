# Mathematics

## Sum formulas

### Faulhaber's Formula
Each sum of the form

$$\sum_{x=1}^{n}x^k = 1^k + 2^k + 3^k ... + n^k$$

Where $k$ is a positive integer has a closed-form formula that is a polynomial of the degree $k+1$

$$\sum_{x=1}^{n}x = 1 + 2 + 3 + ...+n = \frac{n(n+1)}{2}$$

$$\sum_{x=1}^{n}x^2 = 1^2 + 2^2 + 3^2 + ...+n^2 = \frac{n(n+1)(2n+1)}{6}$$

The general formula for this is called Faulhaber's formula.

### Arithmetic Progressions

Any sequence of numbers where the difference between any two consecutive numbers is constant, like

$$ 3, 7, 11, 15 $$

Can be calculated with formula

$$ \text{n numbers: }a+...+b = \frac{n(a+b)}{2}$$

$a$ is the first number, $b$ is the last, and $n$ is the amount of numbers.

### Geometric Progression

Any sequence where the ratio between any two consecutive numbers is constant, like

$$3, 6, 12, 24$$

can be calculated with this formula:

$$a + ak + ak^2 + ... b = \frac{bk-a}{k-1}$$

$a$ is the first number, $b$ is the last number, and the ratio between consecutive number is $k$.

### Harmonic Sum

$$ \sum_{x=1}^{n} \frac{1}{x} = 1 + \frac{1}{2} + \frac{1}{3} + ... + \frac{1}{n}$$

An upper bound for a harmonic sum is $\log_2(n) + 1$ because we can modify each term $1/k$ so that $k$ becomes the nearest power of two that does not exceed k.

For example, if $n=6$, we can estimate the sum as such:

$$ 1 + \frac{1}{2} + \frac{1}{3} + \frac{1}{4} + \frac{1}{5} + \frac{1}{6} \le 1 + \frac{1}{2} + \frac{1}{2} + \frac{1}{4} + \frac{1}{4} + \frac{1}{4}$$

This upper bound has $\log_2(n)+1$ parts, and the value of each part is at most 1.

[fantastic explaination of this](https://www.cs.umd.edu/class/spring2016/cmsc351-0101/harmonic.pdf)

## Set theory

## Logic

## Functions

## Logarithms

$ \log_k(x)=a$ is the same as $ k^a=x$

Often used in the analysis of algorithms, since many efficient algorithms halve something at each step.

### Log rules

#### Product Rule

$$\log_k(ab)=\log_k(a)+\log_k(b)$$

#### Exponent Rule

$$\log_k(x^n)=n\cdot\log_k(x)$$

### Quotient Rule

$$\log_k(\frac{a}{b})=\log_k(a)-\log_k(b)$$

### Base Conversion Rule

$$\log_u(x) = \frac{\log_k(x)}{\log_k(u)}$$

#### Natural Log

Natural logarithm $\ln(x)$ has base of $e\approx2.71828$

#### Base Property

Number of digits of an integer x in base b is $\lfloor\log_b(x)+1\rfloor$

For example, 123 in binary is 1111011 and $\lfloor\log_2(123)+1\rfloor=7$
