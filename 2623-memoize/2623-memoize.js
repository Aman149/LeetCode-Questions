function memoize(fn) {
  const cache = {};
  return function() {

    // convert arguments to string
    let key = '';
    for (const arg of arguments) {
      key += ',' + arg;
    }

    if (key in cache) {
      return cache[key];
    }
    const functionOutput = fn(...arguments);
    cache[key] = functionOutput;
    return functionOutput;
  }
}