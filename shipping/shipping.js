function shipIt(weight, distance) {
  var rate;
  if(weight <= 10) {
    rate = 10;
  }
  else {
    rate = (10 + ((weight - 10) * .5 ));
  }
  if(distance % 500 === 0) {
    rate += (distance / 500 * 5);
  }
  else {
    rate += ((distance / 500 )* 5) + 5;
  }
  console.log(Math.floor(rate));
}




declare 3 integers. 1 for the rate to ship the package, 1 for the package's weight, and 1 for the distance to ship the package.
Ask the user what the weight of the package is in pounds
ask the user what the distance is in miles

if the weight is less than or equal to 10 pounds the rate starts at 10 dollars otherwise the weight is 10 dollars plus 50 cents for each pound over 10 pounds
  so we subtract ten from the weight and multiply by .5 to get the rate for the weight

Then we have to add the rate for the distance


The rate for distance is 5 dollars per 500 miles.
So we divide the distance by 500, and multiply by 5.

and if there is a remainder we just add 5 more dollars;

