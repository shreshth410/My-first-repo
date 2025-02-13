const math = require('mathjs');

function printMatrix(A){
    for (let i = 0; i < A.length; i++) {
        for (let j = 0; j < A[i].length; j++) {
            process.stdout.write(A[i][j] + "\t");
        }
        console.log("\n");
    }
}

let I1 = 2;
let i1 = 0
let i2 = 0;
let i3 = 0;
let a = 0;
let b = 0;
let z = 0;

console.log("Step 1: ");
console.log("Applying Node-Voltage Rule: Make a matrix of all the resistances, and multiply to find values of i1, i2 & i3:");
console.log("[-80\t0\t10]\t[i1] \t [-60+10I1]");
console.log("|0\t -40\t20|\t|i2| \t=\t[-40]");
console.log("[10\t 20\t -40 ]\t[i3] \t \t[-10I1]");

A=[[-30,0,10],
[0,-40,20],
[10,20,-40]];

B = [[(10*I1)-60],
[-40],
[(-10)*I1]];

solution = math.lusolve(A, B);
i1 = solution[0][0];
i2 = solution[1][0];
i3 = solution[2][0];

console.log("Q10:");

console.log("At I1 = "+I1+"\ni1 = "+i1+"\ni2 = "+i2+"\ni3 = "+i3+"\n");

console.log("Vz - 10(i1-i3) - 10I1 = 0");

z = (10*(i1-i3)+10*I1)
console.log("Vz = "+z+"\n");

I1 = 1.75
console.log("Q11:");
B = [[(10*I1)-60],
[-40],
[(-10)*I1]];
solution = math.lusolve(A, B);
i1 = solution[0][0];
i2 = solution[1][0];
i3 = solution[2][0];
console.log("At I1 = "+I1+"\ni1 = "+i1+"\ni2 = "+i2+"\ni3 = "+i3+"\n");

console.log("Current through 60V = i1 = "+i1);


console.log("Q12:");
I1 = 9.25;
B = [[(10*I1)-60],
[-40],
[(-10)*I1]];
solution = math.lusolve(A, B);
i1 = solution[0][0];
i2 = solution[1][0];
i3 = solution[2][0];
console.log("Va - 10i1 - 20(i3-i2) = Vb");

console.log("Va-Vb = "+(10*i1 + 20*(i3-i2)));

