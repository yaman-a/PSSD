# Yaman's logbook
# Week 3

## Problem 1: Arrows

### Initial Thoughts:

For this problem, my first thought is to iterate through the string and just count the length of arrows. This could be done by looping through the string and checking if the current character is < or >. if that's the case then we loop throught the string again using a while loop and just counting the number of - or = adjacent to that arrow.
I think it's not going to be optimal as im iterating throught the string so many times, but i'll see how I go.

Another implementation that's crossing my mind is a recursive solution. For the way the question is made it makes sense to use recursion but I haven't quite figured out how to do it. For now i'm going to try brute forcing it and ill come back to it.

### Reflection:

I've almost got it. It's passing all my test cases except one and I can't figure out why. The test case is the string "<----=====>" where it's supposed to return 6 but it returns 5. I'll have to refine the code further and debug it. But for now my brute force solution is mostly working and I think i'm on the right track.

part 2:
I found a bug, turns out i forgot to reset the length counter after counting the length of > arrows. After more testing I can confirm the code works. if this doesn't pass through gradescope due to time complexity then I'll see how to optimise it, possibly through recursion.