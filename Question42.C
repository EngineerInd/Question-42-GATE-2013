/*What is the return value of f(p,p), if the value of p is initialized to 5 before the call? Note that the first parameter is passed by reference, whereas the second parameter is passed by value*/

int f(int &x, int c) { 
c = c - 1; 
if (c==0) return 1; 
x = x + 1; 
return f(x,c) * x; 
}

/*(A) 3024
(B) 6561
(C) 55440
(D) 161051*/

//B
