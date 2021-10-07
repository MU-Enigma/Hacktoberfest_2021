# Detective Deepuck

Suppose I gave you the number 1751477356 and ask you to tell me what it means to you. What would you do? I imagine you'd just stare back cluelessly! Well of course, that's only natural.

You know by now that an 'unsigned int' is a datatype of size 32 bits (4 bytes). Also, you should know by now that a 'char' is a datatype of size 8 bits (1 byte). Now, imagine a 4 lettered word such as "hell". This essentially has four characters (‘h’, ‘e’, ‘l’, ‘l’) in it. Considering the ascii values of each of these characters and converting them to 8bit binary digits and stringing them together, we can convert the 4 lettered word to a stream of bits as follows:

hell ⤑ 01101000|01100101|01101100|01101100
                  'h'                 'e'              'l'          'l'
But wait! This has exactly 32bits (4 bytes), no? Now, what if we interpret this stream of 32 bits as one unsigned int? What will its decimal value be? It turns out the answer is 1751477356. Therefore, a seemingly innocent number such as 1751477356 can be wisely used to hide some deadly information! Unless someone knows exactly what we are doing, there is no way they can guess it. The process of reconstructing a message based on a secret code like this is called deciphering. 

 

Help Detective Deepuck write a computer program that takes a stream of N 'unsigned integers' and converts print the message hidden in them.


Sample Input:

5
1282365029
1599564108
1281320553
1315200833
1601659257

 

(Where the first line 5 indicates that the no. of secret codes N = 5. And then the N codes follow in the order.)

 

Sample Output:
LoVe_WiLL_fiNd_A_way

 

Constraints:
The language of the secret message has to be English.

 

 

Note: You'll need the following bit-level operators to solve this problem. Or check this: https://en.wikipedia.org/wiki/Bitwise_operations_in_C

<img src="image.png"
     alt="Markdown Monster icon"
     style="float: left; margin-right: 10px;" />