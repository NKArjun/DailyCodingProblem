const findMissingPositive = (a) => {
    for (let i = 0; i < a.length; i++) {
        while (a[i] >= 1 && a[i] <= a.length && (i + 1) != a[i]) {
            let temp = a[a[i] - 1];
            a[a[i] - 1] = a[i];
            a[i] = temp;
        }
    }
    for (let i = 0; i < a.length; i++) {
        if (a[i] !== i + 1) {
            return i + 1;
        }
    }
}

console.log(findMissingPositive([1, 2, 0]));