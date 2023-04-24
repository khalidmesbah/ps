function checkCashRegister(price, cash, cid) {
  let moneyUnits = {
    PENNY: 1,
    NICKEL: 5,
    DIME: 10,
    QUARTER: 25,
    ONE: 100,
    FIVE: 500,
    TEN: 1000,
    TWENTY: 2000,
    "ONE HUNDRED": 10000,
  };
  let status = "OPEN";
  let change = [
    ["PENNY", 0],
    ["NICKEL", 0],
    ["DIME", 0],
    ["QUARTER", 0],
    ["ONE", 0],
    ["FIVE", 0],
    ["TEN", 0],
    ["TWENTY", 0],
    ["ONE HUNDRED", 0],
  ];
  change = change.reverse();
  let changeDue = (cash - price) * 100;
  let cidSum = cid.reduce((a, c) => a + c[1], 0);
  cidSum *= 100;
  if (cidSum < changeDue) return { status: "INSUFFICIENT_FUNDS", change: [] };
  else if (changeDue === cidSum) return { status: "CLOSED", change: cid };
  else {
    cid.map((e) => (e[1] = Math.round(e[1] * 100)));
    cid = cid.reverse();
    while (changeDue >= 0) {
      if (changeDue - moneyUnits["ONE HUNDRED"] >= 0 && cid[0][1] > 0) {
        changeDue -= moneyUnits["ONE HUNDRED"];
        cid[0][1] -= moneyUnits["ONE HUNDRED"];
        change.map((e) => {
          if (e[0] === "ONE HUNDRED") e[1] += moneyUnits["ONE HUNDRED"];
        });
      } else if (changeDue - moneyUnits.TWENTY >= 0 && cid[1][1] > 0) {
        changeDue -= moneyUnits.TWENTY;
        cid[1][1] -= moneyUnits.TWENTY;
        change.map((e) => {
          if (e[0] === "TWENTY") e[1] += moneyUnits.TWENTY;
        });
      } else if (changeDue - moneyUnits.TEN >= 0 && cid[2][1] > 0) {
        changeDue -= moneyUnits.TEN;
        cid[2][1] -= moneyUnits.TEN;
        change.map((e) => {
          if (e[0] === "TEN") e[1] += moneyUnits.TEN;
        });
      } else if (changeDue - moneyUnits.FIVE >= 0 && cid[3][1] > 0) {
        changeDue -= moneyUnits.FIVE;
        cid[3][1] -= moneyUnits.FIVE;
        change.map((e) => {
          if (e[0] === "FIVE") e[1] += moneyUnits.FIVE;
        });
      } else if (changeDue - moneyUnits.ONE >= 0 && cid[4][1] > 0) {
        changeDue -= moneyUnits.ONE;
        cid[4][1] -= moneyUnits.ONE;
        change.map((e) => {
          if (e[0] === "ONE") e[1] += moneyUnits.ONE;
        });
      } else if (changeDue - moneyUnits.QUARTER >= 0 && cid[5][1] > 0) {
        changeDue -= moneyUnits.QUARTER;
        cid[5][1] -= moneyUnits.QUARTER;
        change.map((e) => {
          if (e[0] === "QUARTER") e[1] += moneyUnits.QUARTER;
        });
      } else if (changeDue - moneyUnits.DIME >= 0 && cid[6][1] > 0) {
        changeDue -= moneyUnits.DIME;
        cid[6][1] -= moneyUnits.DIME;
        change.map((e) => {
          if (e[0] === "DIME") e[1] += moneyUnits.DIME;
        });
      } else if (changeDue - moneyUnits.NICKEL >= 0 && cid[7][1] > 0) {
        changeDue -= moneyUnits.NICKEL;
        cid[7][1] -= moneyUnits.NICKEL;
        change.map((e) => {
          if (e[0] === "NICKEL") e[1] += moneyUnits.NICKEL;
        });
      } else if (changeDue - moneyUnits.PENNY >= 0 && cid[8][1] > 0) {
        changeDue -= moneyUnits.PENNY;
        cid[8][1] -= moneyUnits.PENNY;
        change.map((e) => {
          if (e[0] === "PENNY") e[1] += moneyUnits.PENNY;
        });
      } else {
        break;
      }
    }
  }
  let changeSum = change.reduce((a, c) => a + c[1], 0);
  if (changeSum < changeDue) (status = "INSUFFICIENT_FUNDS"), (change = []);
  else change = change.filter((e) => e[1] !== 0);
  change.map((e) => (e[1] = e[1] / 100));
  return { status: status, change: change };
}
console.log(
  checkCashRegister(19.5, 20, [
    ["PENNY", 1.01],
    ["NICKEL", 2.05],
    ["DIME", 3.1],
    ["QUARTER", 4.25],
    ["ONE", 90],
    ["FIVE", 55],
    ["TEN", 20],
    ["TWENTY", 60],
    ["ONE HUNDRED", 100],
  ])
); // return {status: "OPEN", change: [["QUARTER", 0.5]]}

console.log(`--------------------`);

console.log(
  checkCashRegister(3.26, 100, [
    ["PENNY", 1.01],
    ["NICKEL", 2.05],
    ["DIME", 3.1],
    ["QUARTER", 4.25],
    ["ONE", 90],
    ["FIVE", 55],
    ["TEN", 20],
    ["TWENTY", 60],
    ["ONE HUNDRED", 100],
  ])
); // return {status: "OPEN", change: [["TWENTY", 60], ["TEN", 20], ["FIVE", 15], ["ONE", 1], ["QUARTER", 0.5], ["DIME", 0.2], ["PENNY", 0.04]]}

console.log(`--------------------`);
console.log(
  checkCashRegister(19.5, 20, [
    ["PENNY", 0.01],
    ["NICKEL", 0],
    ["DIME", 0],
    ["QUARTER", 0],
    ["ONE", 1],
    ["FIVE", 0],
    ["TEN", 0],
    ["TWENTY", 0],
    ["ONE HUNDRED", 0],
  ])
); // return {status: "INSUFFICIENT_FUNDS", change: []}

console.log(`--------------------`);
console.log(
  checkCashRegister(19.5, 20, [
    ["PENNY", 0.5],
    ["NICKEL", 0],
    ["DIME", 0],
    ["QUARTER", 0],
    ["ONE", 0],
    ["FIVE", 0],
    ["TEN", 0],
    ["TWENTY", 0],
    ["ONE HUNDRED", 0],
  ])
); // return {status: "CLOSED", change: [["PENNY", 0.5], ["NICKEL", 0], ["DIME", 0], ["QUARTER", 0], ["ONE", 0], ["FIVE", 0], ["TEN", 0], ["TWENTY", 0], ["ONE HUNDRED", 0]]}
