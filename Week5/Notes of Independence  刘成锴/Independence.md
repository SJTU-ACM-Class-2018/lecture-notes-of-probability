# Independence

Let $(\Omega, \mathcal F, \mathbf P)$ be a probability triple.

## Definitions of independence

### Independent $\sigma$-algebras

Sub-$\sigma$-algebras $\mathcal {G_1, G_2, \dots}$ of $\mathcal F$ are called *independent* if, whenever $G_i \in \mathcal G_i (i \in \mathbf N)$ and $i_1, \dots, i_n$ are distinct, then
$$
P(G_{i_1} \cap \dots \cap G_{i_n} = \prod_{k=1}^n P(G_{i_k}) )
$$

### Indenpendent random variables

Random variables $X_1, X_2, \dots$ are called *independent* if the $\sigma$-algebras
$$
\sigma(X_1), \sigma(X_2), \dots
$$
are independent.

### Independent events

Events $E_1, E_2, \dots$ are called *independent* if the $\sigma$-algebras $\mathcal{E_1, E_2, \dots}$ are independent, where
$$
\mathcal E_n \text{ is the $\sigma$-algebra } \{\empty, E_n, \Omega{\setminus{E_n}}, \Omega \}
$$
Since $\mathcal{E_n} = \sigma(I_{E_n})$, it follows that 

event $E_1, E_2, \dots$ are independent if and only if the random variables $I_{E_1}, I_{E_2}, \dots$ are independent.



## The $\pi$-system Lemma; and the more familiar definitions

We study independence via $\pi$-systems rather than $\sigma$-algebras.

(a) **LEMMA.** Suppose that $\mathcal G$ and $\mathcal H$ are sub-$\sigma$-algebras of $\mathcal F$, and that $\mathcal I$ and $\mathcal J$ are $\pi$-systems with
$$
\sigma(\mathcal I) = \mathcal G, \quad \sigma(\mathcal J) = \mathcal H
$$
Then $\mathcal G$ and $\mathcal H$ are *independent* if and only if $\mathcal I$ and $\mathcal J$ are independent in that
$$
P(I \cap J) = P(I)P(J), \qquad I \in \mathcal I, \quad J \in \mathcal J
$$
(b)

Suppose that $X$ and $Y$ are two random variables on $(\Omega, \mathcal F, \mathbf P)$ such that, whenever $x, y \in \mathbf R$,
$$
P(X \leq x; Y \leq y) = P(X \leq x) P(Y \leq y)
$$
The $\pi$-systems $\pi(X)$ and $\pi(Y)$ are independent. Hence $\sigma(X)$ and $\sigma(Y)$ are independent.



## Second Borel-Cantelli Lemma (BC2)

If $E_n : n \in \mathbf N$ is a sequence of **independent** events, then
$$
\sum P(E_n) = \infty \Rightarrow P(E_n, \text{ i.o.}) = P(\lim \sup E_n) = 1
$$


## Definitions. Tail $\sigma$-algebras

Let $X_1, X_2, \dots$ be random variables. Define
$$
\mathcal T_n := \sigma(X_{n+1}, X_{n+2}, \dots), \quad \mathcal T := \bigcap_n \mathcal T_n
$$
The $\sigma$-algebra $\mathcal T$ is called the *tail $\sigma$-algebra* of the sequence $(X_n : n \in \mathbf N)$.



## Theorem. Kolmogorov's 0-1 Law

Let $(X_n : n \in \mathbf N)$ be a sequence of **independent** random variables, and let $\mathcal T$ be the tail $\sigma$-algebra of $(X_n : n  \in \mathbf N)$. Then $\mathcal T$ is $P$-trivial, that is

(i) $F \in \mathcal T \Rightarrow P(F) = 0 \text{ or } P(F) = 1$ 

(ii) if $\xi$ is a $\mathcal T$-measurable random variable, then, $\xi$ is almost deterministic in that for some constant $c$ in $[-\infty, +\infty]$,
$$
P(\xi = c) = 1
$$
We allow $\xi = \pm \infty$ at (ii) for obvious reasons.

