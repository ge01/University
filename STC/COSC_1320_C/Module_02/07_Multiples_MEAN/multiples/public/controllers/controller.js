var myApp = angular.module('myApp', []);
 myApp.controller('AppCtrl', ['$scope', '$http', function($scope, $http) {
   console.log("Hello World from controller");


   var refresh = function() {
     $http.get('/multiples').success(function(response) {
       console.log("I got the data I requested");
       $scope.multiples = response;
       $scope.contact = "";
     });
   };

   refresh();

   $scope.addMult = function() {
     console.log($scope.mult);
     $http.post('/multiples', $scope.mult).success(function(response) {
       console.log(response);
       refresh();
     });
   };

   $scope.remove = function(id) {
     console.log(id);
     $http.delete('/multiples/' + id).success(function(response) {
       refresh();
     });
   };

}]);
