This is the soluation to a probleme that was given to us as a partiel exam in 15/11/2023 (a day before my birthday :D),It is was a quiet challenging probleme that requires a good knowledge in matrices ,loops , and boolean munipulation.
The probleme goes as follows :
given a square matrix n*n of maximume size 50*50 (n must be greater than 2) we will play a game called tsubasa.
Firstly, for every line of our matrix we must read an array of inputs that includes all the numbers in range[1,n] without them being sorted downwards or repeated.
Then,we sort the first line in downwards order then apply the same operations to all the lines below our main line(for lines greater than 1).
And at last,we check if the first columbn is sorted downards else we keep applying the same operations but now for the second line (we sort it and apply the same transformation for lines greater than 2 and check the the second columbn .....).
As an output we will print the last line that was modified by our game (lines begin with 1 till n).

It was a fun challenge,in the exam i didn't have much time to think about or discuss the probleme ,i just started solving it with all the knowledge that i had (i didn't have much time left) but when i tryed solving it at home i've incountered many problemes(C language being cool as usually :'< ) and i used many index variables that are pain in the ass to understand (I'm very bad at naming variables) , it was choatic .But it finally worked after hourse of trying to figure out why the code isn't working (turns out i had a logical probleme with the bool sorted &&!found (true and false stuff) so i used only one bool found and it worked!!!!).


By the way this is my first ever github upload i don't know if i'm using read me file for the right purpose or just i'm writting a jornal here (expressing my feeling xD).
