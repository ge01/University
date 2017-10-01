// INITIALIZATION
var v1Button = document.getElementById("v1");
var resetButton = document.getElementById("v2");
var numInput1 = document.getElementById("num1");
var numDisplay1 = document.querySelector("#numDisplay1");
var numDisplay2 = document.querySelector("#numDisplay2");
var integer1 = 0;
var d = [];

console.log(v1Button);
console.log(resetButton);

// PROCESSING
v1Button.addEventListener("click", function() {

  integer1 = numInput1.value;
  console.log(integer1);

  d[0] = parseInt(integer1 / 10000);
  d[1] = parseInt(integer1 / 1000 % 10);
  d[2] = parseInt(integer1 / 100 % 10);
  d[3] = parseInt(integer1 / 10 % 10);
  d[4] = parseInt(integer1 % 10);

  console.log(d[0] + " " + d[1] + " " + d[2] + " " + d[3] + " " + d[4]);

  numDisplay1.textContent = integer1;
  numDisplay2.textContent = (d[0] + "-" + d[1] + "-" + d[2] + "-" +
                             d[3] + "-" + d[4]);

});

resetButton.addEventListener("click", function() {
  reset();
});

function reset() {
  numDisplay1.textContent = 0;
  numDisplay2.textContent = 0;
}
