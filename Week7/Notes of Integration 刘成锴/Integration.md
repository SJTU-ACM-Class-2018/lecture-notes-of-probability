# Integration

## by 刘成锴

## Notation $\mu(f) :=: \int_s f \mathrm d \mu, \ \mu(f; A)$

Let $(S, \Sigma, \mu)$ be a measure space.

The (Lebesgue) integral of $f$ (elements of $m \Sigma$) with respect to $\mu$. Here are the notations :
$$
\mu(f) :=: \int_s f(s) \mu(\mathrm d s) :=: \int_s f \mathrm d \mu
$$
The equivalences for $A \in \Sigma$:
$$
\int_A f(s) \mu(\mathrm d s) :=: \int_A f \mathrm d \mu :=: \mu(f; A) := \mu(f I_A)
$$
*Summation is a special type of integration.* If $(a_n : n \in \mathbf N)$ is a sequence of real numbers, then with $S = \mathbf N$, $\Sigma = \mathcal P(\mathbf N)$, and $\mu$ the measure on $(S, \Sigma)$ with $\mu(\{k\}) = 1$ for every $k$ in $\mathbf N$, then $s \mapsto a_s$ is $\mu$-integrable if and only if $\sum |a_n| < \infty$, and then
$$
\sum a_n = \int_s a_s \mu (\mathrm d s) = \int_s a \mathrm d \mu
$$



## Definition of $\mu(f), \ f \in (m\Sigma)^+$

For $f \in (m \Sigma)^+$ we define

$$
\mu(f) := \sup \{\mu_0(h) : h \in SF^+, h \leq f \} \leq \infty
$$

Clearly, for $f \in SF^+$, we have $\mu(f) = \mu_0(f)$.

### **LEMMA**

If $f \in (m \Sigma)^+$ and $\mu(f) = 0$, then
$$
\mu(\{f > 0\}) = 0
$$



## Monotone-Convergence Theorem (MON)

If $(f_n)$ is a sequence of elements of $(m \Sigma)^+$ such that $f_n \uparrow f$, then
$$
\mu(f_n) \uparrow \mu(f) \leq \infty
$$
or, in other notation,
$$
\int_S f_n(s) \mu(ds) \uparrow \int_S f(s) \mu(ds)
$$


It is proved in A5.4.



## The Fatou Lemmas for functions

### FATOU

For a sequence $(f_n)$ in $(m\Sigma)^+$,
$$
\mu(\lim \inf f_n) \leq \lim \inf \mu(f_n)
$$

### Reverse Fatou Lemma

If $(f_n)$ is a sequence in $(m \Sigma)^+$ such that for some $g$ in $(m \Sigma)^+$, we have $f_n \leq g$, $\forall n$, and $\mu(g) < \infty$, then
$$
\mu(\lim \sup f_n) \geq \lim \sup \mu(f_n)
$$



## Integrable function, $\mathcal L^1(S, \Sigma, \mu)$

For $f \in m \Sigma$, we say that $f$ is $\mu$-integrable, and we write
$$
f \in \mathcal L^1(S, \Sigma, \mu)
$$
if
$$
\mu(|f|) = \mu(f^+) + \mu(f^-) < \infty
$$
and then we define
$$
\int f du := \mu(f) := \mu(f^+) - \mu(f^-)
$$


Note that, for $f \in \mathcal L^1(S, \Sigma, \mu)$
$$
|\mu(f)| \leq \mu(|f|)
$$
This is *the modulus of the integral is less that or equal to the integral of the modulus.*



## Linearity

For $\alpha, \beta \in \mathbf R$ and $f, g \in \mathcal L^1(S, \Sigma, \mu)$,
$$
\alpha f + \beta g \in L^1(S, \Sigma, \mu)
$$
and
$$
\mu(\alpha f + \beta g) = \alpha \mu(f) + \beta \mu(g)
$$


## Dominated-Convergence Theorem (DOM)

Suppose that $f_n, f \in m\Sigma$, that $f_n() \rightarrow f(s)$ for every $s$  in $S$ and that the sequence $(f_n)$ is **dominated** by an element $g$ of $\mathcal L^1(S, \Sigma, \mu)^+$:
$$
|f_n(s)| \leq g(s), \quad \forall s \in S, \forall n \in \mathbf N,
$$
where $\mu(g) < \infty$. Then
$$
f_n \rightarrow f \text{ in } \mathcal L^1(S, \Sigma, \mu) \text{: that is, } \mu(|f_n - f|) \rightarrow 0,
$$
whence
$$
\mu(f_n) \rightarrow \mu(f).
$$



## Scheffé's Lemma (SCHEFFÉ)

Suppose that $f_n, f \in \mathcal L^1(S, \Sigma, \mu)^+$; in particular, $f_n$ and $f$ are non-negative. Suppose that $f_n \rightarrow f \text{ (a.e.)}$. Then

$$
\mu(|f_n - f|) \rightarrow 0 \iff \mu(f_n) \rightarrow \mu(f)
$$



## Standard machine

The standard machine is a much cruder alternative to the Monotone-Class Therorem.

The idea is that to prove that a 'linear' result is true for all functions $h$ in a space such as $\mathcal L^1(S, \Sigma, \mu)$,

* first, we show the result is true for the case when $h$ is an indicator function - which it normally is by definition;
* then, we use linearity to obtain the result for $h$ in $SF^+$;
* next, we use (MON) to obtain the result for $h \in (m\Sigma)^+$, integrability conditions on $h$ usually being superfluous at this stage;
* finally, we show, nny writing $h = h^+ - h^-$ and using linearity, that the claimed result is true.

