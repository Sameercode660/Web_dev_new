 let term1 = 0
 let term2 = 1
 let term3 = term1 + term2


 console.log(`${term1} ${term2}  ${term3}`)

 for(let i = 0; i < 5; i++)
 {
    term1 = term2
    term2 = term3
    term3 = term1 + term2;
     
    console.log(term3, end=' ')
 }