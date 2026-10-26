# Experiment 11: LRU and LFU Page Replacement Algorithms

## Aim
To implement Least Recently Used (LRU) and Least Frequently Used (LFU) replacement policies using C. The experiment models a CDN edge cache that stores three video segments.

## Description
- **LRU (Least Recently Used):** When the cache is full, it removes the segment that has not been used for the longest time.
- **LFU (Least Frequently Used):** When the cache is full, it removes the segment with the lowest access frequency. If frequencies are equal, the least recently used segment is removed.

Both programs use the request sequence `ABACADBEA` and a cache capacity of three. They display HIT/MISS for each request and report total hits, misses, and hit rate.

## Files
- `experiment11_lru.c` — LRU page replacement program.
- `experiment11_lfu.c` — LFU page replacement program.
- `experiment11_lru_output.png` — LRU output screenshot from the lab manual.
- `experiment11_lfu_output.png` — LFU output screenshot from the lab manual.

## Requirements
- GCC compiler
- Linux, macOS, or another system with a compatible C compiler

## Compile and Run LRU
```bash
gcc experiment11_lru.c -o lru
./lru
```

## Compile and Run LFU
```bash
gcc experiment11_lfu.c -o lfu
./lfu
```

## Output
Refer to the two PNG files for the output screenshots from the lab manual.

## Result
The LRU and LFU cache replacement algorithms are implemented in C. LRU selects a segment based on recency, while LFU selects based on access frequency and uses recency to break ties.
