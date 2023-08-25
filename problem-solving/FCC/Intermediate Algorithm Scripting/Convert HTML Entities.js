function convertHTML(str) {
  let entities = {
    "&": "&amp;",
    "<": "&lt;",
    ">": "&gt;",
    '"': "&quot;",
    "'": "&apos;",
  };
  return str
    .split("")
    .map((e) => entities[e] || e)
    .join("");
}
convertHTML("Dolce & Gabbana");