function truthCheck(collection, pre) {
    for (let e of collection)
        if (Boolean(e[pre]) === false) return false
    return true;
}

console.log(truthCheck([{ name: "Quincy", role: "Founder", isBot: false }, { name: "Naomi", role: "", isBot: false }, { name: "Camperbot", role: "Bot", isBot: true }], "isBot"))