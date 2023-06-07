// const array = ['apple' ,'banana', 'grapes', 'mango', 'blue berry']

// console.log(array.at(3))

// concat() method

// const array1 = ['apple', 'banana', 'papaya', 'mango']

// const array2 = ['Ginger', 'Onion', 'Garlic']

// const array3 = array1.concat(array2)

// console.log(array3[3])

// array3[3] = 'Lady Finger'

// console.log(array3[3])

// copyWithin() to copy the element inside the array

// const array = ['apple', 'papaya', 'banana', 'grapes']

// array.copyWithin(3,0)

// console.log(array)

// let f = array.entries()

// console.log(f)

// for ( let x of array) console.log(x)b 

// array.push('one', 'two', 'three')

// console.log(array)

// every() method

// const array = [19, 45, 65, 65, 44, 33]

// let result = array.every((value)=>{
//     return value > 18;
// })

// console.log(result)


// const array = ['apple', 'Banana', 'Mango', 'Guava', 'Berry']

// console.log("Length of array is : ", array.length)

// console.log(array)

// array.fill('kiwi', 1, 2)

// console.log(array)


// 7. array.filter() 

// const array = [23, 45, 65, 34, 34, 23, 12, 23, 9, 7]

// const arrayFiltered = array.filter((element)=>{
//     return element > 18
// })

// console.log(array, array.length)
// console.log(arrayFiltered, arrayFiltered.length)

// 8. array.find() 

// const array = [12, 2, 12, 5]

// let number = array.find((element)=>{
//     return element > 18
// })

// console.log(number)

// 9. array.findIndex()

// const array = [2,3,4,5,6,7,8,9]

// let index = array.findIndex((element)=>{
//     return element > 2
// })

// console.log('index is: ', index)
// console.log(array.at(index))

// 10. array.flat()

// const array = [1,2,[3,4],[4, 6]]

// const array1 = array.flat()

// console.log(array, array1)

// 11. array.forEach()

// const array = ['apple', 'guava', 'berry']

// array.forEach((element)=>{
//     console.log(element)
// })

// 12. from() with forEach()

let str = "How are you"

 
 
str.split(" ").Array.from(str).forEach((element)=>{
    console.log(element)
})