#!/usr/bin/node
function factorial (n) {
  if (n === undefined || isNaN(n) || n === 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

console.log(factorial(Number(process.argv[2])));
