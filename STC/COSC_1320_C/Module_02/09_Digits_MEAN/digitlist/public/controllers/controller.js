var myApp = angular.module('myApp', []);
 myApp.controller('AppCtrl', ['$scope', '$http', function($scope, $http) {
   console.log("Hello World from controller");

   $http.get('/digitlist').success(function(response) {
     console.log("I got the data I requested");
     // put the data into index.html
     $scope.digitlist = response;
   });

}]);
