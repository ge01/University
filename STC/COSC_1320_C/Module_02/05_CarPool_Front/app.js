var submitButton = document.getElementById("submit-button");
var resetButton = document.getElementById("reset-button");
var tripDistance = document.getElementById("trip-distance");
var fuelEfficiency = document.getElementById("fuel-efficiency");
var gasPrice = document.getElementById("gas-price");
var gasDisplay = document.querySelector("#gas-display");
var costPerDay = 0;

console.log(submitButton);
console.log(resetButton);

submitButton.addEventListener("click", function() {
    costPerDay = parseFloat(tripDistance.value) /
                 parseFloat(fuelEfficiency.value) *
                 parseFloat(gasPrice.value);
    console.log(costPerDay);

    gasDisplay.textContent = costPerDay.toFixed(2);
});

resetButton.addEventListener("click", function() {
  reset();
});

function reset() {
  gasDisplay.textContent = 0;
}
