const countWays = (s) => {
    let cache = new Array(s.length + 1);
    cache[s.length] = 1;
    for (let i = s.length - 1; i >= 0; i--) {
        if (s[i] == '0') {
            cache[i] = 0;
        } else if (i == s.length - 1) {
            cache[i] = 1;
        }
        else if (parseInt(s.substr(i, 2)) <= 26) {
            cache[i] = cache[i + 1] + cache[i + 2];
        } else {
            cache[i] = cache[i + 1];
        }
    }
    return cache[0];
}

console.log(countWays("101"));