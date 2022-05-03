const checkPair = (arr, k) => {
    let s = new Set();
    for (let i = 0; i < arr.length; i++) {
        if (s.has(k - arr[i])) {
            return true;
        }
        s.add(arr[i]);
    }
    return false;
}

let arr = [10, 15, 3, 7]
console.log(checkPair(arr, 17))