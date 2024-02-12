#!/usr/bin/node
let v = process.argv[2];
if (v === undefined) {
  console.log('No argument');
} else {
  console.log(v);
}
