# Expection

## by 刘成锴



## Definition of expectation

For a random variable $X \in \mathcal L^1 = L^1(\Omega, \mathcal F, P)$, we define the $expectation$ $E(X)$ of X by
$$
E(X) := \int_\Omega X dP = \int_\Omega X(\omega)P(d\omega)
$$
We also define $E(X) (\leq \infty)$ for $X \in (m \mathcal F)^+$. In short, $E(X) = P(X)$.



## Convergence theorems

Suppose that $(X_n)$ is a sequence of $RV$s, that $X$ is a $RV$, and that $X_n \rightarrow X$ almost surely:
$$
P(X_n \rightarrow X) = 1
$$


## The notation $E(X; F)$

For $X \in \mathcal L^1$ or $(m \mathcal F)^+$ and $F \in \mathcal F$, we define
$$
E(X; F) := \int_F X(\omega) P(d\omega) := E(X I_F)
$$
where,
$$
\mathrm{I}_{F}(\omega):=\left\{\begin{array}{ll}
1 & \text { if } \omega \in F \\
0 & \text { if } \omega \notin F
\end{array}\right.
$$


## Jensen's inequality for convex functions

A function $c : G \rightarrow \mathbf R$, where $G$ is an open subinterval of $\mathbf R$, is called **convex** on $G$ if its graph lies below any of its chords: for $x, y \in G$ and $0 \leq p = 1 - q \leq 1$,
$$
c(px + qy) \leq pc(x) + qc(y)
$$

### Jensen's inequality

Suppose that $c : G \rightarrow \mathbf R$ is a convex function on an open subinterval $G$ of $\mathbf R$ and that $X$ is a random variable such that
$$
E(|X|) < \infty, \quad P(X \in G) = 1, \quad E|c(X)| < \infty
$$
Then
$$
Ec(X) \geq c(E(X))
$$


## Monotonicity of $\mathcal L^p$ norms

For $1 \ leq p < \infty$, we say that $X \in \mathcal L^p = \mathcal L^p(\Omega, \mathcal F, P)$ if
$$
E(|X|^p) < \infty
$$
define
$$
\|X\|_{p}:=\left\{\mathbf{E}\left(|X|^{p}\right)\right\}^{\frac{1}{p}}
$$

### Monotonicity

If $1 \leq p \leq r < \infty$ and $Y \in \mathcal L^r$, then $Y \in \mathcal L^p$ and
$$
\| Y \|_p \leq \| Y \|_r
$$


## Schwarz inequality

If $X$ and $Y$ are in $\mathcal L^2$, then $XY \in \mathcal L^1$, and
$$
|E(XY)| \leq E(|XY|) \leq \|X\|_2 \|Y\|_2
$$


## Hölder inequality

Suppose that $f, g \in \mathcal L^p(S, \Sigma, \mu), \ h \in \mathcal L^q(S, \Sigma, \mu)$. Then

### Hölder's inequality

$f h \in \mathcal L^1(S, \Sigma, \mu)$ and
$$
|\mu(fh)| \leq \mu(|fh|) \leq \|f\|_p \|h\|_q
$$

### Minkowski's inequality

$$
\|f + g\|_p \leq \|f\|_p + \|g\|_p
$$



## Completeness of $\mathcal L^p (1 \leq p < \infty)$

Let $p \in [1, \infty)$.

If $(X_n)$ is a Cauchy sequence in $\mathcal L^p$ in that
$$
\sup_{r, s \geq k} \|X_r - X_s\|_p \rightarrow 0 \quad(k \rightarrow \infty)
$$
then there exists $X$ in $\mathcal L^p$ such that $X_r \rightarrow X$ in $\mathcal L^p$ :
$$
\|X_r - X\| \rightarrow 0 \quad (r \rightarrow \infty)
$$


## Orthogonal projection

### Theorem

Let $\mathcal K$ be a vector subspace of $\mathcal L^2$ which is complete in that whenever $(V_n)$ is a sequence in $\mathcal K$ which has the Cauchy property that
$$
\sup_{r, s \geq k} \|V_r - V_s\| \rightarrow 0 \quad (k \rightarrow \infty)
$$
then there exists a $V$ in $\mathcal K$ such that
$$
\|V_n - V\| \rightarrow 0 \quad (n \rightarrow \infty)
$$
Then given $X$ in $\mathcal L^2$, there exists $Y$ in $\mathcal K$ such that

(i) $\|X - Y \| = \Delta := \inf \{\|X - W\| : W \in \mathcal K \}$

(ii) $X-Y \perp Z, \quad \forall Z \in \mathcal{K}$

Properties (i) and (ii) of $Y$ in $\mathcal K$ are equivalent and if $\tilde{Y}$ shares either property (i) or (ii) with $Y$, then
$$
\|\tilde{Y}-Y\|=0 \quad(\text {equivalently}, \quad Y=\tilde{Y}, \text { a.s. })
$$

### Definition

The random variable $Y$ in the theorem is called a version of the *orthogonal projection* of $X$ onto $\mathcal K$. If $\tilde Y$ is another version, then $\tilde Y = Y$, a.s.



## Covariance

### Civariance and variance

$$
\operatorname{Cov}(X, Y)=\mathrm{E}(X Y)-\mu_{X} \mu_{Y}
$$

$$
\operatorname{Var}(X) := E[(X - \mu_X)^2] = E(X^2) - \mu_X^2 = \operatorname{Cov}(X, X)
$$

### Inner product, angle

Inner (or scalar) product
$$
\langle U, V\rangle:=\mathrm{E}(U V)
$$
And if $\|U\|_2$ and $\|V\|_2 \neq 0$, we define the cosine of the angle $\theta$ between $U$ and $V$ by
$$
\cos \theta = \frac{\langle U, V \rangle}{\|U\|_2\|V\|_2}
$$
the correlation $\rho$ of $X$ and $Y$ is $\cos \alpha$ where $\alpha$ is the angle between $\tilde X$ and $\tilde Y$.