// INITIALIZATION
var v1Button = document.getElementById("v1");
var resetButton = document.getElementById("reset");
var numInput1 = document.getElementById('num1');
var numInput2 = document.getElementById("num2");
var integer1 = 0;
var integer2 = 0;

console.log(v1Button);
console.log(numInput1);

// PROCESSING
v1Button.addEventListener("click", function() {

  integer1 = numInput1.value;
  integer2 = numInput2.value;
  console.log(integer1);
  console.log(integer2);
  numDisplay1.textContent = integer1;
  numDisplay2.textContent = integer2;

  numDisplay1.classList.add("numColor1");
  numDisplay2.classList.add("numColor2");

});
