const findMaximumRooms = (time) => {
    let prefix = new Uint8Array(100001);
    for (let i = 0; i < time.length; i++) {
        prefix[time[i][0]]++;
        prefix[time[i][1] + 1]--;
    }
    let ans = prefix[0];
    for (let i = 1; i < 100001; i++) {
        prefix[i] += prefix[i - 1];
        ans = Math.max(ans, prefix[i]);
    }
    return ans;
}

let arr = [[0, 50], [30, 75], [60, 150]];
console.log(findMaximumRooms(arr));