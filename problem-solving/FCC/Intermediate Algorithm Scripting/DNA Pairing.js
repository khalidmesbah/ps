function pairElement(str) {
  let newArr = [];
  str.split("").map((e) => {
    if (e === "G") newArr.push(["G", "C"]);
    else if (e === "C") newArr.push(["C", "G"]);
    else if (e === "A") newArr.push(["A", "T"]);
    else newArr.push(["T", "A"]);
  });
  return newArr;
}

pairElement("GCG");
pairElement("ATCGA");
