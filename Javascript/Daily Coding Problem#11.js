const countWays = (num, climbList) => {
    let cache = new Array(num + 1);
    cache[0] = 1;
    for (let i = 1; i <= num; i++) {
        cache[i] = 0;
        for (let j = 0; j < climbList.length; j++) {
            if ((i - climbList[j]) >= 0) {
                cache[i] = cache[i] + cache[i - climbList[j]];
            }
        }
    }
    return cache[num];
}

console.log(countWays(10, [1, 3, 5]));