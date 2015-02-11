function _sum(n1, n2) {
  return parseInt(n1, 10) + parseInt(n2, 10);
}

function _product(n1, n2) {
  return parseInt(n1, 10) * parseInt(n2, 10);
}



function compute(){
  var number1 = document.getElementById('number_1').value;

  var number2 = document.getElementById('number_2').value;

  var sum = _sum(number1, number2);
  var product = _product(number1, number2);

  var str = 'The product of ' + number1 + ' & ' + number2 + 'is ' + product;
  var str2 = 'The sum of ' + number1 + ' & '+ number2 + ' is ' + sum;
  console.log(str, str2);
}


