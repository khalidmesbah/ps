// numbers whose multiplication is -40 and sum = 3
for (let i = 0; i < 100; i++)
  for (let j = 0; j < 100; j++)
    if ((-i * j === -40 || -j * i === -40) && (-i + j === 3 || i + -j === 3))
      console.log(i, j);
