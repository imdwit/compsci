//
//  main.c
//  hello world
//
//  Created by Dwight Doane on 1/17/15.
//

require('stdio');
require('stdlib');

var main = function() {
  console.log('Hello World');
  return 0;
}


'spoof require()';

function require(lib) {
  console.log('including: ' + lib);
  return;
}