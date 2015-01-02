// n is input to this function body
var x = 0;
var y = 1;
var z = 1;

for 1..n {
    x = y;
    y = z;
    z = x + y;
}
return x;
