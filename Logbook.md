# Yaman's logbook
# Week 1

## Problem 1: Inchworm

### Initial thoughts:

This problem is straightforward, it can be solved using a bruteforce approach using O(n) complexity by simply traversing through the entire branch.
The approach I can take can be like this: I set up a counter to keep track of leaves eaten, we iterate through the branch from the start to the end, incrementing in steps of "rest". Once the worm rests we can check if the worm is on a leaf, if so we increment the counter. Do this until we reach the end of the branch then return the counter.
This seems simple, and I'm confident it can just be done with basic maths and if statements.

### Reflection:

Took me a decent bit of time to figure out how to check for leaves, I was initially doing a stupid approach of many if statements. I realised I can just check if the current position is a multiple of the leaf distance by using the modulo operator and checking if its equal to 0. 
This was an alright question, did it on a train so I got to think about it for a bit.


## Problem 2: ThrowTheBall

### Initial Thoughts:

In this problem, a ball is passed around a circle of friends, and the direction the ball is passed depends on how many times a player recieves the ball.
I won't repeat the entire question here, but my approach is essentially just creating a game loop that will keep going until the game meets an end condition.
I can use an array or vector to track how many times each player recieves the ball, and initialise the current player to 0 index. I can also initialise a counter to track number of passes.
The while loop will simulate the ball passing and increment the count for the current player.
First we'll check if the current player recieved the ball 'M' times and if so end the game.
otherwise we check if the count is odd or even, then place the ball to the left or right accordingly.
Once the game eventually reaches its break condition, we return the total number of passes.
This one's gonna take me some time to figure out and a lot of debugging, but i think i have the general structure planned.

### Reflection:

I was right in the sense that it will take me a while. It was mainly the if statements that took me too long. 
There is probably a more optimal way of doing this solution, but its just a brute force approach i thought of. Realistically if the parameters are a high number then the game could take a long time.


## Problem 3: StreetParking

### Initial Thoughts:

We need to find the number of valid parking spots by analysing a string given to us. There is a big list of rules given that I won't repeat because I don't want to retype all of it.
But here's my approach. We can pretty much make a replica of the string but instead its a vector of booleans of the same length. This vector marks positions where parking is not allowed.
Then it is a case of iterating through the string and analysing the characters. This can just be done using if statements. The part where it can get tricky is with conditions 'B' and 'S' as i'd have to also mark adjacent spaces. I might end up having to make nested if statements which sounds grim.

### Reflection:

Interesting question to say the least. I messed up a lot by making too many nested if statements, especially with conditions 'B' and 'S'. In the end i figured if i ran into those two characters, i can just check if the current iterator is more than or equal to 1 or 2.
This question was kind of fun once it made sense, especially with testing it out.
Can't think of a more optimal solution, this one is O(n + n). But it works so im not going to mess it up further.


## Problem 4: AzimuthMonitoring

### Initial Thoughts:

This one is gonna give me a headache for sure and i dont know why. It's about a robot that follows a set of instructions and I pretty much have to figure out what direction it is facing after all the instructions given.
If i want to bruteforce this, i could just do it like its a Lego Mindstorm robot and just make if statements for all instructions.
Overall though this should just be one for loop that is O(n) time complexity, shouldn't be a big deal.

### Reflection:

This one was not as bad as I thought. Like I initially thought, it was just a big case of if statements and math.
I thought of it like I was making a Lego Mindstorm robot like in high school and it made sense.
I did the operations using modulo 360 arithmetic which ensures the azimuth is always within a valid range. It's effecient and straightforward
I had a bit of experimenting with the substr function as i hadn't used it that much, took a while to figure it out.


## Problem 5: 

### Initial Thoughts:

To find the largest square in the given grid, the square's side must be parallel to the sides of the grid.

My thought process behind this is that I firstly must get number of rows and columns and max size.
We can iterate over the possible square sizes from largest possible down to 2. And for each size, iterate over possible top-left corners of the square.
Then we can check fi all four courners of the current square have the same digit. If we find something valid, we update the maxsize variable, and then the answer is simply just the square of that variable.
This is going to hurt my brain in implementation but ill see how i go

### Reflection:

i'm dissapointed in the fact that i used a triple nested loop, but i feel like i had no other solution. 
The implementation was surprisingly exactly how i thought of it. I drew it all up on a whiteboard to visualise it.
I don't think i want to do this solution ever again though.