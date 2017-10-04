var myApp = angular.module('myApp', []);
 myApp.controller('AppCtrl', ['$scope', '$http', function($scope, $http) {
   console.log("Hello World from controller");

   // refresh the view
   var refresh = function() {
     $http.get('/multiples').success(function(response) {
       console.log("I got the data I requested");
       // put the data into index.html
       $scope.multiples = response;
       // clear input boxes after the refresh function is called
       $scope.mult = "";
     });
   };

   refresh();

   // function that recieves data from input boxes in the view
   $scope.addMult = function() {

     // process if the first int is a multiple of the second
     var isItMultiple = (parseInt($scope.mult.num2) % parseInt($scope.mult.num1));
     console.log(isItMultiple);
       if (isItMultiple == 0) {
         $scope.mult.num3 = "YES";
       } else {
         $scope.mult.num3 = "NO";
       }

     // verify to the view data was received
     console.log($scope.mult);

     // send data from input boxes to server
     // .success takes response from the server as an argument
     $http.post('/multiples', $scope.mult).success(function(response) {
       // Print response from the server/MongoDB
       console.log(response);
       refresh();
     });
   };

   // remove function to delete data from DB
   $scope.remove = function(id) {
     console.log(id);
     // Send delete request to the server
     $http.delete('/multiples/' + id).success(function(response) {
       refresh();
     });
   };
}]);
