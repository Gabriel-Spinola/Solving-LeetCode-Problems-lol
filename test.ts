type Fn = (...params: number[]) => number

function memoize(fn: Fn): Fn {
  let cache = {}
  
  return function(...args: number[]) {    
      const key = args.join(',')

      if (key in cache) return cache[key]

      return cache[key] = fn(...args)
  }   
}
