<h2><a href="https://codeforces.com/contest/1165/problem/B" target="_blank" rel="noopener noreferrer">1165B — Polycarp Training</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1165B](https://codeforces.com/contest/1165/problem/B) |

## Topics
`data structures` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Polycarp Training</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp wants to train before another programming competition. During the first day of his training he should solve exactly $$$1$$$ problem, during the second day — exactly $$$2$$$ problems, during the third day — exactly $$$3$$$ problems, and so on. During the $$$k$$$-th day he should solve $$$k$$$ problems.</p><p>Polycarp has a list of $$$n$$$ contests, the $$$i$$$-th contest consists of $$$a_i$$$ problems. During each day Polycarp has to choose <span class="tex-font-style-bf">exactly one</span> of the contests he didn't solve yet and solve it. He solves <span class="tex-font-style-bf">exactly $$$k$$$ problems from this contest</span>. Other problems are discarded from it. If there are no contests consisting of at least $$$k$$$ problems that Polycarp didn't solve yet during the $$$k$$$-th day, then Polycarp stops his training.</p><p>How many days Polycarp can train if he chooses the contests optimally?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of contests.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 2 \cdot 10^5$$$) — the number of problems in the $$$i$$$-th contest.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum number of days Polycarp can train if he chooses the contests optimally.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005302093079919838" id="id0014786387980200966" class="input-output-copier">Copy</div></div><pre id="id005302093079919838">4
3 1 4 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008952118345097372" id="id006223317473191714" class="input-output-copier">Copy</div></div><pre id="id008952118345097372">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003223807425836379" id="id00008671120459557424" class="input-output-copier">Copy</div></div><pre id="id003223807425836379">3
1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0004126121524043125" id="id0041336735393598056" class="input-output-copier">Copy</div></div><pre id="id0004126121524043125">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005384639660018465" id="id004481043332178255" class="input-output-copier">Copy</div></div><pre id="id005384639660018465">5
1 1 1 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00042536803303940274" id="id0018844035763560307" class="input-output-copier">Copy</div></div><pre id="id00042536803303940274">2
</pre></div></div></div>