#!/usr/bin/node
const argv = process.argv;
if (argv.length === 2 || argv.length === 3) {
  console.log(0);
} else {
  const big = [];
  if (Number(argv[2]) > Number(argv[3])) {
    big[0] = Number(argv[2]);
    big[1] = Number(argv[3]);
  } else {
    big[0] = Number(argv[3]);
    big[1] = Number(argv[2]);
  }
  for (let i = 2; i < argv.length - 2; ++i) {
    const j = Number(argv[i]);
    if (j > big[0]) {
      big[1] = big[0];
      big[0] = j;
    } else if (j > big[1]) {
      big[1] = j;
    }
  }
  console.log(big[1]);
}
