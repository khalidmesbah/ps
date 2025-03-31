const itemValues = {
  water: 10,
  book: 3,
  food: 9,
  jacket: 5,
  camera: 6,
};
const itemWeights = {
  water: 3,
  book: 1,
  food: 2,
  jacket: 2,
  camera: 1,
};

const rows = ["water", "book", "food", "jacket", "camera"];
const cols = [1, 2, 3, 4, 5, 6];

const weights = Array.from({ length: rows.length }, () =>
  new Array(cols.length).fill(0),
);
const items = Array.from({ length: rows.length }, () =>
  new Array(cols.length).fill(""),
);

const printItems = () => {
  let art = "".padStart(8);
  for (let col of cols) {
    art += ` ${col}  `.padStart(3);
  }
  art += "\n";
  for (let i = 0; i < weights.length; i++) {
    art += `${rows[i].padEnd(6)}: `;
    for (let j = 0; j < weights[i].length; j++) {
      art += `${items[i][j] || "-"} `.padStart(4, "-");
    }
    art += "\n";
  }

  console.log(`<--------------->`);
  console.log(art);
};

const printWeights = () => {
  let art = "".padStart(8);
  for (let col of cols) {
    art += `${col} `.padStart(3);
  }
  art += "\n";
  for (let i = 0; i < weights.length; i++) {
    art += `${rows[i].padEnd(6)}: `;
    for (let j = 0; j < weights[i].length; j++) {
      art += `${weights[i][j]} `.padStart(3);
    }
    art += "\n";
  }
  console.log(`<--------------->`);
  console.log(art);
};

for (let i = 0; i < weights.length; i++) {
  const item = Object.keys(itemValues)[i];
  const itemWeight = itemWeights[item];
  const itemValue = itemValues[item];

  for (let j = 0; j < cols.length; j++) {
    const colWeight = cols[j];
    const isPrevMax = i - 1 >= 0;
    const isRemainingSpace = j - itemWeight >= 0;
    if (!isPrevMax) {
      if (itemWeight <= colWeight)
        (weights[i][j] = itemValue), (items[i][j] = item.slice(0, 1));
    } else {
      const prevMax = weights[i - 1][j];
      const valueOfRemainingSpace = isRemainingSpace
        ? weights[i - 1][j - itemWeight]
        : 0;

      weights[i][j] = Math.max(valueOfRemainingSpace + itemValue, prevMax);

      if (isRemainingSpace && valueOfRemainingSpace + itemValue > prevMax) {
        items[i][j] = items[i - 1][j - itemWeight] + item.slice(0, 1);
      } else items[i][j] = items[i - 1][j];
    }
  }
}

printWeights();
printItems();
