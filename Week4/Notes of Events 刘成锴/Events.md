# Events

## by 刘成锴

## Model for experiment: $(\Omega, \mathcal F,  P)$

A probability triple $(\Omega, \mathcal F,  P)$.

### Sample space $\Omega$

$\Omega$ is a set called the *sample space*.

### Sample point $\omega$

A point $\omega$ of $\Omega$ is called *a sample point*.

### Event

The $\sigma$-algebra $\mathcal F$ on $\Omega$ is called the family of events（事件类）, so that an *event* is an element of $\mathcal F$, that is, an $\mathcal F$-measurable（$\mathcal F$-可测） subset of $\Omega$.

$P$ is a probability measure on $(\Omega, \mathcal F)$

For $F \in \mathcal F$, $P(F)$ is the probability that $\omega$ is in $F$.



## Almost surely (a.s.)

A statement $S$ about outcomes is said to be true *almost surely (a.s.)*, or *with probability* 1 *(w.p.1)*, if
$$
F:=\{\omega: S(\omega) \text { is true }\} \in \mathcal{F} \text { and } \mathbf{P}(F)=1
$$


## Some definitions

Let $(x_n : n \in \mathbf N)$ be a sequence of real numbers.

(a)
$$
\limsup x_{n}:=\inf _{m}\left\{\sup _{n \geq m} x_{n}\right\}=\downarrow \lim _{m}\left\{\sup _{n \geq m} x_{n}\right\} \in[-\infty, \infty]
$$


(b)
$$
\liminf x_{n}:=\sup _{m}\left\{\inf _{n \geq m} x_{n}\right\}=\uparrow \lim _{m}\left\{\inf _{n \geq m} x_{n}\right\} \in[-\infty, \infty]
$$

(c)
$$
x_{n} \text { converges in }[-\infty, \infty] \Longleftrightarrow \limsup x_{n}=\lim \inf x_{n}
$$
and then $\lim x_{n}=\lim\sup  x_{n}=\lim\inf x_{n}$



## Definition. $\limsup {E_{n},\left(E_{n}, \text { i.o. }\right)}$ 

If $E$ is an event, then
$$
E = {\omega : \omega \in E}
$$
Suppose now that $(E_n : n \in \mathbf N)$ is a sequence of events.

(a) We define
$$
\begin{aligned}\left(E_{n}, \text { i.o. }\right): &=\left(E_{n} \text { infinitely often }\right) \\ : &=\lim \sup E_{n}:=\bigcap_{m} \bigcup_{n \geq m} E_{n} \\ &=\left\{\omega: \text { for every } m, \quad \exists n(\omega) \geq m \text { such that } \omega \in E_{n(\omega)}\right\} \\ &=\left\{\omega: \omega \in E_{n} \text { for infinitely many } n\right\} \end{aligned}
$$


(b) (**Reverse Fatou Lemma** - needs *FINITENESS* of $P$)
$$
P(\lim \sup E_n) \geq \lim \sup P(E_n)
$$


## First Borel-Cantelli lemma (BC1)

Let $(E_n : n \in \mathbf N)$ be a sequence of events such that $\sum_{n} P\left(E_{n}\right)<\infty$. Then
$$
P(\lim \sup E_n) = P(E_n, i.o.) = 0
$$


## Definitions. $\lim \inf E_n$, $(E_n, \text{ev})$

Suppose that $(E_n : n \in \mathbf N)$ is a sequence of events.

(a) We define
$$
\begin{aligned}\left(E_{n}, \mathrm{ev}\right) &:=\left(E_{n} \text { eventually }\right) \\ &=\lim \inf E_{n}:=\bigcup_{m} \bigcap_{n \geq m} E_{n} \\ &=\left\{\omega: \text { for some } m(\omega), \quad \omega \in E_{n}, \forall n \geq m(\omega)\right\} \\ &=\left\{\omega: \omega \in E_{n} \text { for all large } n\right\} \end{aligned}
$$
(b) Note that $\left(E_{n}, \mathrm{ev}\right)^{c}=\left(E_{n}^{c}, \text { i.o. }\right)$.

(c) (**Fatou's Lemma for sets** - true for *ALL* measure spaces)
$$
P(\lim \inf E_n) \leq \lim \inf P(E_n)
$$
