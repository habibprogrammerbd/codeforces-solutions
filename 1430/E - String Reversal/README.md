<h2><a href="https://codeforces.com/contest/1430/problem/E" target="_blank" rel="noopener noreferrer">1430E — String Reversal</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1430E](https://codeforces.com/contest/1430/problem/E) |

## Topics
`data structures` `greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">E. String Reversal</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$. You have to reverse it — that is, the first letter should become equal to the last letter before the reversal, the second letter should become equal to the second-to-last letter before the reversal — and so on. For example, if your goal is to reverse the string "<span class="tex-font-style-tt">abddea</span>", you should get the string "<span class="tex-font-style-tt">aeddba</span>". To accomplish your goal, you can swap the <span class="tex-font-style-bf">neighboring elements of the string</span>. </p><p>Your task is to calculate the minimum number of swaps you have to perform to reverse the given string.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$2 \le n \le 200\,000$$$) — the length of $$$s$$$.</p><p>The second line contains $$$s$$$ — a string consisting of $$$n$$$ lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum number of swaps of neighboring elements you have to perform to reverse the string.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006943483869381664" id="id009097587120344959" class="input-output-copier">Copy</div></div><pre id="id006943483869381664">5
aaaza
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008983507848251292" id="id00013861128452130833" class="input-output-copier">Copy</div></div><pre id="id008983507848251292">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00570404990604161" id="id0012420708300829053" class="input-output-copier">Copy</div></div><pre id="id00570404990604161">6
cbaabc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0043686696320293306" id="id0040730035212853344" class="input-output-copier">Copy</div></div><pre id="id0043686696320293306">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0026566553064963394" id="id009598616525200154" class="input-output-copier">Copy</div></div><pre id="id0026566553064963394">9
icpcsguru
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006596637203593521" id="id008135234895777509" class="input-output-copier">Copy</div></div><pre id="id006596637203593521">30
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you have to swap the third and the fourth elements, so the string becomes "<span class="tex-font-style-tt">aazaa</span>". Then you have to swap the second and the third elements, so the string becomes "<span class="tex-font-style-tt">azaaa</span>". So, it is possible to reverse the string in two swaps.</p><p>Since the string in the second example is a palindrome, you don't have to do anything to reverse it.</p></div>