# Canonical Striver ↔ CSES Mapping (Execution-Grade)

Think of Striver as a **dependency graph**, not a checklist.

---

## TIER A — Fast throughput (Days 1–7)

### 1. Sorting & Searching (CSES: 35)
**Striver (minimal unlock):**
- Important Sorting Techniques (finish remaining 1)
- Arrays (Easy + selected Medium)
- Binary Search (1D + BS on answers)

**Striver problems to do:**
- Sorting: **all 7**
- Arrays: ~15–18 (two pointers, Kadane, DNF only)
- Binary Search: ~10–12 (boundaries + search space)

❌ Skip for now:
- array hard traps
- 2D binary search variants unless needed

**Then CSES:**
- Sorting & Searching (35)
- Introductory already done ✅

> If a CSES problem doesn’t map to  
> `{sort | two pointers | greedy | BS}` → pause and load pattern.

---

### 2. Sliding Window (CSES: 11)
**Striver:**
- Sliding Window & Two Pointers (all 12)

**Then CSES:**
- Sliding Window Problems (11)
This is a clean 1:1 drain.

---
### 3. Bitwise + Construction (CSES: 11 + 8)
**Striver:**
- Bit Manipulation (all 18)
**Then CSES:**
- Bitwise Operations (11)
- Construction Problems (8)
Bitwise Striver has _higher depth_ than CSES — good leverage.

---

## TIER B — Medium cost (Days 8–15)
### 4. Greedy + Heaps (CSES overlaps)
**Striver:**
- Greedy Algorithms (all 16)
- Heaps (all 17)

**Then CSES (partial drain):**
- Finish leftovers from Sorting & Searching
- Parts of:
    - Counting Problems (17)
    - Mathematics (greedy-heavy ones)
    - Advanced Techniques (two pointers / greedy variants)
Greedy is **cross-cutting** in CSES — don’t expect a single bucket.

---

### 5. Trees (CSES: 16)
**Striver:**
- Binary Trees (~25/39)
    - traversals
    - height / diameter
    - views
- BST (~8/16)
    - search, insert, LCA
❌ Skip:
- obscure view problems
- niche BST tricks
**Then CSES:**
- Tree Algorithms (16)
Perfect alignment.

---

### 6. Graphs (CSES: 36)
**Striver (selective):**
- Graphs (~30/54)
    - BFS / DFS
    - connected components
    - Dijkstra
    - DSU
    - MST

❌ Skip initially:
- SCC theory-heavy problems
- rare graph DP

**Then CSES:**
- Graph Algorithms (36)

---

## TIER C — High variance (Days 16–25)
This is where **discipline matters**.
### 7. Dynamic Programming (CSES: 23)
**Striver:**
- DP (~30/56)
    - 1D DP
    - 2D grid DP
    - knapsack
    - LIS

❌ Skip:
- DP on trees (unless CSES forces it)
- advanced state compression early

**Then CSES:**
- Dynamic Programming (23)
This is one of the cleanest mappings.

---
### 8. Strings (CSES: 21)
**Striver:**
- Strings (all 15)

**Then CSES:**
- String Algorithms (21)

Note:  
CSES string problems spike fast → editorials are expected.

---
### 9. Advanced / Specialist Buckets (sample, not drain)
**CSES:**
- Geometry (16)
- Interactive (6)
- Advanced Graph Problems (25)
- Additional I & II (56)

**Striver usage:**
- Tries → **ONLY if** string queries demand it
- Graphs → return for:
    - LCA
    - binary lifting
    - DSU-on-tree
- DP → digit DP / meet-in-middle _only when triggered_
Goal here is **pattern exposure**, not 100% completion.

---

# Visual Dependency Flow (mental model)

```
Striver = Pattern Loader
CSES   = Pattern Stress Test

Striver(topic X) → CSES(category X) → repeat
```

Never:
- Striver without immediate CSES
- CSES without known pattern
