const productArray = (arr) => {
    let prefix_products = [];
    let suffix_products = new Array(arr.length);
    let result = [];
    prefix_products.push(arr[0]);
    for (let i = 1; i < arr.length; i++) {
        prefix_products.push(prefix_products[i - 1] * arr[i]);
    }
    let size = arr.length;
    suffix_products[size - 1] = arr[size - 1];
    for (let i = size - 2; i >= 0; i--) {
        suffix_products[i] = suffix_products[i + 1] * arr[i];
    }
    for (let i = 0; i < size; i++) {
        if (i == 0) {
            result.push(suffix_products[i + 1]);
        } else if (i == size - 1) {
            result.push(prefix_products[i - 1])
        } else {
            result.push(prefix_products[i - 1] * suffix_products[i + 1]);
        }
    }
    return result;
}

let result = productArray([1, 2, 3, 4, 5]);
console.log(result);