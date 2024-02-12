#!/usr/bin/node
const n = parseInt(process.argv[2]);
if (isNaN(n)) {
  console.log('Not a number');
} else {
  console.log('My number: ' + parseInt(process.argv[2]));
}
