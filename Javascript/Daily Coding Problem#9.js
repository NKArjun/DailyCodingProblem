const findLargestSum = (arr) => {
    let cache = new Array(arr.length);
    let size = arr.length;
    cache[size - 1] = arr[size - 1];
    for (let i = size - 2; i >= 0; i--) {
        if (i == size - 2) {
            cache[i] = arr[i] > arr[i + 1] ? arr[i] : arr[i + 1];
        } else {
            cache[i] = Math.max((arr[i] + cache[i + 2]), cache[i + 1]);
        }
    }
    return cache[0];
}

console.log(findLargestSum([3, -4, -10, -5, -10, 6]));