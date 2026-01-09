Good — that constraint **changes everything**, and now the plan can be made _correct instead of optimistic_.

I’ll lock this down cleanly.

---

## Restated problem (strong form)

- **Hard constraint**:  
    **Finish all 371 CSES problems in 25 days** (non-negotiable)
    
- **Soft constraint**:  
    **Finish Striver A2Z in ~90 days** (long-term, no rush)
    
- **Key rule**:  
    Striver must **never slow CSES**, but must **reduce friction when needed**
    

So Striver becomes:

> a **just-in-time dependency resolver**, not a parallel workload

---

## The correct control rule (this is the core)

### ❌ What you must NOT do

- “Finish a Striver section before touching CSES”
    
- Allocate fixed daily time to Striver
    
- Treat Striver progress as a success metric during these 25 days
    

### ✅ What you MUST do

- **CSES drives the day**
    
- **Striver is interrupt-driven**
    

Formally:

```
Attempt CSES problem
→ If pattern known → solve
→ If pattern unknown → load MINIMUM Striver material
→ Return immediately to CSES
```

Striver time must be **reactive**, not scheduled.

---

## CSES-first daily execution loop (non-negotiable)

### Daily target

- **15 problems/day average**
    
- Some days 20 (easy buckets)
    
- Some days 8–10 (DP / graphs)
    

### Loop

```
for each CSES problem:
    try brute or known pattern (10–15 min)
    if stuck:
        identify missing pattern
        load that exact pattern from Striver
        re-solve
    log pattern
    move on
```

If you do this, **Striver progress happens automatically** without planning.

---

## How Striver completion fits the 90-day arc

After 25 days:

- You will have **touched ~60–70% of Striver topics**
    
- But unevenly and non-sequentially
    

Then the remaining ~65 days are used to:

- Fill gaps
    
- Deepen weak areas
    
- Clean up advanced topics
    

This is optimal.

---

## What Striver sections look like _during_ the 25 days

### Actively used
- Sorting
- Arrays
- Binary Search
- Two Pointers / Sliding Window
- Greedy
- ==**Graphs (core)**==
- ==**DP (core)**==
- ==**Strings**==
- Bit Manipulation

### Deferred / opportunistic

- Linked Lists
- Stacks & Queues (only monotonic stack when needed)
- Heaps (only when priority queue appears)
- BST (only if forced)
- Tries
- Advanced DP
- Rare graph theory
These will be **properly finished in the remaining 65 days**.

---

## Concrete alignment (without slowing CSES)

|CSES category|Striver usage rule|
|---|---|
|Sorting & Searching|Preload 2–3 Striver problems max|
|DP|Load pattern only when state is unclear|
|Graphs|Load BFS/DFS/Dijkstra/DSU only|
|Trees|Load LCA / traversal only|
|Strings|Load hashing / prefix logic only|
|Geometry|Skip Striver unless totally lost|
|Interactive|Editorial-first|
|Advanced Graphs|Pattern sampling, not mastery|

---

## Brutal truth (important)

> **You cannot finish CSES in 25 days if you treat Striver as “homework”.**

But you **can** finish CSES in 25 days if:

- Striver is used like a **header file**, not a library
    
- You never spend >30 minutes in Striver without returning to CSES
    
- You allow editorials for Tier-C problems
    

---

## Final mental model

```
CSES = mission
Striver = toolbox
Editoral = documentation
```

After Day 25:

- CSES = DONE
    
- Striver = partially done, but now trivial to finish in 90 days
    

If you want next, I can:

- design a **25-day CSES-only calendar** (with Striver hooks)
    
- or give you a **hard rule for when to read editorials**
    
- or create a **post-CSES Striver completion plan**
    

Say which.