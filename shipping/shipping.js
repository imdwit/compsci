/*If the weight of the
package is <= 10 pound this the rate is $10. If the package is over 10 pounds then the rate is $10 plus 50
cents for each pound over 10. In addition you are to add $5.00 for each 500 miles (or part of) shipped.
*/







function shipIt(weight, distance) {
  var rate;
  if(weight <= 10) {
    rate = 10;
  }
  else {
    rate = (10 + ((weight - 10) * .5 ));
  }

  console.log('rate: ', rate)

  var x = distance % 500;

  if(x === 0) {
    rate += (distance / 500 * 5);
  }
  else {
    rate += (distance / 500) + 5;
  }
  console.log(rate);

  return rate;
}