const example = {
  data: "a",
  next: {
    data: "b",
    next: {
      data: "c",
      next: {
        data: "d",
        next: {
          data: "e",
          next: {
            data: "f",
            next: {
              data: "g",
              next: {
                data: "h",
                next: null,
              },
            },
          },
        },
      },
    },
  },
};

const lastThree = (input, x, y, z) =>
  input == null ? [x, y, z] : lastThree(input.next, y, z, input.data);

const lastThree2 = (example) => {
  const letters = [];

  const getLetter = (obj) => {
    if (obj.data) letters.push(obj.data);
    if (obj.next) getLetter(obj.next);
  };

  getLetter(example);

  return letters.slice(-3);
};

console.log(lastThree(example));
console.log(lastThree2(example));
