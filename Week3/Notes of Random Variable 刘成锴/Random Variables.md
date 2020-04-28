# Random Variables

## by 刘成锴

Let $(S, \Sigma)$ be a measurable space, so that $\Sigma$ is a $\sigma$-algebra on $S$.

## Definitions. $\Sigma$-measurable function, $m\Sigma$, $(m\Sigma)^+$, $b\Sigma$

Suppose that $h : S \rightarrow \mathbf R$. For $A \in \mathbf R$, define
$$
h^{-1}(A) := {s \in S : h(s) \in A}
$$
Then $h$ is called *$\Sigma$-measurable* if $h^{-1} : \mathcal B \rightarrow \Sigma$, that is, $h^{-1}(A) \in \Sigma, \forall A \in \mathcal B$.

Here is a picture of a $\Sigma$-measurable function $h$:
$$
S \stackrel{\mathrm{h}}{\longrightarrow} \mathbf{R}
\\
\Sigma \stackrel{\mathrm{h^{-1}}}{\longleftarrow} \mathcal{B}
$$
 

$m\Sigma$  :  the class of $\Sigma$-measurable functions on $S$

 $(m\Sigma)^+$  : the class of non-negative elements in $m\Sigma$

$b\Sigma$ : the class of bounded $\Sigma$-measurable functions on $S$

### Borel function

A function $h$ from a topological space $S$ to $\mathbf R$ is called **Borel** if $h$ is $\mathcal B(S)$-measurable. 

The most important case is when $S$ itself is $\mathbf R$.



## Elementary Propositions on measurability

(a) The map $h^{-1}$ preserves all set operations:

​		$h^{-1}\left(\cup_{\alpha} A_{\alpha}\right)=U_{\alpha} h^{-1}\left(A_{\alpha}\right), \quad h^{-1}\left(A^{c}\right)=\left(h^{-1}(A)\right)^{c}$, etc.

(b) $\text {If } \mathcal{C} \subseteq \mathcal{B} \text { and } \sigma(\mathcal{C})=\mathcal{B}, \text { then } h^{-1}: \mathcal{C} \rightarrow \Sigma \quad \Rightarrow \quad h \in \mathrm{m} \Sigma$

(c) If $S$ is *topological* and $h : S \rightarrow \mathbf R$ is *continuous*, then $h$ is ***Borel***.

(d) For any measurable space $(S, \Sigma)$, a function $h : S \rightarrow \mathbf R$ is $\Sigma$-measurable if

​		$\{h \leq c\}:=\{s \in S: h(s) \leq c\} \in \Sigma \quad(\forall c \in \mathbf{R})$



## Lemma. Sums and products of measurable functions are measurable

$m\Sigma$ is an algebra over $\mathbf R$, that is,

if $\lambda \in \mathbf R$ and $h, h_1, h_2 \in m\Sigma$, then
$$
h1 + h2 \in m\Sigma, \quad h_1h_2 \in m\Sigma, \quad \lambda h \in m \Sigma
$$


## Composition Lemma 复合函数可测性引理

If $h \in m\Sigma$ and $f \in m \mathcal B$, then $f \  \circ \ h \in m\Sigma$.

Proof.
$$
S \stackrel{\mathrm{h}}{\longrightarrow} \mathbf{R} \stackrel{\mathrm{f}}{\longrightarrow} \mathbf{R}
\\
\Sigma \stackrel{\mathrm{h^{-1}}}{\longleftarrow} \mathcal{B} \stackrel{\mathrm{f^{-1}}}{\longleftarrow} \mathcal{B}
$$


## 

## Definition. Random Variable

Let $(\Omega, \mathcal F)$ be our (sample space, family of events). A *random variable* is an element of $m\mathcal F$. Thus,
$$
X : \Omega \rightarrow \mathbf R, \quad X ^ {-1} : \mathcal B \rightarrow \mathcal F
$$


